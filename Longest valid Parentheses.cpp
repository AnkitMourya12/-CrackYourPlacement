//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxLength(string& s) {
        // code here
        stack<int> st;
        // to handle edge case if the string is valid from very start
        st.push(-1);
        int ans=0,i=0;
        for(auto itr:s){
            if(itr=='('){
                st.push(i);
            }else{
                if(!st.empty())
                    st.pop();
                if(!st.empty()){
                    // to find the last point till which the string is solved.
                    ans=max(ans,i-st.top());
                }else{
                    //to find the new marking point;
                    st.push(i);
                }
            }
            i++;
        }
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.maxLength(S) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
