#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void sar()
{
    double hight, wigth, length ,area;
    cout << "what is the hight of the cube\n";
    cin >> hight;
    cout << "what is the wigth of the cube\n";
    cin >> wigth;
    cout << "what is the length of the cube\n";
    cin >> length;
    area = (2 * length * wigth) + (2 * wigth * hight) + (2 * length * hight);
    cout << "the surface area of the rectangual solid is " << area << "\n";
}
void lac()
{

}
void rd()
{
    double radius, diameter;
    cout << "what is the radius\n";
    cin >> radius;
    diameter = radius * 2;
    cout << "the answer is " << diameter;

}
void dr()
{
    double radius, diameter;
    cout << "what is the diameter\n";
    cin >> diameter;
    radius = diameter / 2;
    cout << "the answer is " << radius;

}
void ccr()
{
    double radius, circonferance;
    cout << "what is the radius\n";
    cin >> radius;
    circonferance = radius * 2 * 3.14159;
    cout << "the answer is " << circonferance;
}
void ccd()
{
    double diameter, circonferance;
    cout << "what is the diameter\n";
    cin >> diameter;
    circonferance = diameter * 3.14159;
    cout << "the answer is " << circonferance;
}
void ac()
{
    double area, radius;
    cout << "what is the radius of the circle";
    cin >> radius;
    area = 3.14159 * pow(radius, 2);
    cout << "the area is " << area << endl;
}
void pow()
{
    double number, power, answer;
    cout << "what is the number";
    cin >> number;
    cout << "to what power";
    cin >> power;
    answer = pow(number, power);
    cout << "the answer is " << answer << endl;

}
void dc()
{
    double numirator, denominator;
    cout << "what is the numerator";
    cin >> numirator;
    cout << "what is the denominator";
    cin >> denominator;
    cout << "The decimal value is " << (numirator / denominator) << endl;
}
void ar()
{
    double length, width, area;
    cout << "What is the length of the rectangle?";
    cin >> length;
    cout << "what is the width of the rectangle? ";
    cin >> width;
    area = length * width;
    cout << "the area of the rectangle is " << area << endl;
}
void sq()
{
    double number, result;
    cout << "what is the number";
    cin >> number;
    result = sqrt(number);
    cout << "the square root of " << number << " is " << result << endl;
}
void at()
{
    double hieght, base, area;
    cout << "What is the hieght of the triangle?";
    cin >> hieght;
    cout << "what is the base of the triangle? ";
    cin >> base;
    area = hieght * (base * .5);
    cout << "the area of the triangle is " << area << endl;
}
void ap()
{
    double hieght, base, area;
    cout << "What is the hieght of the paralelogram?";
    cin >> hieght;
    cout << "what is the base of the paralelogram? ";
    cin >> base;
    area = hieght * base;
    cout << "the area of the paralelogram is " << area << endl;
}
void atr()
{
    double hieght, base, base2, area;
    cout << "What is the hieght of the trapizoid?";
    cin >> hieght;
    cout << "what is the base of the trapizoid? ";
    cin >> base;
    cout << "what is the base2 of the trapizoid? ";
    cin >> base2;
    area = hieght * (base + base2) / 2;
    cout << "the area of the trapizoid is " << area << endl;
}
void pr()
{
    double length, width, primiminter;
    cout << "What is the length of the rectangle?";
    cin >> length;
    cout << "what is the width of the rectangle? ";
    cin >> width;
    primiminter = length * 2 + width * 2;
    cout << "the area of the rectangle is " << primiminter << endl;
}
void pt()
{
    double length, width, side, primiminter;
    cout << "What is the side1 of the triangle?";
    cin >> length;
    cout << "what is the side2 of the triangle? ";
    cin >> width;
    cout << "what is the side3 of the triangle? ";
    cin >> side;
    primiminter = length + width + side;
    cout << "the area of the triangle is " << primiminter << endl;
}
void pq()
{
    double length, width, side, side2, primiminter;
    cout << "What is the length of the quadrelateral?";
    cin >> length;
    cout << "what is the width of the quadrelateral? ";
    cin >> width;
    cout << "what is the width of the quadrelateral? ";
    cin >> side;
    cout << "what is the width of the quadrelateral? ";
    cin >> side2;
    primiminter = length + width + side + side2;
    cout << "the area of the quadrelateral is " << primiminter << endl;
}
void f()
{
    double celsius;
    cout << "enter celsius";
    cin >> celsius;
    cout << "fahrenheit is " << 1.8 * celsius + 32 << endl;

}
void c()
{
    double fahrenheit;
    cout << "enter fahrenheit";
    cin >> fahrenheit;
    cout << "celsius is " << 0.5555555 * (fahrenheit - 32) << endl;
}
void ftd()
{
    double x, y, answer;
    cout << "what is the angle for x";
    cin >> x;
    cout << "what is the angle for y";
    cin >> y;
    answer = 180 - x - y;
    cout << "the answer is " << answer << endl;
}
int main()
{
    string l, i;
    l = "vlad0318";
    cout << "sar means find the surface area of a rectangular solid\n";
    cout << "ccr means find the circonferance of a circle using radius\n";
    cout << "ccd means find the circonferance of a circle using diameter\n";
    cout << "ac means find the area of a circle\n";
    cout << "ar means find the area of a rectangle.\n";
    cout << "dc means convert from fraction to decimal\n";
    cout << "pow means to the power of...\n";
    cout << "sq means sguare root\n";
    cout << "at means find the area of a triangle\n";
    cout << "ap means find the area of a paralelogram\n";
    cout << "atr means find the area of a trapizoid\n";
    cout << "pr means find the perimiter of a rectangle\n";
    cout << "pt means find the perimiter of a triangle\n";
    cout << "pq means find the perimiter of a quadrelateral\n";
    cout << "ftd means find the x of a triangle\n";
    cout << "c means from celcius to fehrenheite\n";
    cout << "f from from fehrenhight to celcius\n";
    cout << "rd finds the diameter using radius\n";
    cout << "dr finds the radius using diameter\n\n";
    cout << "what is the password\n";
    char a, r;
    string p;
    getline(cin, i);
    if (i == l)
        do {
            cout << "what problem do you want to solve\n";
            cin >> p;
            if (p == "ftd")
                ftd();
            else if (p == "c")
                c();
            else if (p == "f")
                f();
            else if (p == "pq")
                pq();
            else if (p == "pt")
                pt();
            else if (p == "pr")
                pr();
            else if (p == "atr")
                atr();
            else if (p == "ap")
                ap();
            else if (p == "at")
                at();
            else if (p == "sq")
                sq();
            else if (p == "ar")
                ar();
            else if (p == "dc")
                dc();
            else if (p == "pow")
                pow();
            else if (p == "ac")
                ac();
            else if (p == "ccr")
                ccr();
            else if (p == "ccd")
                ccd();
            else if (p == "rd")
                rd();
            else if (p == "dr")
                dr();
            else if (p == "sar")
                sar();
            else
                cout << "invalid imput\n";
            cout << "\nagain ?\n";
            cin >> r;
        } while (r == 'y');
    else
        return 0;
}