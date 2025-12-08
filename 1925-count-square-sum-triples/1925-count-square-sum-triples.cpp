class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        
        // Iterate through all possible values for the hypotenuse 'c'
        for (int c = 1; c <= n; ++c) {
            int target = c * c;
            int left = 1;
            int right = c - 1;
            
            // Two pointers approach to find a^2 + b^2 = c^2
            while (left < right) {
                int sum = left * left + right * right;
                
                if (sum == target) {
                    count += 2; // Add 2 because (a,b,c) and (b,a,c) are distinct
                    left++;
                    right--;
                } 
                else if (sum < target) {
                    left++; // Sum is too small, increase the smaller number
                } 
                else {
                    right--; // Sum is too big, decrease the larger number
                }
            }
        }
        
        return count;
    }
};