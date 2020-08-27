#include <iostream>
#include <windows.h>
#include<cstdlib>
#include<ctime>
#include<conio.h>

using namespace std;

int main()
{
	int a, c, h, l, b, s;
	a = 20;
	c = 30;
	b = 25;
	h = 100;
START:
	cout << "Attack: " << a << "                                                        " << "Monster HP: " << h << endl;
	cout << "Critical chance: " << c << " %" << "                                             " << "Monster block chance: " << b << " %" << endl;
	cout << "Press Spacebar to attack." << endl;
	cout << "Press Q to cast Fire ball. " << endl;
	cout << "Fie ball deal 15 damage. Can't be blocked but can't critical." << endl;
	int ans;
	if (_getch() == 32)
	{
		srand(time(0));
		for (int i = 0; i < 10; i++)
		{
			s = (rand() % 100) + 1;
		}
		if (s <= b)
		{
			cout << "Enemy blocked your attack!" << endl;
			goto BLOCK;
		}
		srand(time(0));
		for (int i = 0; i < 10; i++)
		{
			l = (rand() % 100) + 1;
		}
		if (l <= c)
		{
			h = h - (a * 2);
			cout << "You critical attacked!" << endl;
		}
		else
		{
			h = h - a;
			cout << "You attacked!" << endl;
		}
	BLOCK:
		Sleep(1200);
		system("CLS");
		if (h > 0) {
			goto START;
		}
		if (h <= 0) {
			goto END;
		}
	}
	if (_getch() == 113)
	{
		h = h - 15;
		cout << "You use Fire ball!" << endl;
		Sleep(1200);
		system("CLS");
		if (h > 0) {
			goto START;
		}
		if (h <= 0) {
			goto END;

		}
	}
	else {
		system("CLS");
		goto START;
	}
END:
	cout << "You win!" << endl;
	system("pause");
	return 0;
}