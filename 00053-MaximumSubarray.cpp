class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int maxsum=INT_MIN,cumsum=0;
        for(int i=0;i<nums.size();i++){
            cumsum+=nums[i];
            if(cumsum<nums[i]){
                cumsum=nums[i];
            }
            if(maxsum<cumsum){
                maxsum=cumsum;
            }
        }
        return maxsum;
    }
};
