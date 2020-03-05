// Display one number even or odd

#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int num;
    cout<<"Enter any number = ";
    cin>>num;

    if(num%2 ==0 )
    {
        cout << "Even";
    }
    else
        cout << "Odd";




    getch();
}
