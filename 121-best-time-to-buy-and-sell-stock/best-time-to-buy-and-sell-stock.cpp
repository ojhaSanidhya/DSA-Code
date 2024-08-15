class Solution {
public:
    int solve(vector<int>& prices, int i, int j, int ans, int &maxi){
        //Base Case
        if(i>j || j>=prices.size()){
            return maxi;
        }
        //RR
        if(prices[i]<prices[j]){
            ans = prices[j] - prices[i];
            maxi = max(maxi,ans);
            return solve(prices,i,j+1,ans,maxi);
        }
        else{
            return solve(prices,j,j+1,ans,maxi);
        }
    }
    int maxProfit(vector<int>& prices) {
        //By recursion
        int i = 0;          //buying
        int j = 1;          //Selling
        int ans = 0;
        int maxi = INT_MIN;
        int finalans = solve(prices,i,j,ans,maxi);
        if(finalans != INT_MIN) return finalans;
        else{
            return 0;
        }

        // By two pointers
        // int i = 0;          //buying
        // int j = 1;          //Selling
        // int ans = 0;
        // int maxi = INT_MIN;
        // int buyDay = 0;     //At which day we are buying the stocks
        // while(i<j && j<prices.size()){
        //     if(prices[i]<prices[j]){
        //         ans = prices[j] - prices[i];
        //         buyDay = i; //At ith day we are buying the stock
        //         maxi = max(maxi,ans);  //Taking the maximum profit 
        //         j++;
        //     }
        //     else{
        //         i=j;
        //         j++;    
        //     }
        // }
        // if(maxi != INT_MIN){
        //     return maxi;
        // }
        // else{
        //     return 0;
        // }
        
    }
};