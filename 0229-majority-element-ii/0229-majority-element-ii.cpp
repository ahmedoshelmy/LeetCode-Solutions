class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size() ;
        unordered_map<int,int> cnt; 
        for(int i = 0 ; i<n;i++){
            cnt[nums[i]]++; 
        }
        // O (n log n)
        vector<int> ans; 
        for(auto & [u,v]:cnt) if(v > n/3) ans.push_back(u);
        return ans; 
    }
};