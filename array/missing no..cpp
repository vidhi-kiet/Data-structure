/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


//missing no.


int main()
{
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      for(int i=1;i<n;i++)
      {
          int flag=0;
          for(int j=0;j<n-1;j++)
          {
              if(a[j]==i)
              {
                 flag=1 ;
              }
          }
          if(flag==0)
          {
          cout<<"missing no. "<<i<<endl;
          }

      }
      
    return 0;
}