#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x=10;
    int *p;
    p=&x;

    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;

    cout<<"\n\n\n\n\n\n";

    int n1=10, n2=20;
    int *p1, *p2;
    p1= &n1;
    p2= &n2;

    int sum;
    sum= *p1 + *p2;
    cout<<sum;

    getch();
}

