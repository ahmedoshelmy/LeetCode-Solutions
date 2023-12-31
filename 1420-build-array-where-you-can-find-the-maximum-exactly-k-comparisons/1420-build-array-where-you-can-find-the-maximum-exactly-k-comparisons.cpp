class Solution {
public:
    int m , n , k ;
    long long dp[51][101][51] ;
    const int mod = 1e9+7 ; 
    long long go(int i , int mx , int ki){
        if(ki < 0) return 0 ;
        if(i == n) return ki == 0;
        long long & ret = dp[i][mx][ki] ; 
        if(~ret) return ret; 
        ret = 0 ;
        ret =( ret + (go(i+1 , mx , ki)%mod * mx)%mod)%mod ;
        for (int j = mx+1; j <=m; ++j) {
            ret =( ret + go(i+1,j,ki-1))%mod ;
        }
        return ret ;
    }
    int numOfArrays(int n, int m, int k) {
        this->m = m ;
        this->n = n ;
        this->k = k ;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j <= m; ++j) {
                for (int l = 0; l <=k; ++l) {
                    dp[i][j][l] = -1; 
                }
            }
        }
        return go(0 , 0 , k) ;
    }
};