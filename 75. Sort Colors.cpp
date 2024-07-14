class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n0=0;
        int n1=0;
        int n2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                n0++;
            }
            else if(nums[i]==1){
                n1++;
            }
            else if(nums[i]==2)
             n2++;
        }

        int k=0;
        int n=nums.size();
        for(int i=0;i<n0;i++){
            nums[k]=0;
            k++;
        }
         for(int i=0;i<n1;i++){
            nums[k]=1;
            k++;
        }
         for(int i=0;i<n2;i++){
            nums[k]=2;
            k++;
        }

         for(int i=0;i<nums.size();i++){
           cout<<nums[i];
        }

        
    }
};
