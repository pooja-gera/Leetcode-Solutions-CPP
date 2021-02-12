class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       if(nums.size()==1){
           return nums;
       } 
        
       int product=1;
       vector<int> output;
        for(int i=0;i<nums.size();++i){
            product*=nums[i];
            output.push_back(product);
        }
        
        product=1;
        for(int i=nums.size()-1;i>=1;--i){
            output[i]=output[i-1]*product;
            product*=nums[i];
        }
        output[0]=product;
        return output;
    }
};
