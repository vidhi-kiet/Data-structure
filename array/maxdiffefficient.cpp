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
    int res=a[1]-a[0];
    int minval=0;
    
    for(int j=0;j<n;j++)
    {
        res=max(res,a[j]-minval);
        minval=min(minval,a[j]);
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