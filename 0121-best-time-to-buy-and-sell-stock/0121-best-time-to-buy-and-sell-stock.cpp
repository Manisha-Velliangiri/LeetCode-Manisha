
class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
    int buyPrice=prices[0];
    
    int maxProfit=0;

    for(int i=0;i<prices.size();i++){
        if(prices[i]<buyPrice){
            buyPrice=prices[i];
        }
        else if(prices[i]>buyPrice){
          int current_profit=prices[i]-buyPrice;
          if(current_profit>maxProfit){
               maxProfit=current_profit;
          }
          
        }
    }
    return maxProfit;
    
    
    }


};











