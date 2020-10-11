class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int result = 0;
        for(int i=0;i<startTime.size();i++)
        {
            if(queryTime >= startTime[i] && queryTime <= endTime[i] )
                result+=1;
        }
        return result;
    }
};