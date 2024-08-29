class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int temp_max;
        int max = 0;
        for(vector<int> account : accounts){
            temp_max = 0;
            for(int element : account){
                temp_max += element;                
            }
            if(temp_max > max){
                max = temp_max;
            }
            cout << endl;
        }
        return max;
    }
};