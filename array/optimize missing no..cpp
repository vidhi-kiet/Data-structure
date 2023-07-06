/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


//missing no.

int missingNumber(int a[], int n)
{
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n-1;i++)
    {
        xor2=xor2^a[i];
        xor1=xor1^(i+1);
        
    }
    xor1=xor1^n;
    return xor2^xor1;
    
}
int main()
{
    cout<<"size:";
      int n;
      cin>>n;
      int a[n];
      cout<<"\nelement :";
      for(int i=0;i<n-1;i++)
      {
          cin>>a[i];
      }
      
      cout<<"\nvalue is :"<<missingNumber(a,n);
      
      


      
    return 0;
}