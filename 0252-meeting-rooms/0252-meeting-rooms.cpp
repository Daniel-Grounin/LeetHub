class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
         for (int i = 0; i < intervals.size(); i++) {
            for (int j = i + 1; j < intervals.size(); j++) {
                
                if (intervals[i][0] < intervals[j][1] && intervals[j][0] < intervals[i][1]) {
                    return false; // Overlap found
                }
            }
        }
        return true; 
    }
};