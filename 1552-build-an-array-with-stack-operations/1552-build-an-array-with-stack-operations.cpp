class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
       stack<int>st;
       vector<string>v;
       int n1=target.size();
       int i=0;
       int j=1;
       
       
       while(i<n1){
        if(st.empty()){
            st.push(j);
            v.push_back("Push");
        }
        if(target[i]==st.top()){
            i++;
            j++;
            st.pop();
            // j++;
            // st.push(j);
            // v.push_back("Push");

        }
        else {

           st.pop();
           v.push_back("Pop");
           j++;
        //    j++;
        //    st.push(j)

          

        }
       }
       return v;
       
    }
};