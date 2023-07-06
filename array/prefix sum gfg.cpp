/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the sum of elements within a given range using prefix sum
int getsum(int ps[], int l, int r)
{
    if (l == 0)
        return ps[r]; // If the left index is 0, return the prefix sum at the right index directly
     
    return ps[r] - ps[l - 1]; // Otherwise, return the difference between prefix sums at the right and left indices
}

int main()
{
    int n;
    cin >> n; // Read the size of the array from the user

    int a[n]; // Declare an array to store the elements

    // Read the elements into the array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ps[n]; // Declare an array to store the prefix sum

    ps[0] = a[0]; // Initialize the first element of prefix sum array with the first element of the input array

    // Calculate the prefix sum by adding the current element to the previous element
    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + a[i];
    }

    // Call the getsum function with the prefix sum array and the desired range [1, 3]
    cout << getsum(ps, 1, 3);

    return 0;
}
