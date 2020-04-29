#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main()
{
    int h;
    cout << "enter the password: ";
    string p = "vlad0318";
    string i;
    getline(cin, i);
    if (i == p){
        h=3;}
    else
        h=5;
    char again;
    while(h < 4)
    {
        cout << "do you want to play the game(y/n)\n";
        cin >> again;
        if (again=='y'||again=='Y')
            {
            int tries = 0;
            long long int seed, randome, number;
            seed =time(0);
            srand(seed);
            randome = rand() % 100;
            cout << "in this game you are trying to guess the number\n";
            cout << "when you win enter -1\n";
                        while (randome <= 100)
{
                            int times;
                            cout << "what is your guess";
                            cin >> number;
                            if (number > 100)
                                cout << "invalid number\n";
                            else if (number == -1)
                                cout << "congrats you won\n";
                            else{
                                if (number < randome)
                                    cout << "too low\n";
                                else if (number > randome)
                                    cout << "too high\n";
                                else
                                    cout << "you won!!!!!!!!\a\n";}
                                    tries++;
                            times = tries - 1;
                            if (number == -1)
                            {
                                cout << "you took " << times << " tries\n";
                                break;
                            }
                            randome = randome;
                }
            }
        else if (again == 'n'|| again == 'N')
            {

                cout << "okay see you later\n";
                return 0;
        }
        else
            cout << "invalid input\n";
    }
     return 0;
    }
