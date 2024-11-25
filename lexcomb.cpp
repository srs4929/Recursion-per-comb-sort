//Problem: Given a string or set, print all combinations of size k in lexicographical order.
//Example:
//Input: "ABC", k = 2
//Output: ["AB", "AC", "BC"]
//Recursion Idea: Sort the input string or set first, and then generate combinations in a manner that ensures they are lexicographically ordered.


#include<bits/stdc++.h>
using namespace std;

void lex(string s,string curr,int k,int index)
{
    if(k==curr.size())
    {
        cout<<curr<<endl;
        return;
    }
    if(index==s.size()) return;
    //include
    lex(s,curr+s[index],k,index+1);
    //exclude
    lex(s,curr,k,index+1);
   

}
int main()
{
    string s,x;
    cin>>s;
    int k;
    cin>>k;
    x="";
    sort(s.begin(),s.end());
    lex(s,x,k,0);



}