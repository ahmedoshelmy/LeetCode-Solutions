class Solution {
public:
    bool winnerOfGame(string colors) {
     int n = colors.size() ;
        int a = 0 , b = 0 ; 
     for(int i = 0 ; i<n;i++){
         int j = i ; 
         while(j<n && colors[i] == colors[j]){
             j++; 
         }
         if(colors[i] == 'A') a+= max(0 , (j-i)-2) ; 
         else b+= max(0 , (j-i) -2) ;
         i = j-1; 
     }
        return a && a > b ; 
    }
};