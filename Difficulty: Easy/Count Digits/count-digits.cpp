//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int evenlyDivides(int n){
        int num = n;
        int count = 0;
        
        while(num > 0)
        {
            int r = num % 10;
            if(r != 0 && n % r == 0) // Check if r is non-zero first
                count ++;
            
            num = num / 10;
        }
        
        return count;
    }
};



//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends