class Solution {
public:
    string decodeAtIndex(string s, int k) {
        int n = s.size() ; 
        long long cur = 0 ; 
        for( int i = 0 ; i < n   ; i ++){
            if(s[i] - '0' <=9 && s[i] -'0' >=0)  {// num
                cur= cur*(s[i]-'0') ;  
            }else cur++ ;
        }
          for( int j  =  n-1 ; ~j; j--){
            if(s[j] - '0' <=9 && s[j] -'0' >=0)  {// num
                cur/= (s[j]-'0') ;  
                k%=cur ;
            }else {
                if(!k || k == cur) return  string("")+s[j]; 
                cur--; 
            }
        }
        
        return " "; 
        
    }
};