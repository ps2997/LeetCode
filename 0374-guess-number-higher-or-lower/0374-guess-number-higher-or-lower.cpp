/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
         int max = n;
         int min = 1;
        
        
         while(true){
             int mid = (max-mid)/ 2 + min;
             int val = guess(mid);
             
             if(val==0){
                 return mid;
             }
             else if(val==-1){
                 max = mid-1;
             }else{
                 min = mid + 1;
             } 
             
         }
        
     
        
    }
};