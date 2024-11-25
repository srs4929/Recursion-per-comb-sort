 //Given a string, print all permutations and also track the number of swaps made during the permutation generation.
//Example:
//Input: "ABC"
//Output: ["ABC", "ACB", "BAC", "BCA", "CAB", "CBA"] with swap count tracking
//doing with array

#include<bits/stdc++.h>
using namespace std;


void permute(int arr[],int n,int index,int s,int &t)
{
    if(index==n)
    {
        cout<<"Swapping count: "<<s<<endl;
        for(int i=0;i<n;i++)
        {   
            
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=index;i<n;i++)
    {
        swap(arr[index],arr[i]);
        s++;//counting
        t++;
        //backtracking
        permute(arr,n,index+1,s,t);
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
    int swap=0;
    int total=0;
    permute(arr,n,0,swap,total);
    cout<<"Total swap:"<<total<<endl;
}