//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include <unordered_map>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool kPangram(string str, int k) {
        unordered_map<char, int> mp;
        int unneeded = 0;

        // Count the frequency of each letter
        for (char c : str) {
            if (isalpha(c)) {
                mp[tolower(c)]++;
            }
        }

        // Calculate the number of unneeded duplicates and distinct letters
        for (auto &it : mp) {
            if (it.second > 1) {
                unneeded += it.second - 1;
            }
        }

        int distinctLetters = mp.size();
        int needed = 26 - distinctLetters;

        // Check if the needed letters can be added with the given changes
        return needed <= k && unneeded >= needed;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends