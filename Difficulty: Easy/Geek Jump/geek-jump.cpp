//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        
        int prev1 = abs(height[0] - height[1]);
        int prev2 = 0;
        int current = prev1;
        
        if(n == 1)
        return prev2;
        

        for(int i=2; i<n; i++)
        {
            current = min((prev1 + abs(height[i] - height[i-1])), (prev2 + abs(height[i] - height[i-2])));
            prev2 = prev1;
            prev1 = current;
        }
        
        return current;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends