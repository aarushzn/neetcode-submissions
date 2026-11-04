class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        int freq[26] = {0};
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            int index = ch - 'a';
            freq[index]++;
        }
        for(int i = 0; i < t.length(); i++){
            char ch = t[i];
            int index = ch - 'a';
            freq[index]--;

            if(freq[index] < 0){
                return false;
            }
        }
        return true;
    }
};
