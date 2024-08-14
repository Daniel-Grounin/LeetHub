class Solution {
public:
    int arrangeCoins(int n) {
        int completeRows = 0;
        int row = 1;

        while (n >= row) {
            n -= row;
            completeRows++;
            row++;
        }

        return completeRows;
    }
};