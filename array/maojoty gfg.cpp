/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;



int majority(vector<int>& a,int n)
{
    int res=0;
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(a[res]==a[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count==0)
        {
            res=i;
            count=1;
        }
    }
    count=0;
    for(int i=0;i<n;i++)
    {
        if(a[res]==a[i])
        
            count++;
    }
    
    if(count<=n/2)
    {
        return -1;
    }
    return res;
}


int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"rsult is  :"<<majority(a,n);
    

    return 0;
}