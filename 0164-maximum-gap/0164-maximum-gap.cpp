class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(size(nums)<2) return 0;
         sort(nums.begin(),nums.end());

        int temp=0;
        for(int i=0;i<size(nums)-1;i++){
            temp=max(temp,nums[i+1]-nums[i]);
        }
        return temp;
    }

};