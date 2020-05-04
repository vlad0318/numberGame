#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void now();
int main()
{
	now();
	return (0);
}
void now()
{
	string p;
	do
	{

		double bmi, wk, hm;
		cout << "this app calculates your bmi\n";
		cout << "what is your weight in kg\n";
		cin >> wk;
		cout << "what is your hight in m\n";
		cin >> hm;
		bmi = wk / pow(hm, 2);
		cout << "your bmi is " << bmi << "\n";
		if (bmi >= 25 && bmi <= 29)
		{
			cout << "you are overweight\n";
		}
		else if (bmi >= 30)
		{
			cout << "you have obesity\n";
		}
		else if (bmi <= 18.5)
		{
			cout << "you are underweight\n";
		}
		else
		{
			cout << "your bmi is perfect\n";
		}
		cout << "do you want to find the bmi of another person\n";
		cin >> p;
	} while (p == "y" || p == "Y" || p == "yes" || p == "Yes");
}