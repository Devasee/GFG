//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        vector<int> ans;
        unordered_map<int, int> mp;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(mp.find(arr[i]) == mp.end()){
                mp[arr[i]] = 1;
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};




//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.removeDuplicate(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends