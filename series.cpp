#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

        //series of numbers
        int num, sum=0;
        cout<<"Enter number:";
        cin>>num;
        for(int i=1; i<=num; i++)
           {
               sum = sum+i;
           }
           cout<<sum<<endl;


         //series of odd numbers
         int numm, summ=0;
         cout<<"Enter Numbers:";
         cin>>numm;
         for(int i=1; i<=numm; i=i+2)
            {
                summ=summ+i;

            }
            cout<<summ<<endl;


         //series of even numbers
         int summm=0, nummm;
         cout<<"Enter Numbers:";
         cin>>nummm;
         for(int i=2; i<=nummm; i=i+2)
            {
                summm= summm+i;

            }
            cout<<summm<<endl;

    getch();
}

