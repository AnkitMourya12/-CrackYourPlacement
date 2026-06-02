Pairs with Certain Difference (GFG)
Problem Statement

Given an array of integers and a number k, the task is to find the maximum pair sum with the following conditions:

Pair difference should be less than k.
Pairs should be disjoint.
If (x, y) is a pair, then neither x nor y can be used again.
Sum of p pairs means the sum of all 2p elements.
If no valid pairs can be formed, return 0.
Examples
Example 1

Input:

arr[] = [3, 5, 10, 15, 17, 12, 9]
k = 4

Output:

62

Explanation:

Valid disjoint pairs with difference less than k:

(3,5), (10,12), (15,17)

Maximum sum:

3 + 5 + 10 + 12 + 15 + 17 = 62

Another possible pairing:

(3,5), (9,12), (15,17)

gives a smaller sum, so it is not optimal.

Example 2

Input:

arr[] = [5, 15, 10, 300]
k = 12

Output:

25

Explanation:

Possible valid pairs:

(5,10)

Sum:

15

Another valid pair:

(10,15)

Sum:

25

which is maximum.

Constraints
1 ≤ arr.size() ≤ 10^5
0 ≤ k ≤ 10^5
1 ≤ arr[i] ≤ 10^4

=========================================================solution===========================

class Solution {
  public:
    int sumDiffPairs(vector<int>& arr, int k) {
        // code here
        priority_queue<int>pq;
        int ans=0;
        
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
        }
        int p1=0;
        int p2=0;
        int diff=0;
        while(!pq.empty()){
            p1=pq.top();
            pq.pop();
            if(pq.size()==0){
                break;
            }
            p2=pq.top();
            diff=abs(p1-p2);
            if(diff>=k){
                continue;
            }
            pq.pop();
            ans=ans+p1+p2;
    
        }
        return ans;
    }
};
