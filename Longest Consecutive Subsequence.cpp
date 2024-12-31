class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        unordered_set<int>nums(arr.begin(),arr.end());
        int longest=0;
        
       for (int num : nums) {
    //     // Check if it's the start of a sequence
        if (nums.find(num - 1) == nums.end()) {
            int currentNum = num;
            int currentStreak = 1;

            // Count the length of the consecutive sequence
            while (nums.find(currentNum + 1) != nums.end()) {
                currentNum++;
                currentStreak++;
            }

            // Update the longest streak
            longest = max(longest, currentStreak);
        }
    }

    return longest;
    }
};
