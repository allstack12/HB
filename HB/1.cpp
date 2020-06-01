#include <iostream>
#include <ctime>
#include <Windows.h>
#include <string>
#include <fstream>
#include <conio.h>

using namespace std;

HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);

void strMenu();
void sysWrite();
void ftwtBoss();

int main()
{
	setlocale(LC_ALL, "russian");
	srand(time(NULL));

	for (int i = 0; i < 100; ++i) 
	{
		SetConsoleTextAttribute(d, 9);
		cout << endl << endl << endl << endl << endl << endl << endl;
		cout << "\t \t \t|||||" << endl;
		cout << "\t \t \t|||||            |||||" << endl;
		cout << "\t \t \t|||||                   |||| ||||||    ||||     |||| ||||	     |||| " << endl;
		cout << "\t \t \t|||||            |||||  ||||||   ||||  ||||     ||||	 ||||    |||| " << endl;
		cout << "\t \t \t|||||            |||||  ||||	 ||||  ||||     ||||	     |||| " << endl;
		cout << "\t \t \t||||||||||||||   |||||  ||||     ||||  ||||     ||||	 ||||    |||| " << endl;
		cout << "\t \t \t||||||||||||||   |||||  ||||     ||||    ||||||||    ||||	     |||| " << endl;
		SetConsoleTextAttribute(d, 7);


		cout << endl << "\t \t \t \t \t Version [02.06.2020] Linux.Ubuntu" << endl << endl;
		cout << "\t \t \t \t \t \t \t" << i << '%';

		Sleep(10);
		system("cls");
	}

	Sleep(2000);

	strMenu();
	sysWrite();
	ftwtBoss();
}

void strMenu()
{
	cout << "\x1b[32m< ----------------------------------------- >\x1b[37m" << endl;
		SetConsoleTextAttribute(d, 2);
		cout << "January \x1b[32m<-\x1b[37m" << endl;
		cout << "February" << endl;
		cout << "March" << endl;
		cout << "April" << endl;
		cout << "May" << endl;
		cout << "June" << endl;
		cout << "July" << endl;
		cout << "August" << endl;
		cout << "September" << endl;
		cout << "October" << endl;
		cout << "November" << endl;
		cout << "December" << endl;
	cout << "\x1b[32m< ----------------------------------------- >\x1b[37m" << endl;

	Sleep(500);
	system("cls");

	cout << "\x1b[32m< ----------------------------------------- >\x1b[37m" << endl;	
		cout << "January" << endl;
		SetConsoleTextAttribute(d, 2);
		cout << "February \x1b[32m<-\x1b[37m" << endl;
		cout << "March" << endl;
		cout << "April" << endl;
		cout << "May" << endl;
		cout << "June" << endl;
		cout << "July" << endl;
		cout << "August" << endl;
		cout << "September" << endl;
		cout << "October" << endl;
		cout << "November" << endl;
		cout << "December" << endl;
	cout << "\x1b[32m< ----------------------------------------- >\x1b[37m" << endl;

	Sleep(500);
	system("cls");

	cout << "\x1b[32m< ----------------------------------------- >\x1b[37m" << endl;
		cout << "January" << endl;
		cout << "February" << endl;
		SetConsoleTextAttribute(d, 2);
		cout << "March \x1b[32m<-\x1b[37m" << endl;
		cout << "April" << endl;
		cout << "May" << endl;
		cout << "June" << endl;
		cout << "July" << endl;
		cout << "August" << endl;
		cout << "September" << endl;
		cout << "October" << endl;
		cout << "November" << endl;
		cout << "December" << endl;
	cout << "\x1b[32m< ----------------------------------------- >\x1b[37m" << endl;

	Sleep(500);
	system("cls");

	cout << "\x1b[32m< ----------------------------------------- >\x1b[37m" << endl;
		cout << "January" << endl;
		cout << "February" << endl;
		cout << "March" << endl;
		SetConsoleTextAttribute(d, 2);
		cout << "April \x1b[32m<-\x1b[37m" << endl;
		cout << "May" << endl;
		cout << "June" << endl;
		cout << "July" << endl;
		cout << "August" << endl;
		cout << "September" << endl;
		cout << "October" << endl;
		cout << "November" << endl;
		cout << "December" << endl;
	cout << "\x1b[32m< ----------------------------------------- >\x1b[37m" << endl;

	Sleep(500);
	system("cls");

	cout << "\x1b[32m< ----------------------------------------- >\x1b[37m" << endl;
		cout << "January" << endl;
		cout << "February" << endl;
		cout << "March" << endl;
		cout << "April" << endl;
		SetConsoleTextAttribute(d, 2);
		cout << "May \x1b[32m<-\x1b[37m" << endl;
		cout << "June" << endl;
		cout << "July" << endl;
		cout << "August" << endl;
		cout << "September" << endl;
		cout << "October" << endl;
		cout << "November" << endl;
		cout << "December" << endl;
	cout << "\x1b[32m< ----------------------------------------- >\x1b[37m" << endl;

	Sleep(500);
	system("cls");

	cout << "\x1b[32m< ----------------------------------------- >\x1b[37m" << endl;
		cout << "January" << endl;
		cout << "February" << endl;
		cout << "March" << endl;
		cout << "April" << endl;	
		cout << "May" << endl;
		SetConsoleTextAttribute(d, 2);
		cout << "June \x1b[32m<-\x1b[37m" << endl;
		cout << "July" << endl;
		cout << "August" << endl;
		cout << "September" << endl;
		cout << "October" << endl;
		cout << "November" << endl;
		cout << "December" << endl;
	cout << "\x1b[32m< ----------------------------------------- >\x1b[37m" << endl;

	system("cls");

	for (int i = 100; i > 0; --i)
	{
		cout << "\x1b[32m< ----------------------------------------- >\x1b[37m" << endl;
		cout << "January" << endl;
		cout << "February" << endl;
		cout << "March" << endl;
		cout << "April" << endl;
		cout << "May" << endl;
		SetConsoleTextAttribute(d, 2);
		cout << "June\x1b[37m -> \x1b[32m" << i << "\x1b[37m" << endl;
		cout << "July" << endl;
		cout << "August" << endl;
		cout << "September" << endl;
		cout << "October" << endl;
		cout << "November" << endl;
		cout << "December" << endl;
		cout << "\x1b[32m< ----------------------------------------- >\x1b[37m" << endl;
		system("cls");

		if (i == 2) {
			cout << "\x1b[32m>\x1b[37m 2 is found \x1b[32m<\x1b[37m" << endl;
			Sleep(2000);
		}
	}
	Sleep(1000);

		for (int i = 0; i < 3; ++i)
		{
			cout << "loading.";
			Sleep(500);
			system("cls");
			
			cout << "loading..";
			Sleep(500);
			system("cls");

			cout << "loading...";
			Sleep(500);
			system("cls");
		}

		cout << "\x1b[32mcomplete\x1b[37m" << endl;

		for (int i = 0; i < 100; ++i) {
			cout << "\x1b[32mstarting\x1b[37m \n ";
			cout << i << '%';
			system("cls");
		}
		Sleep(1500);
}

void sysWrite()
{
	cout << "\x1b[31madmin@\x1b[36mroot:\x1b[37m~$ ";
	Sleep(1500);
	Sleep(500); cout << "w";
	Sleep(200); cout << "g";
	Sleep(200); cout << "e";
	Sleep(200); cout << "t";
	Sleep(200); cout << " ";
	Sleep(200); cout << "-";
	Sleep(200); cout << "n";
	Sleep(200); cout << "o";
	Sleep(200); cout << "n";
	Sleep(200); cout << "e";
	Sleep(200); cout << " ";
	Sleep(200); cout << "http://HBsys/menu/l:/smhb.png/load?/y" << endl;
	Sleep(200); cout << "Request in progress..." << endl;
	Sleep(1000);

	cout << "\t Exchange packages with http://HBsys \n \t [173.194.221.100] with 32 bytes of data: " << endl;
		Sleep(700);
	cout << "\t Response from 173.194.221.100: number of bytes=32 time=18ms TTL=46" << endl;
		Sleep(700);
	cout << "\t Response from 173.194.221.100: number of bytes=32 time=18ms TTL=46" << endl;
		Sleep(700);
	cout << "\t Response from 173.194.221.100: number of bytes=32 time=18ms TTL=46" << endl;
		Sleep(700);
	cout << "\t Response from 173.194.221.100: number of bytes=32 time=18ms TTL=46" << endl;
		Sleep(700);
	cout << "Loading..." << endl;
		Sleep(500);

	cout << "\t \x1b[33m";
	for (int i = 0; i <= 40; ++i) {
		cout << "#";
		Sleep(30);

		if (i == 40) {
			cout << "\x1b[37m - 100% \n\tsmhb.png is load" << endl;
		}
	}

	cout << " \n\x1b[31madmin@\x1b[36mroot:\x1b[37m~$ ";
	Sleep(1000);
	Sleep(500); cout << "c";
	Sleep(200); cout << "a";
	Sleep(200); cout << "t";
	Sleep(200); cout << " ";
	Sleep(200); cout << "-";
	Sleep(200); cout << "n";
	Sleep(200); cout << "o";
	Sleep(200); cout << "n";
	Sleep(200); cout << "e";
	Sleep(200); cout << " C:/Downloads/smhb.png";
}

void ftwtBoss()
{
	cout << endl;
	cout << " _______________________" << endl << endl;
	cout << "\x1b[33m   HAHAHAHAHA! \x1b[37m"  << endl;
	cout << " _______________________" << endl << endl;
	SetConsoleTextAttribute(d, 4);
	cout << "\t -|-__O__" << endl;
	cout << "\t  |   |" << endl;
	cout << "\t     / \\" << endl;
	SetConsoleTextAttribute(d, 7);

	Sleep(2000);
	system("cls");

	cout << " _______________________" << endl << endl;
	cout << "\x1b[33m   YOU WILL NEVER BE ABLE TO OPEN THIS FILE \n   HAHAHAHA! \x1b[37m" << endl;
	cout << " _______________________" << endl << endl;
	SetConsoleTextAttribute(d, 4);
	cout << "\t -|-__O__" << endl;
	cout << "\t  |   |" << endl;
	cout << "\t     / \\" << endl;
	SetConsoleTextAttribute(d, 7);

	Sleep(3000);
	system("cls");

	SetConsoleTextAttribute(d, 14);
	cout << " \t\t\t\t\t\t( '-' )\x1b[37m" << endl;
	Sleep(500);
	system("cls");

	SetConsoleTextAttribute(d, 14);
	cout << endl << endl << " \t\t\t\t\t( '-' )\x1b[37m" << endl;
	Sleep(500);
	system("cls");

	SetConsoleTextAttribute(d, 14);
	cout << endl << endl << endl << " \t\t\t\t( '-' )\x1b[37m" << endl;
	Sleep(500);
	system("cls");

	SetConsoleTextAttribute(d, 14);
	cout << endl << endl << endl << endl << " \t\t\t\( '-' )\x1b[37m" << endl;
	Sleep(500);
	system("cls");

	SetConsoleTextAttribute(d, 14);
	cout << endl << endl << endl << endl << endl << " \t\t( '-' )\x1b[37m" << endl;
	Sleep(500);
	system("cls");

	cout << endl << endl << endl << " _______________________" << endl << endl;
	cout << "\x1b[36m  yaup! \x1b[37m";
	cout << endl << " _______________________" << endl;
	SetConsoleTextAttribute(d, 14);
	cout << endl << endl << " \t\t( 'o' )\x1b[37m" << endl;
	Sleep(1000);
	system("cls");

	cout << endl << endl << endl << " _______________________" << endl << endl;
	cout << "\x1b[36m  i can help u \x1b[37m";
	cout << endl << " _______________________" << endl;
	SetConsoleTextAttribute(d, 14);
	cout << endl << endl << " \t\t( 'о' )\x1b[37m" << endl;
	Sleep(2000);
	system("cls");

	cout << endl << endl << endl << " _______________________" << endl << endl;
	cout << "\x1b[36m  you can only eliminate it with one command \x1b[37m";
	cout << endl << " _______________________" << endl;
	SetConsoleTextAttribute(d, 14);
	cout << endl << endl << " \t\t( 'о' )\x1b[37m" << endl;
	Sleep(3000);
	system("cls");

	cout << endl << endl << endl << " _______________________" << endl << endl;
	cout << "\x1b[36m  but I forgot her :( \x1b[37m";
	cout << endl << " _______________________" << endl;
	SetConsoleTextAttribute(d, 14);
	cout << endl << endl << " \t\t( '-' )\x1b[37m" << endl;
	Sleep(2000);
	system("cls");

	Sleep(1500);

	cout << "\x1b[31madmin@\x1b[36mroot:\x1b[37m~$ ";
	Sleep(1500);
	Sleep(500); cout << "s";
	Sleep(200); cout << "i";
	Sleep(200); cout << "g";
	Sleep(200); cout << "t";
	Sleep(200); cout << "e";
	Sleep(200); cout << "r";
	Sleep(200); cout << "m";
	Sleep(200); cout << " ";
	Sleep(200); cout << "v";
	Sleep(200); cout << "i";
	Sleep(200); cout << "r";
	Sleep(200); cout << "u";
	Sleep(200); cout << "s";
	Sleep(200); cout << ".";
	Sleep(200); cout << "e";
	Sleep(200); cout << "x";
	Sleep(200); cout << "e" << endl;
	Sleep(1000);

	cout << " _______________________" << endl << endl;
	cout << "\x1b[33m  EVEN DON'T TRY!!!! \x1b[37m" << endl;
	cout << " _______________________" << endl << endl;
	SetConsoleTextAttribute(d, 4);
	cout << "\t -|-__O__" << endl;
	cout << "\t  |   |" << endl;
	cout << "\t     / \\" << endl;
	SetConsoleTextAttribute(d, 7);
	Sleep(1000);

	cout << "\x1b[31madmin@\x1b[36mroot:\x1b[37m~$ ";
	Sleep(1500);
	Sleep(500); cout << "s";
	Sleep(200); cout << "u";
	Sleep(200); cout << "d";
	Sleep(200); cout << "o";
	Sleep(200); cout << " ";
	Sleep(500); cout << "s";
	Sleep(200); cout << "i";
	Sleep(200); cout << "g";
	Sleep(200); cout << "t";
	Sleep(200); cout << "e";
	Sleep(200); cout << "r";
	Sleep(200); cout << "m";
	Sleep(200); cout << " ";
	Sleep(200); cout << "v";
	Sleep(200); cout << "i";
	Sleep(200); cout << "r";
	Sleep(200); cout << "u";
	Sleep(200); cout << "s";
	Sleep(200); cout << ".";
	Sleep(200); cout << "e";
	Sleep(200); cout << "x";
	Sleep(200); cout << "e" << endl;
	Sleep(1000);

	cout << " _______________________" << endl << endl;
	cout << "\x1b[33m  WHAT!!!!!!???? NOOOOOOOOOOOO... \x1b[37m" << endl;
	cout << " _______________________" << endl << endl;
	SetConsoleTextAttribute(d, 4);
	cout << "\t  -|-__O__" << endl;
	cout << "\t   |   |" << endl;
	cout << "\t      / \\" << endl;
	SetConsoleTextAttribute(d, 7);
	Sleep(1000);
	system("cls");

	SetConsoleTextAttribute(d, 4);
	cout << "\t  |-__O_" << endl;
	cout << "\t  |   |" << endl;
	cout << "\t     / " << endl;
	SetConsoleTextAttribute(d, 7);
	Sleep(1000);
	system("cls");

	SetConsoleTextAttribute(d, 4);
	cout << "\t  |-__O" << endl;
	cout << "\t      " << endl;
	cout << "\t       " << endl;
	SetConsoleTextAttribute(d, 7);
	Sleep(1000);
	system("cls");

	SetConsoleTextAttribute(d, 4);
	cout << "\t  " << endl;
	cout << "\t      " << endl;
	cout << "\t       " << endl;
	SetConsoleTextAttribute(d, 7);
	Sleep(1000);
	system("cls");

	Sleep(3000);

	SetConsoleTextAttribute(d, 9);
	cout << "YOU WON \nFILE WILL BE OPEN!!!" << endl;
	SetConsoleTextAttribute(d, 7);

	system("start smhb.png");
	system("pause");
}
