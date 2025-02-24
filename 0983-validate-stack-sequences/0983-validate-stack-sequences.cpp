class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n1=pushed.size();
        int n2=popped.size();
        stack<int>st;
        int i=-1;
        int j=0;
        // st.push(pushed[i]);
        // i++;
        while(i<n1 && j<n2){
            if(st.size()==0){
                i++;
                st.push(pushed[i]);
            }
            else{
                if(st.top()==popped[j]){
                    st.pop();
                    j++;
                }
                else{
                    if(i+1==n1){
                        return false;
                    }
                    else{
                        i++;
                        st.push(pushed[i]);
                    }
                }
            }

        //     if(st.top()!=popped[j] ){
        //         st.push(pushed[i]);
        //         i++;
        //     }
        //     else if(i>=n1 || j>=n2){
        //         return false;
        //     }

        //     else{
        //         st.pop();
        //         j++;
        //     }
        // }

        // if(!st.empty()){
        //     return false;
        // }
        }

        return true;
    }
};