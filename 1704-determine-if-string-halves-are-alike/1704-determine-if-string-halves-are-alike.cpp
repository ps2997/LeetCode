class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int n = s.size();
        int half = n/2;
        int firstCount = 0, secondCount = 0;
        
        for(int i=0; i<half; i++){
            char ch = s[i];
            
            if( ch=='a' || ch == 'A'){
                firstCount++;
            }
            
            if( ch=='e' || ch == 'E'){
                firstCount++;
            }
            
            if( ch=='i' || ch == 'I'){
                firstCount++;
            }
            
            if( ch=='o' || ch == 'O'){
                firstCount++;
            }
            
            if( ch=='u' || ch == 'U'){
                firstCount++;
            }
            
        }
        
        
        
          for(int i=half; i<n; i++){
            char ch = s[i];
            
            if( ch=='a' || ch == 'A'){
                secondCount++;
            }
            
            if( ch=='e' || ch == 'E'){
                secondCount++;
            }
            
            if( ch=='i' || ch == 'I'){
                secondCount++;
            }
            
            if( ch=='o' || ch == 'O'){
                secondCount++;
            }
            
            if( ch=='u' || ch == 'U'){
                secondCount++;
            }
            
        }
        
        if(firstCount==secondCount){
            return true;
        }return false;
        
        
        
        
    }
};