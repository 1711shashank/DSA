// Question link https://practice.geeksforgeeks.org/problems/triplet-sum-in-array/0
//
// Given an array A[] of N numbers and another number x, determine whether or not there exist three elements in A[] whose sum is exactly x.
//
// Input:
// First line of input contains number of testcases T. For each testcase, first line of input contains n and x. Next line contains array elements.
//
// Output:
// Print 1 if there exist three elements in A whose sum is exactly x, else 0.
//
// Constraints:
// 1 ≤ T ≤ 100
// 1 ≤ N ≤ 103
// 1 ≤ A[i] ≤ 105
//
// Example:
// Input:
// 2
// 6 13
// 1 4 45 6 10 8
// 5 10
// 1 2 4 3 6






#include<bits/stdc++.h>
using namespace std;
int solve(int a[], int n, int sum){
    sort(a,a+n);
    for(int i=0;i<n;i++){
        int s=i+1,e=n-1;
        while(s<e){
            if(a[i]+a[s]+a[e] < sum) s++;
            else if (a[i]+a[s]+a[e] > sum) e--;
            else return 1;
        }
    }
    return 0;
}

int main()
 {

     int t,n,sum;
     cin>>t;
     while(t--)
     {
         cin>>n>>sum;
         int arr[n];
         for(int i=0;i<n;i++)
           cin>>arr[i];

         cout<<solve(arr,n,sum)<<endl;
     }
	return 0;
}
