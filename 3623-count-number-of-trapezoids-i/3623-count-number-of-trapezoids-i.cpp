class Solution {
public:
    int m=1e9+7;
    int countTrapezoids(vector<vector<int>>& points) {
    unordered_map<int,int>mp;

        for(auto & point:points){
            int y=point[1];
            mp[y]++;
        }
        long long res=0;
        //long long horizontalLine=0;
        long long previousCountOfHorizontalLine=0;

        for(auto &it:mp){
            int count=it.second;
            
            long long horizontalLine= (long long)count * (count-1)/2;
            res+=horizontalLine*previousCountOfHorizontalLine;
            previousCountOfHorizontalLine+=horizontalLine;


        }
        return res%m;
    }
};