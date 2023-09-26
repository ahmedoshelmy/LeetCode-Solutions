class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>  mp (26) ,vis(26); 
        for(auto & u:s){
            mp[u -'a']++;
        } 
        stack<char> ss ;
        for(auto & u:s){
            if(vis[u-'a']){
                mp[u-'a']-- ; 
                continue; 
            }
            while(!ss.empty() && ss.top() > u && mp[ss.top()-'a'] > 1){
               mp[ss.top()-'a']--;
                 vis[ss.top()-'a'] = 0  ; 
                ss.pop() ;
            }
            vis[u-'a']++ ; 
            ss.push(u) ;
        }
        string ans ; 
        while(!ss.empty()) {
          ans+=ss.top() ,ss.pop();
        }
        reverse(ans.begin() , ans.end()) ;
        return ans; 
    }
};