class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int length=nums.size();
        int sum=((length*(length-1))/2)+nums.size();
        for(int i=0;i<nums.size();i++){
            sum-=nums[i];
        }
        return sum;
    }
};
