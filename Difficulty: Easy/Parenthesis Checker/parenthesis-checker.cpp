//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        
        for(int i=0; i<x.size(); i++)
        {
             if(x[i] == ')' || x[i] == '}' || x[i] == ']')
            {
                // Check if the stack is empty or the top doesn't match the current closing bracket
                if(st.empty() || (x[i] == ')' && st.top() != '(') ||
                   (x[i] == '}' && st.top() != '{') ||
                   (x[i] == ']' && st.top() != '['))
                {
                    return false;
                }
                st.pop();  // If matching, pop the top of the stack
            }
            else
            {
                // Push opening brackets to the stack
                st.push(x[i]);
            }
        }
        
        return st.empty(); 
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends