/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int maxsum(vector<int>& a,int n)
{
    int result=0;
    int maxend=a[0];
    for(int i=1;i<n;i++)
    {
        maxend=max(maxend+a[i],a[i]);
        result=max(result,maxend);
        
    }
    return result;

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
    
    cout<<"value is:"<<maxsum(a,n);

    return 0;
}