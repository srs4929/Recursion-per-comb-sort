//Given a string, print the permutations of the string in lexicographical order (dictionary order).
//Example:
//Input: "CBA"
//Output: ["ABC", "ACB", "BAC", "BCA", "CAB", "CBA"]

#include<bits/stdc++.h>
using namespace std;
void perm(string x,int index)
{
    if(index==x.size())
    {
        cout<<x<<endl;
        return;
    }
    for(int i=index;i<x.size();i++)
    {
        swap(x[index],x[i]);
        perm(x,index+1);
        swap(x[index],x[i]);
    }

}
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    perm(s,0);



}
