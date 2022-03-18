/*
 Given an array of n number that has values in range [1...n+1]. 
 Every number appears exactly once.Hemce one no is missing.
 Find the missing number.

 Input:arr[]={1,4,3}
 Output:2
 */
//solution
#include <bits/stdc++.h>
using namespace std;
 
// Function to get the missing number
int getMissingNo(int a[], int n)
{
    // For xor of all the elements in array
    int x1 = a[0];
 
    // For xor of all the elements from 1 to n+1
    int x2 = 1;
 
    for (int i = 1; i < n; i++)
        x1 = x1 ^ a[i];
 
    for (int i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;
 
    return (x1 ^ x2);
}
 
// Driver Code
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int miss = getMissingNo(arr, n);
    cout << miss;
}
// time complexity:theta(n)
// space complexity:theta(1)