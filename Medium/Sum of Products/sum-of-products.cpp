//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
public:
    long long pairAndSum(int n, long long arr[]) {
        // Initialize the sum
        long long sum = 0;
        
        // Count the number of set bits at each position
        int countBits[32] = {0}; // Assuming long long is 64-bit
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 32; j++) {
                if (arr[i] & (1LL << j)) { // Check if the jth bit is set
                    countBits[j]++; // Increment the count for this bit position
                }
            }
        }
        
        // Calculate the sum using the count of set bits
        for (int i = 0; i < 32; i++) {
            // Contribution of this bit position to the sum
            long long bitContribution = (1LL << i) * countBits[i] * (countBits[i] - 1) / 2;
            sum += bitContribution;
        }
        
        // Return the sum
        return sum;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        long long Arr[N];
        for (int i = 0; i < N; i++) {
            cin >> Arr[i];
        }
        Solution ob;
        cout << ob.pairAndSum(N, Arr) << endl;
    }
    return 0;
}
// } Driver Code Ends