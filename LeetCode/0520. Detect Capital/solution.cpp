/**
 * 550 / 550 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6 MB 
 */
class Solution {
public:
    bool detectCapitalUse(string word) {    
        int type = word[0] >= 'a' ? 0 : 1;
        if (type && word.size() > 1 && word[1] >= 'a') type = 0;
        if (type) {
            for (int i = 1; i < word.size(); i++) {
                if (word[i] >= 'a') return false;
            }
        } else {
            for (int i = 1; i < word.size(); i++) {
                if (word[i] < 'a') return false;
            }
        }  
        return true;
    }
};
