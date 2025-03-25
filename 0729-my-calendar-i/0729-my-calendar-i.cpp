class MyCalendar {
public:
unordered_map<int,int>mp;
    MyCalendar() {
        //vector<int>cal;
    }
    
    bool book(int startTime, int endTime) {
        for(auto x:mp){
            int start=x.first;
            int end=x.second;
            if(max(start,startTime)<min(end,endTime)){
                return false;
            }
        }
        mp[startTime]=endTime;
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */