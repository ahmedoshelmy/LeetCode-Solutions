class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> suff (n) , pre(n) ;
        suff.back()  = nums.back(); pre[0] = nums[0]; 
        long long ans = 0;
        for(int i = n-2 ; ~i ; i--){
            suff[i] = max(suff[i+1] , nums[i]) ;
        }
        for (int i = 1; i < n; ++i) {
            pre[i] = max(pre[i-1] , nums[i]); 
        }
        for (int i = 1; i < n-1; ++i) {
            ans = max(ans , 1LL *(pre[i-1] - nums[i] )* suff[i+1]) ;
        }
        return ans;
    }
};