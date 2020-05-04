#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
	int g, r, s;
	char a;
	cout << "lets play rock paper scissors\n";
	while (2 < 3)
	{
		cout << "1 is rock\n";
		cout << "2 is paper\n";
		cout << "3 is scissors\n";
		cout << "what is your guess ?\n";
		srand(time(0));
		r = rand() % 3 + 1;
		cin >> g;
		if (g > 3)
		{
			cout << "invalid imput\n";
			cout << "press y to restart\n";
		}
		else if (g == 1 && r == 3)
		{
			cout << "you win\n\a";
			cout << "press y to restart\n";
		}
		else if (g == 2 && r == 1)
		{
			cout << "you win\n\a";
			cout << "press y to restart\n";
		}
		else if (g == 3 && r == 2)
		{
			cout << "you win\n\a";
			cout << "press y to restart\n";
		}
		else if (g == r)
		{
			cout << "it is a draw\n";
			cout << "press y to restart\n";
		}
		else
		{
			cout << "you lose ha ha\n";
			cout << "it chose " << r;
			cout << "\npress y to restart\n";
		}
		cin >> a;
		if (a == 'y' || a == 'Y')
			cout << "ok\n";
		else
			return (0);
	}
}