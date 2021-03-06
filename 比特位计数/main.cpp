#include<vector>
using namespace std;
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> dp(num+1,0);
        for(int i=1;i<=num;i++){
            if(i%2==0){
                dp[i] = dp[i/2];
            }else{
                dp[i] = dp[i-1]+1;
            }
        }
        return dp;
    }
};