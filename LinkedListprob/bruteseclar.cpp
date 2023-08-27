#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int seclargest(vector<int>v,int n)
{
  sort(v.begin(),v.end());
   
   int slar=0;
   
   for(int i=n-2;i>=0;i++)
   {
      if(v[i]!=v[n-1])
      {
          slar=v[i];
          break;
          
      }
   }
   
    return slar;
}




void printv( vector<int> v,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    cout<<"enter size :";
    int n;
    cin>>n;
    vector<int> v(n,0);
    cout<<"\nenter element :";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<"\nprint :"<<endl;
    
    printv(v,n);
    cout<<"\nsecond largest :"<<seclargest(v,n);


    return 0;
}
    