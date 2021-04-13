class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        int max_wealth = -1;
        int customer_wealth = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               customer_wealth+=accounts[i][j]; 
            }
            if(customer_wealth>max_wealth){
                max_wealth = customer_wealth;
            }
            customer_wealth = 0;
        }
        return max_wealth;
    }
};
