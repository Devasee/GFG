//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  User function template for C++

#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> constructLowerArray(std::vector<int>& arr) {
        int n = arr.size();
        std::vector<int> result(n, 0);
        std::vector<int> sortedArr = arr;
        std::sort(sortedArr.begin(), sortedArr.end());
        
        BIT bit(n);
        
        for (int i = n - 1; i >= 0; --i) {
            int pos = std::lower_bound(sortedArr.begin(), sortedArr.end(), arr[i]) - sortedArr.begin();
            result[i] = bit.query(pos);
            bit.update(pos + 1, 1);
        }
        
        return result;
    }
    
private:
    class BIT {
    public:
        BIT(int size) : bit(size + 1, 0) {}

        void update(int index, int val) {
            for (; index < bit.size(); index += index & -index) {
                bit[index] += val;
            }
        }

        int query(int index) {
            int sum = 0;
            for (; index > 0; index -= index & -index) {
                sum += bit[index];
            }
            return sum;
        }

    private:
        std::vector<int> bit;
    };
};


//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        vector<int> a = ob.constructLowerArray(arr);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends