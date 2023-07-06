/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"size of array :";
    int n;
    cin>>n;
    int a[n];
    int len=0;
    int k=3;
    cout<<"\n enter the element :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

   //longest sum array
   
   for(int i=0;i<n;i++)
   {
       int s=0;
       for(int j=i;j<n;j++)
       {
           s+=a[i];
           if(s==k)
           {
               len=max(len,j-i+1);
           }
       }
   }
   cout<<len<<endl;

    return 0;
}