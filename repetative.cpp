//Sorting Repeated Elements
//Problem: You are given an array with many duplicate elements. Compare the performance of quicksort, merge sort, and counting sort.
//Input Example:
//Array: [5, 2, 3, 3, 2, 5, 5, 1, 2]
//Goal: Determine if counting sort is suitable and why.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi=*max_element(arr,arr+n);
    int count[maxi+1]={0};
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    for(int i=0;i<=maxi;i++)
    {
        while(count[i]>0)
        {
            cout<<i<<" ";
            count[i]--;
        }
    }
}
//complexity 0(n+k)