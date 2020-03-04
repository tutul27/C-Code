// Temperature Converter;

#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    double farn, cels;

    cout << "Enter Celsius = ";
    cin >> cels;

    farn = (1.8 * cels) + 32;
    cout << "Fahrenheit = " << farn << endl;


    cout << "Enter Fahrenheit = ";
    cin >> farn;

    cels = (farn - 32)/1.8;
    cout << "Celsius = " << cels;



    getch();
}
