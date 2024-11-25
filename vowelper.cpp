////Problem: Given a string, generate all permutations where the character at position i must be either a vowel 
//Example:
//Input: "abcdef", i=3 must be vowel"
//Output: "abcedf", "ebacdf", ... (Ensuring index 3 is a vowel in all permutations)

#include<bits/stdc++.h>
using namespace std;

bool vowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') return true;
    else return false;
}

void permute(string s,int index,int k)
{
    if(index==s.size())
    {   
        if(vowel(s[k]))
        cout<<s<<endl;
        return;
    }
    for(int i=index;i<s.size();i++)
    {
        swap(s[index],s[i]);
        permute(s,index+1,k);
        swap(s[index],s[i]);
    }
}
int main()
{
    string s;
    int k;
    cin>>s>>k;
    int n=s.size();
    k=k-1;
    permute(s,0,k);
}