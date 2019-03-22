#include "stdafx.h"

int main() {

	cout << "" << endl;
	snake sn;
	sn.Init();
	while (!sn.GameOver()) {
		sn.Draw();
		sn.drawSnake();
	}
	return 0;
}