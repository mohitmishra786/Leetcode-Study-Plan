class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        for(int i = 0 ; i <= s.length() ; ++i){
            if(i == s.length() or s[i] == ' '){
                reverse(&s[start] , &s[i]);
                start = i + 1;
            }
        }
        
        return s;
    }
};
