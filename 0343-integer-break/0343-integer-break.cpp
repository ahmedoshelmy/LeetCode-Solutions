class Solution {
public:
    const int N = 60 ; 
    vector<int> dp; 
    int go(int n , int k=0) {
        if(n == 0) return k >=2; 
        int & ret = dp[n] ; 
        if(~ret) return ret ;
        ret = 0 ; 
        for(int i = 1;i<=n;i++){
            ret = max(ret , i * go(n-i , k+1)) ; 
        }
        return ret; 
    }
    int integerBreak(int n ){
        dp = vector<int>(N , -1) ; 
        return go(n) ; 
    }
};