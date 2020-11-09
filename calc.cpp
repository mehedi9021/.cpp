#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    double a, b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"value of a: "<<a;
    cout<<"\nEnter the value of b:";
    cin>>b;
    cout<<"value of b: "<<b;

    double sum=a+b;
    cout<<"\nSum is: "<<sum;
    cout<<endl;

    double mul=a*b;
    cout<<"\nMul is: "<<mul;
    cout<<endl;

    double div=a/b;
    cout<<"\nDiv is: "<<div;
    cout<<endl;
    getch();
}
