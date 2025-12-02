class Solution {
public:
    #define ll long long
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int, int> um;
        for(vector<int> point: points) {
            ++um[point[1]];
        }
        ll MOD = 1e9 + 7;
        ll sum = 0;
        ll ans = 0;
        for(auto itr: um) {
            ll val = (1LL * itr.second * (itr.second - 1) / 2) % MOD;
            if(val > 0){
                ans += sum * val % MOD;
                sum += val;
                sum %= MOD;
                ans %= MOD;
            }
        }
        return ans;
    }
};