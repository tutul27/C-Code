// Calculating area of triangle;

#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int base, height, area;

    cout << "Enter base = ";
    cin >> base;

    cout <<"Enter height = ";
    cin >> height;

    area = .5 * base * height;
    cout << "Area of traiangle = " << area;


    getch();
}
