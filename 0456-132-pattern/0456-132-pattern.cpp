class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        multiset<int> l , r  ; int n = nums.size() ;
        for (int i = 0; i < n; ++i)
            r.insert(nums[i]);
        for(int i = 0;  i < n-1 ; i ++){
            r.erase(r.lower_bound(nums[i]));
            if(!l.empty() && !r.empty()){
                int x = *l.begin();
                auto it = r.lower_bound(nums[i]) ;
                if(it != r.begin()) it--;
                if(x < *it && *it < nums[i]) return true;
            }
            l.insert(nums[i]);
        }
        return false;
    }
};