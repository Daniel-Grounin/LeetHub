class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> s_char_count;
        map<char, int> t_char_count;
        for(char c : s){
            if(c != ' '){
                s_char_count[c]++;
            }
        }
        for(char c : t){
            if(c != ' '){
                t_char_count[c]++;
            }
        }

        for(const auto& pair : s_char_count){
            cout << "char: " << pair.first << " count: " << pair.second << endl;
        }
        
        return s_char_count == t_char_count;
    }
};