#ifndef GAME_H
#define GAME_H

#include <QMainWindow>
#include <QWidget>
#include <QPaintEvent>
#include <QTimer>
#include <QDebug>
#include <QPainter>
#include <QMouseEvent>
#include <QPainterPath>
#include <QPen>
#include <QColor>
#include <QBrush>
#include <QPushButton>
#include <QButtonGroup>
#include <QPalette>
#include <QtDebug>
#include <QLabel>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class game : public QMainWindow
{
    Q_OBJECT

public:
    game(QWidget *parent = nullptr);
    ~game();


private:
    int chessboard[15][15];
    int palyer;//偶数 第一个玩家 奇数 第二个玩家
    int moveX,moveY;
    int currentX,currentY;//上一个落子点
    bool lock;//棋盘锁
    int flags;//游戏现状 0 开始键 1结束键
    int game_model;//游戏模式 1pvc 2pvp
    QPushButton *button;
    QButtonGroup *selectModelGoup;
};
#endif // GAME_H
