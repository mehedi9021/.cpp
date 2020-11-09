#include<iostream>
#include<conio.h>
using namespace std;

void Array(int num[], int n)
{
    for(int i=0; i<=n; i++)
    {
        cout<<num[i]<<endl;

    }
}
int main()
{
    int num[5]={10, 20, 30, 40, 44};
    Array(num, 4);
    getch();

}
