//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array

int majorityElement(int a[], int size)
{
    if(size == 1)
    {
        return a[0];
    }
    
    std::map<int, int> m;
    int ele = 0;
    
    for(int i = 0; i < size; i++)
    {
        m[a[i]]++;
    }
    
    int maximum = INT_MIN;
    int majority = -1;
    
    for(auto it = m.begin(); it != m.end(); ++it)
    {
        if(it->second > maximum)
        {
            maximum = it->second;
            ele = it->first;
        }
        
        if(it->second > size / 2)
        {
            majority = it->first;
        }
    }
    
    return majority;
}
};


//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends