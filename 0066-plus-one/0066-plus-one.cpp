class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=0;
        int j= digits.size()-1;
        while(i<=j)
        { if(digits[j]==9){
             
            digits[j]=0;
        }  
       
            else
            {
               digits[j]=digits[j]+1;
                 return digits;
              // break;

            }
            j--;
        }
        digits.push_back(0);
      digits[0] = 1;
      return digits;
   
    }
};