#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int mark;
    cout<<"Enter mark: ";
    cin>>mark;

    if(mark> 39)
    {
        if(mark>=40)
            cout<<"Grade is B-";
             if(mark>=50)
            cout<<"Grade is B";
             if(mark>=60)
            cout<<"Grade is A-";
             if(mark>=70)
            cout<<"Grade is A";
             if(mark>=80)
            cout<<"Grade is A+";

    }
    else
    {
        cout<<"You are fail RUBBISH!!";
    }
    getch();
}


