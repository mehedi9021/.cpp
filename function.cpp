#include<iostream>
#include<conio.h>
using namespace std;


void Add(double a, double b)
{

    double add= a+b;
    cout<<"Addition: "<<add<<endl;
}
void Mul(double a, double b)
{
    double mul= a*b;
    cout<<"Multiplication: "<<mul<<endl;
}
void Div(double a, double b)
{
    double div= a/b;
    cout<<"Division: "<<div<<endl;
}
int main()
{
    //double a, b;
    Add(88, 99);
    Mul(33, 88);
    Div(33, 11);

    getch();
}
