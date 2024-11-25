#include<bits/stdc++.h>
using namespace std;

void allset(vector<int>arr,vector<int>result,int index)
{
    if(index==arr.size()) 
    {
        for(int i=0;i<result.size();i++)
        {
            cout<<result[i]<<"";
        }
        cout<<endl;
        return;
    }

    result.push_back(arr[index]);
    allset(arr,result,index+1);
    result.pop_back();
    allset(arr,result,index+1);

}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
   {
       cin>>arr[i];

   }
   vector<int>result;
   allset(arr,result,0);

}