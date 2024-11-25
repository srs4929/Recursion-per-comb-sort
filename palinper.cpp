//Given a string, find if there is a permutation of it that forms a palindrome. If it is possible, print the palindrome permutations.
//Example:
//Input: "aabb"
//Output: ["abba", "baab"]

#include<bits/stdc++.h>
using namespace std;

bool palin(string x,int s,int e)
{
    if(s>=e) return true;

    if(x[s]!=x[e]) return false;
    
    return palin(x,s+1,e-1);

    


}

void permute(string s,int index)
{
    if(index==s.size())
    {   
        if(palin(s,0,s.size()-1))
        cout<<s<<endl;
        return;
    }
     unordered_set<char> seen;
    for(int i=index;i<s.size();i++)
    {   
        if (seen.find(s[i]) != seen.end()) continue; // Skip if character was already swapped
        seen.insert(s[i]); // Mark this character as used at this index
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
    sort(s.begin(),s.end());
    permute(s,0);
}