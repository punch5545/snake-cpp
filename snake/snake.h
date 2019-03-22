#pragma once

class snake {
public:
	void headDirection();
	void drawSnake();
	bool GameOver();
	void Init();
	void Draw();
	const int width = 20;
	const int height = 20;

private:
	void drawObject(int x, int y, const char * str);
	int xTemp[100]; // [coordination]
	int yTemp[50];
	int size;
	int x,y;
	int starX, starY;
	int dir;
};