int n = arr.size();
        if (n < 2) {
            return {}; 
        }
       
        sort(arr.begin(), arr.end());

        
        pair<int, int> closestPair;
        int closestDiff = INT_MAX; 

       
        int i = 0, j = n - 1;
        while (i < j) {
            
            int sum=arr[i]+arr[j];
            
            if(closestDiff>abs(sum-target)){
                closestDiff=abs(sum-target);
                closestPair=make_pair(arr[i],arr[j]);
            }
            
            if(sum>target){
                j--;
            }
            else{
                i++;
            }
            
            
        }

        return {closestPair.first, closestPair.second};
