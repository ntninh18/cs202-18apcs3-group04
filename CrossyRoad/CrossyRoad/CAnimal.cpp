﻿#include "Library.h"
void CDINOSAUR::Move(int x, int y)
{
	if (x >= screenSizePlay_L - 10)
	{
		eraseAnimal();
		mX = 2;
		mY = y;
		return;
	}
	this->mX = x;
	this->mY = y;
	draw();

}

void CDINOSAUR::draw()
{
	int x = mX;
	int y = mY;
	gotoXY(x, y);
	cout << "  /\\__/\\ ";
	gotoXY(x, y + 1);
	cout << " (  OwO`)";
	gotoXY(x, y + 2);
	cout << " o(_   )_";
}

/*
  /\__/\
 (  OwO`)  
 o(_   )_
*/

void CDINOSAUR::Tell()
{
}

CDINOSAUR::CDINOSAUR() : CANIMAL()
{
	type = dino;
}

CDINOSAUR::CDINOSAUR(int x, int y) : CANIMAL(x, y)
{
	type = dino;
}


CANIMAL::CANIMAL()
{
	mX = 0;
	mY = 0;
}

CANIMAL::CANIMAL(int x, int y)
{
	mX = x;
	mY = y;
}

void CANIMAL::eraseAnimal()
{
	int x = mX;
	int y = mY;
	gotoXY(x - 1, y);
	cout << "           ";
	gotoXY(x - 1, y + 1);
	cout << "           ";
	gotoXY(x - 1, y + 2);
	cout << "           ";
}

void CBIRD::Move(int x, int y)
{
	if (x >= screenSizePlay_L - 10)
	{
		eraseAnimal();
		mX = 3;
		mY = y;
		return;
	}
	this->mX = x;
	this->mY = y;
	draw();

}

void CBIRD::Tell()
{
}

void CBIRD::draw()
{
	int x = mX;
	int y = mY;
	gotoXY(x, y);
	cout << " =(C  o)>";



	//if (1) {
	//	gotoXY(x - 3, y);
	//	cout << " (  o)";
	//	cout << '>';
	//	int temp = x % 3;
	//	if (temp % 3 == 0) {
	//		gotoXY(x - 1, y - 1);
	//		cout << "   /\\ ";
	//	}
	//	else if (temp % 3 == 1) {
	//		gotoXY(x - 2, y);
	//		cout << "  _";
	//	}
	//	else {
	//		gotoXY(x - 1, y + 1);
	//		cout << "   \\/ ";
	//	}
	//}
	//else {
	//	gotoXY(x - 3, y);
	//	cout << ' <';
	//	cout << " (o  )";
	//	int temp = x % 3;
	//	if (temp % 3 == 0) {
	//		gotoXY(x - 1, y - 1);
	//		cout << "   /\\ ";
	//	}
	//	else if (temp % 3 == 1) {
	//		gotoXY(x, y);
	//		cout << " _ ";
	//	}
	//	else {
	//		gotoXY(x - 1, y + 1);
	//		cout << "   \\/ ";
	//	}
	//}
}


CBIRD::CBIRD()
{
	mX = 0;
	mY = 0;
	type = bird;
}

CBIRD::CBIRD(int x, int y) : CANIMAL(x, y)
{
	type = bird;
}