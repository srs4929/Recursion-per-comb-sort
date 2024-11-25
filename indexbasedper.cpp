//Problem: Given an array of numbers, generate all permutations where a certain index i must contain a specific value.
//Example:
//Input: [1, 2, 3], index 1 must be 2
//Output: ["2 1 3", "2 3 1"]
//Recursion Idea: Fix the value at index i and permute the remaining elements recursively.

#include<bits/stdc++.h>
using namespace std;

void index(int n,int arr[],int in)
{
    if(in==n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=in;i<n;i++)
    {
       
        
        swap(arr[in],arr[i]);
        index(n,arr,in+1);
        swap(arr[in],arr[i]);
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            swap(arr[0],arr[i]);
        }
    }
    
    index(n,arr,1);
}