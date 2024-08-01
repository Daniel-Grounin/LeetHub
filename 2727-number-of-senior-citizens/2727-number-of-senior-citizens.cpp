class Solution {
public:
    int countSeniors(std::vector<std::string>& details) {
        int count = 0;

        for (const auto& detail : details) {
            std::string age_str = detail.substr(11, 2); 
            int age = std::stoi(age_str); 

            if (age > 60) {
                ++count; 
            }
        }

        return count; 
    }
};