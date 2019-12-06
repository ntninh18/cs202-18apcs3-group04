﻿#pragma once
#ifndef CPEOPLE_H
#define CPEOPLE_H
#include"Library.h"

const int screenSizePlay_W = 32;
const int screenSizePlay_L = 70;

class CPEOPLE {
	int mX, mY;
	bool mState; //Trạng thái sống chết
	int level;
public:
	CPEOPLE();
	void Up();
	void Left();
	void Right();
	void Down();
	bool isImpact(const CVEHICLE*&);
	bool isImpact(const CANIMAL*&);
	bool isFinish();
	void increaseLevel();
	void drawPeople(int, int);
	bool isDead();
	void move();
	void delPeople(int, int);
	void changeState(bool);
	void move(int m);
};

void drawScreen();
#endif
