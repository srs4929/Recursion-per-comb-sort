//Problem: Given a string with some repeating characters, print all unique permutations of the string.
//Example:
//Input: "AAB"
//Output: ["AAB", "ABA", "BAA"]

#include<bits/stdc++.h>
using namespace std;

void duplicate(int n,int arr[],int index)
{
    if(index==n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<"";
        }
        cout<<endl;
        return;
    }
    for(int i=index;i<n;i++)
    {
       
        if(i!=index&&arr[i]==arr[index]) continue;
        swap(arr[index],arr[i]);
        duplicate(n,arr,index+1);
        swap(arr[index],arr[i]);
    }
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
    sort(arr,arr+n);
    duplicate(n,arr,0);
}