class Solution {
public:
    int binaryGap(int n) {
        bitset<32> binary(n); 
        string binaryStr = binary.to_string();

        int maxDistance = 0;
        int previousIndex = -1;

        for (size_t i = 0; i < binaryStr.length(); ++i) {
            if (binaryStr[i] == '1') {
                if (previousIndex != -1) {
                    int distance = i - previousIndex;
                    maxDistance = std::max(maxDistance, distance);
                }
                previousIndex = i;
            }
        }

        return maxDistance;    
    }

};