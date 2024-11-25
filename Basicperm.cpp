//Given a string of distinct characters, print all the possible permutations of the string.
//Input: "ABC"
//Output: ["ABC", "ACB", "BAC", "BCA", "CAB", "CBA"]

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
    int n=s.size();
    permute(s,0);
}