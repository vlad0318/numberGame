#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <string>
using namespace std;
bool youLost;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;
enum Directon { start = 0, LEFT, RIGHT, UP, DOWN };
Directon dir;
void Start()
{
    system("cls");
    youLost = false;
    dir = start;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}
void map()
{
    system("cls");
    cout << " ";
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << " #";
            if (i == y && j == x)
                cout << "O";
            else if (i == fruitY && j == fruitX)
                cout << "+";
            else
            {
                bool print = false;
                for (int k = 0; k < nTail; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        cout << "o";
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }

            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }

    cout << " ";
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;
    cout << " Score:" << score << endl;
}
void moves()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            youLost = true;
            break;
        default:
            break;
        }
    }
}
void gameplay()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }
    if (x > width || x < 0 || y > height || y < 0)
        youLost = true;
    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            youLost = true;

    if (x == fruitX && y == fruitY)
    {
        srand(time(0));
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
}
int main()
{
    string answer;
    do
    {
        system("cls");
        system("MODE con cols=25 lines=25");
        Start();
        while (!youLost)
        {
            map();
            moves();
            gameplay();
            Sleep(50);
        }
        cout << "do you want to play the game again\n";
        cin >> answer;
    } while (answer == "y" || answer == "Y" || answer == "yes" || answer == "Yes");
    return 0;
}