class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count=0;
        int left=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i] != nums[i + 1]){
            if(( nums[i]>nums[left] && nums[i+1]<nums[i]) || (nums[i]<nums[left] && nums[i+1]>nums[i])){
                    count++;
            }
             left=i;
        }
           
            //else count--;
            
        }
        return count;
    }
};