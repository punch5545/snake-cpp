#pragma once

class snake {
public:
	void headDirection();
	void drawSnake();
	bool GameOver();
	void Init(int diff);
	void Draw();
	const int width = 20;
	const int height = 20;
	void drawTail();
	void drawObject(int x, int y, const char * str);
private:
	int xTemp[21]; // [coordination]
	int yTemp[21];
	int size;
	int x,y;
	int starX, starY;
	int dir;
	int score;
	int gameSpeed;
};