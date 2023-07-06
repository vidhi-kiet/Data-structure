/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    cout<<"enter size of array:";
    int n;
    cin>>n;
    int a[n];
    cout<<"\nelement of array :";
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    //print sub arrya
    cout<<"\nprint array :";
    for(int s=0;s<n;s++)
    {
        for(int e=s;e<n;e++)
        {
            for(int k=s;k<=e;k++)
            {
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}