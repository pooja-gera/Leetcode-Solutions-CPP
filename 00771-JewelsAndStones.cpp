class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
    int ans=0;  
    for(int i=0;stones[i]!='\0';i++){
          for(int j=0;j<jewels[j];j++){
              if(jewels[j]==stones[i]){
                  ans++;
              }
          }
      }
        return ans;
        
    }
};
