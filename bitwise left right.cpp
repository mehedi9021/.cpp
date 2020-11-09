#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a=32;
    int b=12;
    int c;
    c=a>>3; //32 devided by 2 at 3 times
    cout<<c<<endl;
    c=a<<3; //32 multiplied by 2 at 3 times
    cout<<c<<endl;
    c=b>>3;
    cout<<c<<endl;
    c=b<<3;
    cout<<c<<endl;
    getch();
}
