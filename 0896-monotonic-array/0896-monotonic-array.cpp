class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool f = true ; 
        for(int i = 1 ; i< nums.size();i++){
            if(nums[i] > nums[i-1]){
                f = false ; 
                break;
            }
        }
        if(f) return f ;
        f = true;
        for(int i = 1 ; i< nums.size();i++){
            if(nums[i] < nums[i-1]){
                f = false ; 
                break;
            }
        }
        return f ;
        
    }
};