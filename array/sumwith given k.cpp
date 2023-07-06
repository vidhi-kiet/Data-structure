/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

bool sumsub(int a[], int sum,int n)
{

    
    // Initialize variables
    int curr = 0;
    int s = 0;
    
    // Iterate through the array
    for (int e = 0; e < n; e++)
    {
        // Add the current element to curr
        curr = curr + a[e];
        
        // If the current sum exceeds the target sum
        while(sum < curr)
        {
            // Remove elements from the start until the sum is less than the target sum
            curr = curr - a[s];
            s++;
        }
        
        // If the current sum is equal to the target sum, return true
        if (curr == sum)
        {
            return true;
        }
    }
    
    // If no subarray with the target sum is found, return false
    return false;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    int sum = 33;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Call the sumsub function to check if a subarray with the target sum exists
    if (sumsub(a, sum,n))
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not" << endl;
    }

    return 0;
}
