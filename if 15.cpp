// If statement;

#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int num;
    cout << "Enter any Integer number : ";
    cin >> num;

    if(num>0){
        cout << "Positive";
    }

    if(num<0){
        cout << "Negative";
    }

    if(num==0){
        cout << "zero";
    }


    getch();
}
