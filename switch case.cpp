#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int digit;
    cout<< "Enter digit: ";
    cin>>digit;

    switch(digit)
    {
        case 0:
        cout<<"I am aliyen!!";
        break;

        case 1:
        cout<<"I am Aliyen!!";
        break;

        case 2:
        cout<<"I am Human!!";
        break;

        case 3:
        cout<<"I am Robot!!";
        break;

        case 4:
        cout<<"I am Useless!!";
        break;

        case 5:
        cout<<"I am Perfect!!";
        break;

        default:
            cout<<"Nothing!!";
    }

    getch();
}
