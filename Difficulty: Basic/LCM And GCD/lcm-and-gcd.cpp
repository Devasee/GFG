//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
  
    int gcd(long long a, long long b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long result = gcd(A, B);
        vector<long long> v;
        
        long long lcm = A * B / result;
        
        v.push_back(lcm);
        v.push_back(result);

        
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends