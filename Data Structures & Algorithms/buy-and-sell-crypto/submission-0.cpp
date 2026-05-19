class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()){
            return 0;
        }
        int res=0;
        int l=0,r=1;
        while(r<prices.size()){
            
            
            if(prices[r]<prices[l]){
                l=r;
            }
            else
            res=max(res,prices[r]-prices[l]);
            r++;
        }
        return res;
    }
};