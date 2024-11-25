//Given a string and an integer k, find all permutations of the string where the first k characters must be in their original order.

//Input: "ABCDE", k = 3
//Output: ["ABCED", "ABCED", "ABDEC", ...]


#include<bits/stdc++.h>
using namespace std;

void permute(string s,int index)
{
    if(index==s.size())
    {
        cout<<s<<endl;
        return;
    }
    for(int i=index;i<s.size();i++)
    {
        swap(s[index],s[i]);
        permute(s,index+1);
        swap(s[index],s[i]);
    }
}
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int n=s.size();
    permute(s,0+k);
}
