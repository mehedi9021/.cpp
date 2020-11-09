#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number of students:";
    cin>>n;
    int stu[n];
    for(int i=1; i<=n; i++)
    {
        cin>>stu[i];

    }
    for(int i=1; i<=n; i++)
    {
        cout<<"Numbers of student:"<<i<<"="<<stu[i]<<"\n";

    }
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum =sum+ stu[i];

    }
    cout<<"Sum="<<sum<<"\n";
    int av;
    av = sum / n;
    cout<<"Average="<<av;


    getch();
}

