//Problem: Generate all combinations of size k from a set of n elements, such that the elements in each combination are in increasing order
#include<bits/stdc++.h>
using namespace std;

void allset(vector<int>arr,vector<int>result,int index,int k)
{    
    
    if(result.size()==k) 
    {
        for(int i=0;i<result.size();i++)
        {
            cout<<result[i]<<" ";
        }
        cout<<endl;
        return;
    }
     if(index>=arr.size()) return;

    result.push_back(arr[index]);
    allset(arr,result,index+1,k);
    result.pop_back();
    allset(arr,result,index+1,k);

}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
   {
       cin>>arr[i];

   }
   vector<int>result;
   sort(arr.begin(),arr.end(),greater<int>());
   allset(arr,result,0,k);

}