//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return 0; // If array has only one element, no jumps are needed
        if (arr[0] == 0) return -1; // If the first element is zero, you can't move anywhere

        int jumps = 0; // To count the number of jumps
        int farthest = 0; // The farthest point we can reach
        int endOfCurrentJump = 0; // The end of the current jump range

        for (int i = 0; i < n - 1; i++) {
            farthest = max(farthest, i + arr[i]); // Update the farthest point reachable from index `i`
            
            if (i == endOfCurrentJump) {
                // When we've reached the end of the current jump range
                jumps++; // Increment the number of jumps
                endOfCurrentJump = farthest; // Set the next range's end to the farthest reachable index
                
                if (endOfCurrentJump >= n - 1) {
                    // If the farthest point reaches or exceeds the last index, we're done
                    break;
                }
            }
            
            if (i >= farthest) {
                // If we can't move further from the current position, return -1 (not possible to reach the end)
                return -1;
            }
        }

        return jumps;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends