#include <bits/stdc++.h>
using namespace std;
bool isValidatPosition(int value, int row, int col, vector<vector<int>> &board);




vector<vector<int>> solveSudoku(vector<vector<int>> board) {
	// Write your code here.
	if (isValidatPosition(3, 0, 8, board)) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
	return {};
}

bool isValidatPosition(int value, int row, int col, vector<vector<int>> &board) {
	bool rowIsValid = find(board[row].begin(), board[row].end(), value) == board[row].end();
	bool colIsValid = true;
	for (auto arr : board) {
		if (arr[col] == value) {
			colIsValid = false;
			break;
		}
	}
	if (!rowIsValid || !colIsValid) {
		return false;
	}

	int subgridrow = row / 3 * 3;
	int subgridcolumn = col / 3 * 3;
	cout << subgridrow << subgridcolumn;
	for (int i = subgridrow; i < subgridrow + 3; i++) {
		for (int j = subgridcolumn; j < subgridcolumn + 3; j++) {
			// if (board[i][j] == value) {
			// 	return false;
			// }

			cout << i << j << endl;
		}
	}
	return true;
}

int main() {
	vector<vector<int>> board = {
		{7, 8, 0, 4, 0, 0, 1, 2, 0},
		{6, 0, 0, 0, 7, 5, 0, 0, 9},
		{0, 0, 0, 6, 0, 1, 0, 7, 8},
		{0, 0, 7, 0, 4, 0, 2, 6, 0},
		{0, 0, 1, 0, 5, 0, 9, 3, 0},
		{9, 0, 4, 0, 6, 0, 0, 0, 5},
		{0, 7, 0, 3, 0, 0, 0, 1, 2},
		{1, 2, 0, 0, 0, 7, 4, 0, 0},
		{0, 4, 9, 2, 0, 6, 0, 0, 7}
	};

	solveSudoku(board);
}
