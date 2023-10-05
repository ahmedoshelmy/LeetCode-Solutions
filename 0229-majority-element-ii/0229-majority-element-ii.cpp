class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ; 
        int n = nums.size() ;
        vector<int> ans; 
        for(int i = 0 ; i<n;i++){
            int j = i ; 
            while(j <n && nums[i] == nums[j]) j++ ; 
            if(j-i > n/3) ans.push_back(nums[i]); 
            i = j-1; 
        }
  
        return ans; 
    }
};