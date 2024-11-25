//Problem: Given an array of integers and a target sum, find all combinations of numbers that add up to the target sum.
//Example:
//Input: [2, 3, 6, 7], target = 7
//Output: ["2 2 3", "7"]
//Recursion Idea: Use recursion to explore all possible combinations while keeping track of the sum and backtracking when the sum exceeds the target.

#include<bits/stdc++.h>
using namespace std;

void s(vector<int>&arr,vector<int>&result,int index,int target)

{
   
    
        int sum=0;
        for(int i=0;i<result.size();i++)
        {
            sum+=result[i];
        }
        if(sum==target)
        {
            for(int i=0;i<result.size();i++)
            {
                cout<<result[i]<<" ";
            }
            cout<<endl;
            
        }
        
    
    if(index>=arr.size()) return;
    result.push_back(arr[index]);
    s(arr,result,index+1,target); //allow same index also
    result.pop_back();
    s(arr,result,index+1,target);


}
int main()
{
    int n,target;
    cin>>n>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>result;
    s(arr,result,0,target);


}