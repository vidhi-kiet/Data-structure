/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>

using namespace std;

int leader(vector<int>& a,int n)
{
    
    for(int i=0;i<n;i++)
    {
            bool flag=false;

        for(int j=i+1;j<n;j++)
        {
           if (a[i]<=a[j])
           {
               flag=true;
               break;
           }
           
        }
        if(flag==false)
         {
            cout<<"leader is :"<<a[i];

         }
        
    }
}

int main()
{
    int n;
    cin>>n;
    vector <int> a(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    leader(a,n);
    
    
    

    return 0;
}