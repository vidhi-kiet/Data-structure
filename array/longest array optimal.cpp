/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int longestarray(vector<int>& a,int k)
{
    int n=a.size();
    int sum=a[0];
    int mlen=0;
    int right=0;
    int left=0;
    while(right<n)
    {
        right++; //a[1] elment as sum store a[0]
        if(right<n)//check if if end elemnt is reached
        {
            sum=sum+a[right];
        }
        
        while(left<=right && sum>k)//if sum is greater then k given like 4>3 thne first elmentremove from leftmost pos and left is incremented
        {
            sum=sum-a[left];
            left++;
        }
        if(sum==k)//sum become eqaul to 3 so find length is max to get three means 1+1+1 length is > then 1+2 which is just two elem
        {
            mlen=max(mlen,right-left+1);
        }
    }
    return mlen;
    
}

using namespace std;

int main()
{
     cout<<"enter the size :";
    int n;
    cin>>n;
    vector<int> a(n);
    
    int k=3;
    cout<<"\nenter the elem :";
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    int leng=longestarray(a,k);
    cout<<"\nlenthg :"<<leng;

    return 0;
}