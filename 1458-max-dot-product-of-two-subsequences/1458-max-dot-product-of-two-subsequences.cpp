class Solution {
public:
    vector<int> a ,b ;
    int n ,m  ;
    int dp[501][501][2] ;
    int go(int i , int j , bool sel){
        if(i == n || j == m) { 
            if(!sel)return -1e9 ;
            return 0; 
        }
        int & ret = dp[i][j][sel] ;
        if(ret != INT32_MIN) return ret;
        ret = a[i] * b[j] + go(i+1 , j+1,1) ;
        
        ret = max({ret, go(i + 1, j,sel) , go(i , j+1,sel)});
        return ret;
    }

    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        n = nums1.size() , m = nums2.size();
        a = nums1 , b = nums2;
        for(int i = 0 ; i<n ;i++ ) for(int j = 0 ; j< m;j++) dp[i][j][0] = dp[i][j][1] = INT32_MIN;
        return go(0 , 0,0);
    }
};