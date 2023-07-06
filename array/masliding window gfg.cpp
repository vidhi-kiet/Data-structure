/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    // Read the value of n from the user
    int n;
    cin >> n;

    // Declare an array of size n to store the input elements
    int a[n];

    // Set the value of k to 3
    int k = 3;

    // Read n elements from the user and store them in the array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    // Declare variables to track the current sum and the result
    int curr;
    int res = 0;
    
    // Iterate from 0 to n-k to ensure there are k consecutive elements available
    for (int i = 0; i + k - 1 < n; i++)
    {
        // Reset curr to 0 for each iteration
        curr = 0;

        // Iterate k times to calculate the sum of k consecutive elements
        for (int j = 0; j < k; j++)
        {
            // Add the value of a[i+j] to curr
            curr = curr + a[i + j];
        }

        // Update res if the current sum is greater
        res = max(curr, res);
    }

    // Print the maximum sum of k consecutive elements
    cout << res << endl;

    return 0;
}
