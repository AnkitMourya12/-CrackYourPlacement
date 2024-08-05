unordered_map<int,int>mp;
    int sum=0;


    for(int i=0;i<nums.size();i++){
        int diff=target-nums[i];
        
        if(mp.find(diff)!=mp.end()){
            return {mp[diff],i};
        }
        mp[nums[i]]=i;
    
     }

    return {}


    }
