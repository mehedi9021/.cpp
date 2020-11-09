#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //for sizeof operators

    int a;
    float f;
    double d;
    char ch;
    char name[100];

    int c;

    c= sizeof(a);
    cout<<c<<endl;
    c= sizeof(f);
    cout<<c<<endl;
    c= sizeof(d);
    cout<<c<<endl;
    c= sizeof(ch);
    cout<<c<<endl;
    c= sizeof(name);
    cout<<c<<endl;
    cout<<"\n";

    //for comma operators

    int x, y, sum;
    sum = (x=20, y=30, sum=x+y);
    cout<<sum<<endl;

    getch();
}

