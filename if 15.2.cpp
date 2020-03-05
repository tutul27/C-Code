// If, else-if statement;

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

    else if(num<0){
        cout << "Negative";
    }

    else
        cout << "zero";



    getch();
}


