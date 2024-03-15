#include <iostream>
#include <vector>
#include <stack>
#include <utility>

using namespace std;

using vvi = vector<vector<int> >;
using vi = vector<int>;

void print(vvi board)
{
	int count = 0;
	for (auto& row : board) {
		for (auto& el : row)
			if (el == 1)
				count++;
	}
	// Not valid solution
	if (count != board.size())
		return;

	// Print the matrix
	for (auto& row : board) {
		for (auto& el : row)
			cout << el << " ";
		cout << '\n';
	}
}

bool validate(vvi board, int i, int j)
{
	// validate rows
	for (int c = 1; c <= j; c++)
		if (board[i - 1][c - 1] == 1)
			return false;
	// validate columns
	for (int r = 1; r <= i; r++)
		if (board[r - 1][j - 1] == 1)
			return false;
	// validate diagonals to right up corner
	int c = j;
	int r = i;
	while (c != 0 and r != 0) {
		if (board[r - 1][c - 1] == 1)
			return false;
		r--;
		c--;
	}
	// validate diagonals to left up corner
	c = j;
	r = i;
	while (c != board.size() + 1 and r != 0) {
		if (board[r - 1][c - 1] == 1)
			return false;
		r--;
		c++;
	}
	return true;
}

int n_queen(int n)
{
	vvi board(n, vi(n));
	stack<pair<int, int> >
		queens_positions; // stores positions of added
						// queens
	int j = 1;
	int ans = -1;
	for (int i = 1; i <= board.size(); i++) {
		for (; j <= board.size(); j++) {
			if (validate(board, i, j)) { // check validity of cell
							// before adding the queen
				board[i - 1][j - 1] = 1;
				queens_positions.push(make_pair(i, j));
				break;
			}
		}
		j = 1;
		if (queens_positions.size()!= i) { // checks if a queen was placed in the
					// current row

			if (!queens_positions.empty()) {
				pair<int, int> Q_last= queens_positions.top(); // position of last added queen
				queens_positions.pop();

				// backtracking
				board[Q_last.first - 1][Q_last.second - 1] = 0;
				i = Q_last.first - 1; 
				j = Q_last.second + 1; 
			}
		}

		if (i == board.size()) {
			print(board);
			cout << "\n";
			ans++;

			if (!queens_positions.empty()) {
				pair<int, int> Q_last= queens_positions.top(); // position of last added queen
				queens_positions.pop();

				// backtracking
				board[Q_last.first - 1][Q_last.second - 1] = 0; 
				i = Q_last.first - 1; 
				j = Q_last.second + 1; 
			}
		}
	}
	return ans;
}

int main(){
    int N; //N > 3
    cin >> N;
	cout << "\n";

	for(int i=4; i <= N; i++){
		cout << n_queen(i) << "\n";
	}

    return 0;
}
