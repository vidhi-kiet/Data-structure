/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>


using namespace std;

int longestarray(vector<int>& a,int k)
{
    int n=a.size();
     map< int , int > presum; // Map to store the cumulative sums and their corresponding indices

    int sum=0;// Initialize maxSum with zero
    int mlen=0;  // Initialize currentSum with zero

    
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        int rem=sum-k;

        if(sum==k)
        {
            mlen=max(mlen,i+1);
        }
        if(presum.find(rem)!= presum.end())//        if (presum.count(rem)   If the currentSum already exists in the map, update maxSum if needed
        {
            int len=i-presum[rem];
            mlen=max(mlen,len);
        }
        else
        {
            presum[sum]=i;       
        }
        
    }
    return mlen;
}

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