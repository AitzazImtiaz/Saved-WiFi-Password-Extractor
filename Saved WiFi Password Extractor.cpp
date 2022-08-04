#include <iostream>
#include <windows.h>
#include <string>
#include <string.h>
using namespace std;

void maximizeWindow() {
	HWND hwnd = GetConsoleWindow();
	ShowWindow(hwnd, SW_SHOWMAXIMIZED);
}
void Option1() {
	system("cls");
	int Option1;
	while (true) {
		cout << "Here is the list of Networks with available passwords:\n";
		system("netsh wlan show profiles");
		cout << "Type 1 to go back:";
		cin >> Option1;
		if (Option1 == 1) {
			break;
		}
		else {
			system("cls");
		}
	}
}

void MainProgram() {
	system("cls");
	string network, str;
	int Option2;
	while (true) {
		system("passwords.bat");
		cout << "Type 1 to go back:";
		cin >> Option2;
		if (Option2 == 1) {
			break;
		}
		else {
			system("cls");
		}
	}
}

int main(){
	int option;
	maximizeWindow();
	while (true) {
		system("cls");
		cout << ".oPYo.                           8     o      o  o  d'b  o      .oPYo.                                                  8        \n";
		cout << "8                                8     8      8     8           8    8                                                  8        \n";
		cout << "`Yooo. .oPYo. o    o .oPYo. .oPYo8     8      8 o8 o8P  o8     o8YooP' .oPYo. .oPYo. .oPYo. o   o   o .oPYo. oPYo. .oPYo8 .oPYo. \n";
		cout << "    `8 .oooo8 Y.  .P 8oooo8 8    8     8  db  8  8  8    8      8      .oooo8 Yb..   Yb..   Y. .P. .P 8    8 8  `' 8    8 Yb..   \n";
		cout << "     8 8    8 `b..d' 8.     8    8     `b.PY.d'  8  8    8      8      8    8   'Yb.   'Yb. `b.d'b.d' 8    8 8     8    8   'Yb. \n";
		cout << "`YooP' `YooP8  `YP'  `Yooo' `YooP'      `8  8'   8  8    8      8      `YooP8 `YooP' `YooP'  `Y' `Y'  `YooP' 8     `YooP' `YooP' \n";
		cout << ":.....::.....:::...:::.....::.....:::::::..:..:::..:..:::..:::::..::::::.....::.....::.....:::..::..:::.....:..:::::.....::.....:\n";
		cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
		cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
		cout << "\n";
		cout << "A program made by Aitzaz Imtiaz\n";
		cout << "Code verified, checked and tested by GIA\n";
		cout << "Here are your options:\n";
		cout << "1. List of Wifi Passwords saved in device \n";
		cout << "2. Show all Network Passwords and other details\n";
		cout << "Enter your number:";
		cin >> option;
		if (option == 1) {
			system("cls");
			Option1();
		}
		else if (option == 2) {
			MainProgram();
		}
		else {
			system("cls");
		}
	}
	return 0;
}

