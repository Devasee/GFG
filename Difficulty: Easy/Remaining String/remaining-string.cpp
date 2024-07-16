//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        string s1;
        int index = -1;
        int i = 0;
        
        while(count >0 && i < s.size())
        {
            if(s[i] == ch)
            {
               count --; 
               index = i;
           
            
            if (count == 0) {
                    index = i;
                }
            }
            
            if(count != 0 && i == s.size() - 1)
            {
                return "";
            }
            
            i++;
        }
        
        if (index == -1) {
            return "";
        }
        
        return s.substr(index+1, s.size());
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        char ch;
        int count;

        cin >> s >> ch >> count;
        Solution ob;
        cout << ob.printString(s, ch, count) << "\n";
    }

    return 0;
}
// } Driver Code Ends