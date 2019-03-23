#include "stdafx.h"
void selDif();

int dif = 1;
snake sn;
bool Continue = false;
bool selectDif = true;
int main() {
	cout << endl;
	cout << endl;
	cout << "\t                 ::::::::  ::::    :::     :::     :::    ::: :::::::::: " << endl;
	cout << "\t                :+:    :+: :+:+:   :+:   :+: :+:   :+:   :+:  :+:        " << endl;
	cout << "\t                +:+        :+:+:+  +:+  +:+   +:+  +:+  +:+   +:+        " << endl;
	cout << "\t                +#++:++#++ +#+ +:+ +#+ +#++:++#++: +#++:++    +#++:++#   " << endl;
	cout << "\t                       +#+ +#+  +#+#+# +#+     +#+ +#+  +#+   +#+        " << endl;
	cout << "\t                #+#    #+# #+#   #+#+# #+#     #+# #+#   #+#  #+#        " << endl;
	cout << "\t                 ########  ###    #### ###     ### ###    ### ########## "<<endl;
	cout << endl;
	cout << endl;
	sn.drawObject(35,11,"Press Any Key to Start"); //11,32
	selDif();
	while (Continue)
	{
		if (_kbhit()) {
			sn.Init(dif);
			system("cls");
			while (!sn.GameOver()) {
				sn.Draw();
				sn.drawSnake();
			}
			system("cls");
			cout << endl;
			cout << endl;
            cout << "\t\t ::::::::      :::     ::::    ::::  ::::::::::  ::::::::  :::     ::: :::::::::: :::::::::  " << endl;
            cout << "\t\t:+:    :+:   :+: :+:   +:+:+: :+:+:+ :+:        :+:    :+: :+:     :+: :+:        :+:    :+: " << endl;
            cout << "\t\t+:+         +:+   +:+  +:+ +:+:+ +:+ +:+        +:+    +:+ +:+     +:+ +:+        +:+    +:+ " << endl;
            cout << "\t\t:#:        +#++:++#++: +#+  +:+  +#+ +#++:++#   +#+    +:+ +#+     +:+ +#++:++#   +#++:++#:  " << endl;
            cout << "\t\t+#+   +#+# +#+     +#+ +#+       +#+ +#+        +#+    +#+  +#+   +#+  +#+        +#+    +#+ " << endl;
            cout << "\t\t#+#    #+# #+#     #+# #+#       #+# #+#        #+#    #+#   #+#+#+#   #+#        #+#    #+# " << endl;
            cout << "\t\t ########  ###     ### ###       ### ##########  ########      ###     ########## ###    ### " << endl;
			cout << endl;
			cout << endl;
			cout << "                               \t\t   Press Any key to Restart" << endl;
			cout << "                               \t\t\t Press Q to Quit" << endl;
			switch (getch()) {
			default:selDif(); break;
			case 'q': Continue = false; 
			}
		}
	}
	return 0;
}
void selDif() {
	int y = 11;
	selectDif = true;
	while (selectDif) {
		if (_kbhit()) {
			sn.drawObject(41, 11, "                                            "); //11,32
			sn.drawObject(47, 11, " EASY");
			sn.drawObject(47, 12, "NORMAL");
			sn.drawObject(47, 13, " HARD");
			switch (getch()) {
			case 'w':
				dif--;
				break;
			case 's':
				dif++;
				break;
			case 13:
				Continue = true;
				selectDif = false;
				break;
			}
			if (dif == 1)
				y = 11;
			else if (dif == 2)
				y = 12;
			else if (dif == 3)
				y = 13;
			for (int i = 11; i < 14; i++) {
				sn.drawObject(34, i, "            ");	sn.drawObject(54, i, "             ");
			}
			sn.drawObject(44, y, "¢º");
			sn.drawObject(54, y, "¢¸");
		}
	}
}