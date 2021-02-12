class Solution {
public:
    int findNumbers(vector<int>& nums) {
        if(nums.size()==0) return 0;
        
        int temp=0,digit=0,ans=0;
        
        for(int i = 0; i<nums.size(); i++){
            temp = nums[i]; 
            
            while(temp!=0){
                temp=temp/10;
                digit++;
            }
            
            if(digit%2==0) ans++;
            
            digit = 0; 
        }
        
        return ans; 
    }
};
