// Letter Grade program

#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;

    if(marks > 100)
    {
        cout << "Invalid number";
    }

    else if(marks < 0)
    {
        cout << "Invalid number";
    }


    else if(marks >= 80)
    {
        cout << "A+";
    }

    else if(marks >= 70)
    {
        cout << "A";
    }

    else if(marks >= 60)
    {
        cout << "A-";
    }

    else if(marks >= 50)
    {
        cout << "B";
    }

    else if(marks >= 40)
    {
        cout << "C";
    }

    else if(marks >=33)
    {
        cout << "Pass";
    }
    else
        cout << "Fail";


    getch();
}
