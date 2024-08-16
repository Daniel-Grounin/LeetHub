class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); ++i) {
            // Update prefix while it is not a prefix of strs[i]
            while (strs[i].find(prefix) != 0) {
                // Reduce the prefix length by one character from the end
                prefix = prefix.substr(0, prefix.length() - 1);
                
                // If no common prefix is found
                if (prefix.empty()) {
                    return "";
                }
            }
        }
        
        return prefix;
    }
};