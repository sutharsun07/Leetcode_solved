class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(),prices.rend());
        sort(discounts.rbegin(),discounts.rend());
        double ans=0;
        int a=prices.size();
        int b=discounts.size();
        int i=0;
        int j=0;
        while( i < a && j < b ){
            double s=(double)(prices[i]*(100-discounts[j]))/100;
            ans+=s;  
            i++;
            j++;  
        }
        while( i < a ){
            ans+=prices[i];
            i++;
        }
        return ans;
    }
};