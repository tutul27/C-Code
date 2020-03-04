// Assignment Operator;

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int x= 3;
    int y = 2;

    x+=y; // x = x+y;
    cout <<"Result = "<< x << endl;

    x-=y;
    cout << "Result = "<< x << endl;

    x*=y;
    cout <<"Result = "<< x << endl;

    x/=y;
    cout <<"Result = "<< x << endl;

    x %= y;
    cout <<"Result = " << x << endl;

    getch();
}
