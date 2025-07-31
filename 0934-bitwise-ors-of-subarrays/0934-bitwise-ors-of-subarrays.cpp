class Solution {
public:
    int subarrayBitwiseORs(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>prev;
        unordered_set<int>curr;
        unordered_set<int>res;
        for(int i=0;i<n;i++){

            for(auto& x : prev){
                curr.insert(x|nums[i]);
                res.insert(x|nums[i]);
            }

            curr.insert(nums[i]);
            res.insert(nums[i]);
            prev=curr;
            curr.clear();
        }

        return res.size();
    }
};