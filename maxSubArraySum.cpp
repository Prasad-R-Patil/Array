
/*

problem stetment:-

The problem you're describing seems to be about finding the maximum sum of a contiguous subarray in a given array.
This is a classic problem that can be solved using Kadane's Algorithm. Here's how you can solve it in C++:

our test case is arr[]={1,2,3,-2,5} and output is 9.
second test case is arr[]={-1,-2,-3,-4} and output is -1

*/

#include <iostream>
using namespace std;

int maxSubArraySum(int arr[], int n) {
    int max_so_far = arr[0];                // Start with the first element
    int max_ending_here = arr[0];           // Start with the first element

    for (int i = 1; i < n; i++)
     {
        // Calculate max_ending_here by either taking the current element
        // or adding it to the previous max_ending_here
        if (max_ending_here + arr[i] > arr[i])
        {
            max_ending_here = max_ending_here + arr[i];
        } 
        else
        {
            max_ending_here = arr[i];
        }

        // Update max_so_far if max_ending_here is greater
        if (max_so_far < max_ending_here) 
        {
            max_so_far = max_ending_here;
        }
    }
    return max_so_far;
}

int main() {
    int arr1[] = {1, 2, 3, -2, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Maximum contiguous sum is " << maxSubArraySum(arr1, n1) << endl;

    int arr2[] = {-1, -2, -3, -4};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Maximum contiguous sum is " << maxSubArraySum(arr2, n2) << endl;

    return 0;
}
