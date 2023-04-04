/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string.h>

using namespace std;

bool ispali(string c,int s,int e)
{
    if(s>=e)
     return true;
     
    return (c[s]==c[e])&& ispali(c,s+1,e-1);
    
}



int main()
{
    cout<<"string:";
    string c="noon";
    
    if(ispali(c,0,c.length()-1))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    

    return 0;
}