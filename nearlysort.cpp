//Problem: You are given an array of n integers, where each element is at most k positions away from its correct position. Sort the array in ascending order.
//Input Example:
//Array: [3, 2, 1, 5, 4], k = 2
//Goal: Determine whether bubble sort, insertion sort, or heap sort is more suitable
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
    //round
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for( ;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;;
    }
}
//complexity(Onk)