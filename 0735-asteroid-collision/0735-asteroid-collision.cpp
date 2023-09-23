class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s; s.push(asteroids[0]); int n = asteroids.size();
        for(int i = 1 ; i < n ; i++){
            bool destroy = false;
            if(asteroids[i] < 0){
                while(!s.empty() && s.top() > 0){
                    if(abs(s.top()) < -asteroids[i]) s.pop() ;
                    else if(abs(s.top()) == -asteroids[i]) {
                        s.pop();
                        destroy = true ;
                        break;
                    }
                    else{
                        destroy = true;
                        break;
                    }
                }
            }
            if(!destroy)s.push(asteroids[i]) ;
        }
        n = s.size();
        vector<int> ans(n) ;
        while(n) ans[--n] = s.top() , s.pop() ;
        return ans;
    }
};