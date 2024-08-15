class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0; 
        for (int bill : bills) {
            if (bill == 5) {
                five++;  
            } else if (bill == 10) {
                if (five == 0) {
                    return false; 
                }
                five--; 
                ten++; 

            } else {  // bill == 20
                if (ten > 0 && five > 0) {  // Prefer to give one $10 and one $5 as change
                    ten--;
                    five--;
                } else if (five >= 3) {  // Otherwise, give three $5 bills as change
                    five -= 3;
                } else {
                    return false;  // Cannot give the correct change
                }
            }
        }
        return true; 
    }
};