
// int, float , double;
#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int num1=10;
    int num2=10;
    int num3;

    cout<<num1<<endl;
    cout<<num2<<endl;
    //cout<<"Num1 = " <<num1 <<endl <<"num2 = " << num2 <<endl;

    num3 = num1+num2;
    cout<<"Sum = "<<num3<<endl;

     num3 = num1-num2;
    cout<<"Sub = "<<num3<<endl;

    num3 = num1*num2;
    cout<<"Mul = "<<num3<<endl;

    num3 = num1%num2;
    cout<<"Div = "<<num3<<endl;

    num3 = num1/num2;
    cout<<"Modulas = "<<num3 << endl;

    cout<<endl;
    cout<<"Character type : "<<endl;
    char ch='A';// use single character;
    cout<<"char = " <<ch;



    getch();
}
