#include "stdafx.h"

void snake::headDirection()
{
	if (_kbhit()) {
		switch (getch()) {
		case 'w':
		case 'W':
			if(dir != 3)
				this->dir = 1; break;
		case 'A':
		case 'a':
			if (dir != 4)
				this->dir = 2; break;
		case 'S':
		case 's':
			if (dir != 1)
				this->dir = 3; break;
		case 'D':
		case 'd':
			if (dir != 2)
				this->dir = 4; break;
		}
	}	
}

void snake::drawSnake()
{
	int prevX = xTemp[0];
	int prevY = yTemp[0];
	int prevX2, prevY2;
	xTemp[0] = x;
	yTemp[0] = y;
	for (int i = 1; i < size; i++ ) {
		prevX2 = xTemp[i];
		prevY2 = yTemp[i];
		xTemp[i] = prevX;
		yTemp[i] = prevY;
		prevX = prevX2;
		prevY = prevY2;
	}
	headDirection();
	switch (dir) {
	case 1: //up
		y--;
		break;
	case 2: //left
		x--;
		break;
	case 3: //down
		y++;
		break;
	case 4: //right
		x++;
		break;
	}
	GameOver();
	if (x == starX && y == starY) {
		this->starX = rand() % width;
		this->starY = rand() % height;
		size++;
	}
}

bool snake::GameOver()
{
	if (x > width || x < 0 || y > height || y < 0) {
		return true;
	}
	for (int i = 0; i < size; i++) {
		if (xTemp[i] == x && yTemp[i] == y)
			return true;
	}
	return false;
}

void snake::Init()
{
	this->size = 3;
	this->x = width / 2;
	this->y = height / 2;
	this->starX = rand() % width;
	this->starY = rand() % height;
	this->size = 0;
	for(int i = 0;i<100;i++)
		this->xTemp[i] = 0;
	for (int i = 0; i < 50; i++)
		this->yTemp[i] = 0;
	srand(time(0));
}

void snake::Draw()
{
	Sleep(50);
	drawObject(0, 0, "");
	//system("cls"); //system("clear");
	for (int i = 0; i < width + 2; i++)
		cout << "¢Ã";
	cout << endl;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (j == 0)
				cout << "¢Ã";
			if (i == y && j == x)
				cout << "¡á";
			else if (i == starY && j == starX)
				cout << "¡Ú";
			else
			{
				bool drawSnakeBody = false;
				for (int k = 0; k < size; k++) {
					if (xTemp[k] == j && yTemp[k] == i) {
						cout << "¡á";
						drawSnakeBody = true;
					}
				}
				if (!drawSnakeBody) {
					cout << "¡¡";
				}	

			}
			if(j == width - 1)
				cout << "¢Ã";
		} cout << endl;
	}
	for(int i = 0;i<width+2;i++)
		cout << "¢Ã";
	cout << endl;
}

void snake::drawObject(int x, int y, const char * str)
{
	COORD coord = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	printf("%s", str);
}
