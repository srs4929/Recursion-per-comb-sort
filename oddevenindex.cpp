//in the odd index just the odd number and in the even index even number
//the listcontains n digit
//the digits in the list are(0-4) inclusive
//the odd indexed digit in the list is odd number
//the even indexed digit in the list is even number
#include<bits/stdc++.h>
using namespace std;
void result(int arr[],int l,int s)
{
    if(l>=s)
    {
        for(int i=0;i<s;i++)
        {
            if(i!=0) cout<<" ";
            cout<<arr[i];
        }
        cout<<endl;
        return;
    }

    for(int i=0;i<5;i++) // for(0-4) inclusive
    {
        if(l%2!=i%2) continue;
        arr[l]=i;
        result(arr,l+1,s);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    result(arr,0,n);
}