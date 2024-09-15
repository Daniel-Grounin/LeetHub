class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1 {'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> row2 {'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> row3 {'z','x','c','v','b','n','m'};
        
        vector<string> validWords;

        for (const string& word : words) {
            int count1 = 0, count2 = 0, count3 = 0;
            for (char c : word) {
                char lowerC = tolower(c);
                if (row1.count(lowerC)) count1++;
                if (row2.count(lowerC)) count2++;
                if (row3.count(lowerC)) count3++;
            }
            if (count1 == word.size() || count2 == word.size() || count3 == word.size())
                validWords.push_back(word);
        }
        return validWords;
    }
};