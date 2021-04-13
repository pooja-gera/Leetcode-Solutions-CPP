class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      vector<bool> answer;
      int max_ele = -1;
      for(int i=0;i<candies.size();i++){
          if(candies[i]>max_ele){
              max_ele = candies[i];
          }
      }
      for(int i=0;i<candies.size();i++){
          if(candies[i]+extraCandies>=max_ele){
              answer.push_back(true);
          }
          else{
              answer.push_back(false);
          }
      }
     return answer;
    }
};
