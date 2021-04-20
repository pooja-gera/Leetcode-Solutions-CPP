class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxWater = 0;
        int currWater = 0;
        while(left<=right){
            
            currWater = (right-left)*(min(height[left],height[right]));
            if(currWater>maxWater){
                maxWater = currWater;
            }
            
            if(height[left]<height[right]){
                left++;
            }
            else if(height[left]==height[right]){
                left++;
                right--;
            }
            else{
                right--;
            }
        }
        return maxWater;
    }
};
