class Solution {
public:
    int minMoves(int target, int maxDoubles) {
       int count = 0;
        // 1 + 1 + 1 + 1 + 1
       while(target!=1){
           
           if(maxDoubles==0){
               return count+target-1;
           }
           
           if(target%2!=0){ 
               target--;
               count++;
           }
           else{
               target = target/2;
               maxDoubles--;
               count++;
           }
           
       } 
        
        return count;
        
       
        
    }
};