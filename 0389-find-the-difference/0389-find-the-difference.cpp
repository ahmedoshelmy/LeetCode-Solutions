class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> v1(26) , v2(26) ;
        for(auto & u:s) v1[u-'a']++ ; 
        for(auto & u:t) v2[u-'a']++ ; 
        for(int i = 0 ; i<26;i++){
            if(v2[i]-v1[i] ) return 'a'+i ;
        }
        return ' ';
    }
};