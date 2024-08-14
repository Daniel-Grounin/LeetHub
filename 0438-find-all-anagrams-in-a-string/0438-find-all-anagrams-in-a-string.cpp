class Solution {
public:
    std::vector<int> findAnagrams(std::string s, std::string p) {
        std::map<char, int> p_anagram_dict;
        std::vector<int> v1;

        for (int i = 0; i < p.size(); i++) {
            p_anagram_dict[p[i]]++;
        }

        std::map<char, int> temp_anagram_dict;
        int window_size = p.size();
        for (int i = 0; i < window_size; i++) {
            temp_anagram_dict[s[i]]++;
        }

        if (temp_anagram_dict == p_anagram_dict) {
            v1.push_back(0);
        }

        for (int i = window_size; i < s.size(); i++) {
            temp_anagram_dict[s[i]]++;

            char charToRemove = s[i - window_size];
            temp_anagram_dict[charToRemove]--;

            if (temp_anagram_dict[charToRemove] == 0) {
                temp_anagram_dict.erase(charToRemove);
            }

            if (temp_anagram_dict == p_anagram_dict) {
                v1.push_back(i - window_size + 1);
            }
        }

        return v1;
    }
};