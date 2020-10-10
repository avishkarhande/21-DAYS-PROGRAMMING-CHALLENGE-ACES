class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>output;
        vector<int>sorted;
        for(int i=0;i<candies.size();i++){
            sorted.push_back(candies[i]);
        }
        sort(sorted.begin(),sorted.end());
        for(int i=0;i<candies.size();i++){
            if((candies[i]+extraCandies)>=sorted[sorted.size()-1]){
                output.push_back(true);
            }else{
                output.push_back(false);
            }
        }
        return output;
    }
};