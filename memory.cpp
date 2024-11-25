//Problem: You need to sort an array of n integers, but you are allowed only O(1)O(1)O(1) additional memory (in-place sorting). Compare sorting methods.
//Goal: Compare quicksort, bubble sort, and selection sort for their in-place sorting capabilities

//Quicksort(Best Case:O(nlogn),worst case0(n^2))
//Selectionsort(Best Case:O(n^2),Space(O(1)))
//For sorting with 


//Use quicksort when performance matters.
//Use selection sort if minimizing memory and swap operations is more important than speed

#include<bits/stdc++.h>
using namespace std;

int part(int arr[],int n,int s,int e)
{
    int p=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=p) count++;
    }
    int index=count+s;
    swap(arr[s],arr[index]);
    int i=s;
    int j=e;
    while(i<index&&j>index)
    {
        if(arr[i]<p)
        {
            i++;
        }
        else if(arr[j]>p)
        {
            j--;
        }
        else
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return index;

}
void sort(int arr[],int n,int s,int e)
{
    if(s>=e) return;
    int p=part(arr,n,s,e);
    sort(arr,n,s,p-1);
    sort(arr,n,p+1,e);

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    sort(arr,n,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}