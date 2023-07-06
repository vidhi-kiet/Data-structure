/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
#include<set>


using namespace std;


set<int> findunion(set<int> set1,set<int> set2)
{
    
    set<int> unionset;
    
    for(auto& elem:set1)
    {
        unionset.insert(elem);
    }
    
    for(auto& elem:set2)
    {
        unionset.insert(elem);
    }
    
    return unionset;
}

int main()
{
    set<int> set1={1,4,5,6,2,3};
    set<int> set2={8,9,5,6,7};
    
    
    set<int> unionset=findunion(set1,set2);
    
    for(auto& elem:unionset)
    {
        cout<<elem<<" ";
    }

    

    return 0;
}