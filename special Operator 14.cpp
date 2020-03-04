

// Special operator;
// Sizeof Operator;

#include<iostream>
#include<conio.h>

using namespace std;
int main()
{

    int a;
    float f;
    char ch;
    double d;
    char names[50];



   int c =  sizeof(a);
   cout << c <<endl;


    c =  sizeof(f) ;
   cout << c << endl;

    c =  sizeof(ch);
   cout << c << endl;

    c =  sizeof(d) ;
   cout << c << endl;

   c =  sizeof(names);
   cout << c << endl;


    getch();
}
