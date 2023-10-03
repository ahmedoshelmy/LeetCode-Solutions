class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> f(101); 
        for(auto & u:nums) f[u]++; 
        int ans = 0 ; 
        for(int i = 1; i<=100;i++) ans+=(f[i]*(f[i]-1)/2);
        return ans ;
    }
};