
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter numbers:";
    cin>>num;
    for(int i=1; i<=10;i++)
    {
        cout<<i<<"X"<<num<<"="<<i*num<<endl;
    }

    getch();
}
