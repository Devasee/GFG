//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    // Top-Down Approach (Memoization)
    long long int fib(int n, vector<long long int>& dp) {
        // Base cases
        if (n == 0 || n == 1) {
            return n;
        }

        // If already calculated, return from dp array
        if (dp[n] != -1) {
            return dp[n];
        }

        // Recursively calculate and store in dp array
        dp[n] = (fib(n - 1, dp) + fib(n - 2, dp)) % 1000000007;  // Apply modulo during calculation

        return dp[n];
    }

    long long int topDown(int n) {
        vector<long long int> dp(n + 1, -1);  // Create dp array initialized to -1
        return fib(n, dp);  // Return the nth Fibonacci number modulo 1000000007
    }

    // Bottom-Up Approach (Tabulation)
    long long int bottomUp(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        long long int prev1 = 1;
        long long int prev2 = 0;
        long long int current = 0;

        // Iteratively calculate the Fibonacci numbers with modulo
        for (int i = 2; i <= n; i++) {
            current = (prev1 + prev2) % 1000000007;  // Apply modulo in every calculation
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
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    }
}
// } Driver Code Ends