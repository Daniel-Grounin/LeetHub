class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> output = splitString(s, ' ');
        return output.back().size();

    }

    vector<string> splitString(const string& str, char delimiter) {
        vector<string> result;
        stringstream ss(str);
        string item;
        
        while (getline(ss, item, delimiter)) {
            if (!item.empty()) {
                result.push_back(item);
            }
        }
        
        return result;
    }
};