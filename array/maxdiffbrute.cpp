/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>


using namespace std;

int maxdiff(vector<int>& a,int n)
{
    int res=0;
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(j>i)
            {
                res=max(res,a[j]-a[i]);
            }
        }
    }
    
    
    return res;
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
    
   int p= maxdiff(a,n);
   cout<<"result of maxdiff :"<<p<<endl;
    
    

    return 0;
}