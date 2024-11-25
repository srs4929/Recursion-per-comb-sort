// Given a set of n elements, generate all combinations of size k.
//Example:
//Input: n = 3, k = 2
//Output: ["1 2", "1 3", "2 3"]
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
   allset(arr,result,0,k);

}