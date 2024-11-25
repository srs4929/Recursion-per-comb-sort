//Problem: Given a set of n elements, find all combinations of size k with repetition allowed.
//Example:
//Input: n = 3, k = 2
//Output: ["1 1", "1 2", "1 3", "2 2", "2 3", "3 3"]
//Recursion Idea: Allow elements to be repeated by not restricting the choice of elements after each recursive step.
#include <bits/stdc++.h>
using namespace std;

void rep(vector<int>& arr, vector<int>& result, int k, int index, set<vector<int>>& uniqueCombinations)
{
    // Base case: if the result vector has size k, add to set and print if not already printed
    if(k == result.size())
    {
        // Insert the current combination into the set
        uniqueCombinations.insert(result);
        return;
    }
    
    // Generate combinations of size k with repetition allowed
    for(int i = index; i < arr.size(); i++)
    {
        result.push_back(arr[i]);  // Include the element
        rep(arr, result, k, i, uniqueCombinations);  // Recur with the same index to allow repetition
        result.pop_back();  // Backtrack to explore other possibilities
    }
}

int main()
{
    int n, k;
    cin >> n >> k;  // Input size of array (n) and the size of combination (k)
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];  // Input the array elements
    }
    
    vector<int> result;
    set<vector<int>> uniqueCombinations;  // Set to store unique combinations
    
    rep(arr, result, k, 0, uniqueCombinations);  // Generate combinations of size k starting from index 0
    
    // Print all unique combinations
    for (auto& comb : uniqueCombinations)
    {
        for (int i = 0; i < comb.size(); i++)
        {
            cout << comb[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
