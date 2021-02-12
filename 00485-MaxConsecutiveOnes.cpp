//Max consecutive ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) { int cno=0,maxno=0;
                                               if(nums.size()==0){return 0;}
                                               else if(nums.size()==1){
                                                   if(nums[0]==1){return 1;}
                                                   else {return 0;}
                                               }
                                                   
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) cno++;
            if(maxno < cno ) maxno = cno; 
           if(nums[i]==0) cno = 0; 
    }
                                                   return maxno; }
};
