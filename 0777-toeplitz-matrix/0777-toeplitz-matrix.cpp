class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
	if (matrix.empty()) return false;

	// Loop through all rows except the last one
	for (int i = 0; i < matrix.size() - 1; ++i) {
		// Loop through all columns except the last one
		for (int j = 0; j < matrix[0].size() - 1; ++j) {
			// Check if the current element is equal to the diagonal element
			if (matrix[i][j] != matrix[i + 1][j + 1]) {
				return false;
			}
		}
	}

	return true; // All diagonals are consistent
}
};