//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int maxSum(int n)
        {
            //code here.
            
            if(n==0 )
            {
                return 0;
            }
            
            int first = INT_MIN;
            first = max(n/2 , maxSum(n/2));
            
            int second = INT_MIN;
            second = max(n/3 , maxSum(n/3));
            
            int third = INT_MIN;
            third = max(n/4 , maxSum(n/4));
            
            return max(n,first + second + third);

        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends