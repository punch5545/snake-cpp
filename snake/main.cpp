#include "stdafx.h"

int main() {
	bool Continue = true;
	cout << endl;
	cout << endl;
	cout << "                 ::::::::  ::::    :::     :::     :::    ::: :::::::::: "<<endl;	
	cout << "                :+:    :+: :+:+:   :+:   :+: :+:   :+:   :+:  :+:        "<<endl;	
	cout << "                +:+        :+:+:+  +:+  +:+   +:+  +:+  +:+   +:+        "<<endl;	
	cout << "                +#++:++#++ +#+ +:+ +#+ +#++:++#++: +#++:++    +#++:++#   "<<endl;	
	cout << "                       +#+ +#+  +#+#+# +#+     +#+ +#+  +#+   +#+        "<<endl;	
	cout << "                #+#    #+# #+#   #+#+# #+#     #+# #+#   #+#  #+#        "<<endl;	
	cout << "                 ########  ###    #### ###     ### ###    ### ########## "<<endl;	
	cout << endl;
	cout << endl;
	cout << "                                Press Any Key to Start" << endl;
	while (Continue)
	{
		if (_kbhit()) {
			snake sn;
			sn.Init();
			system("cls");
			while (!sn.GameOver()) {
				sn.Draw();
				sn.drawSnake();
			}
			system("cls");
			cout << endl;
			cout << endl;
            cout << "   ::::::::      :::     ::::    ::::  ::::::::::  ::::::::  :::     ::: :::::::::: :::::::::  " << endl;
            cout << "  :+:    :+:   :+: :+:   +:+:+: :+:+:+ :+:        :+:    :+: :+:     :+: :+:        :+:    :+: " << endl;
            cout << "  +:+         +:+   +:+  +:+ +:+:+ +:+ +:+        +:+    +:+ +:+     +:+ +:+        +:+    +:+ " << endl;
            cout << "  :#:        +#++:++#++: +#+  +:+  +#+ +#++:++#   +#+    +:+ +#+     +:+ +#++:++#   +#++:++#:  " << endl;
            cout << "  +#+   +#+# +#+     +#+ +#+       +#+ +#+        +#+    +#+  +#+   +#+  +#+        +#+    +#+ " << endl;
            cout << "  #+#    #+# #+#     #+# #+#       #+# #+#        #+#    #+#   #+#+#+#   #+#        #+#    #+# " << endl;
            cout << "   ########  ###     ### ###       ### ##########  ########      ###     ########## ###    ### " << endl;
			cout << "                                Press Any key to Continue" << endl;
			switch (getch()) {
			case 'q': Continue = false;
			}
		}
	}
	return 0;
}