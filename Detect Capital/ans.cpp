class Solution {
public:

    bool checkCapAll(string word){
        for(int i=0; i<word.size(); i++){
            if(isupper(word[i])) continue;
            else return false;
        }
        return true;
    }


     bool checkSmallAll(string word){
        for(int i=0; i<word.size(); i++){
            if(islower(word[i])) continue;
            else return false;
        }
        return true;
    }


    bool detectCapitalUse(string word) {
       string temp = word;
       if(isupper(word[0])){
           temp.erase(0, 1);
       }

       if(checkCapAll(word) || checkSmallAll(word) || checkSmallAll(temp)){
           return true;
       }return false;

    }
};
