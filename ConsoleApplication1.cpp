#include <iostream>
using namespace std;
int main()
{

	int size1, size2,finalRow,finalCol,firstRow,firstCol;
	int i = 0, j = 0, row, col , amount;
	char  board[50][50], command;
	int bonus[50][50], totalGain = 0, flag = 0;
	int totalBonus = 0;
	cin >> size1 >> size2;
	//cout << size1 << "  " << size2<<endl;
	for (i = 0; i < size1; i++) {
		for (j = 0; j < size2; j++) {
			if (i == 0 ) {
				board[i][j] = '*';
			}
			else if (i == size1 - 1) {
				board[i][j] = '*';
			}
			else if (j == 0 ) {
				board[i][j] = '*';
			}
			else if ( j == size2 - 1) {
				board[i][j] = '*';
			}
			else {
				board[i][j] = ' ';
			}
		}
	}
	for (i = 0; i < size1; i++) {
		for (j = 0; j < size2; j++) {
			bonus[i][j] = 0;
		}
	}


	while (1) {
		cin >> command;
		if (command == 'e') {
			cin >> command;
			cin >> command;
			break;
		}
		else if (command == '$') {
			cin >> row >> col >> amount;
			board[row][col] = '$';
			bonus[row][col] = amount;
		}
		else if (command == 's') {
			cin >> row >> col;
			firstRow = row;
			firstCol = col;
			board[row][col] = '0';
		}
		else if (command == 'f') {
			cin >> row >> col;
			finalRow = row;
			finalCol = col;
		}
		else if (command == 'b') {
			cin >> row >> col;
			board[row][col] = '*';
		}
		else if (command == 'X') {
			cin >> row >> col;
			board[row][col] = 'X';
		}
	}

	//board appearance
	for (i = 0; i < size1; i++) {
		for (j = 0; j < size2; j++) {
			cout<<board[i][j];
		}
		cout << endl;
	}
	row = firstRow;
	col = firstCol;

	while (1) {

		cin >> command;
		if (command == ' ')
			break;
		else if (command == 'u'){
			if (board[row-1][col] == '$') {
				board[row][col] = ' ';
				board[row-1][col] = '0';
				totalBonus += 1;
				cout << "YOU GOT " << bonus[row-1][col] << "$." << endl;
			}
			else if (board[row - 1][col] == board[finalRow][finalCol]) {
				cout << "CONGRATS! YOU GOT " << totalBonus << " BONUS :)\n";
				board[row - 1][col] = '0';
				board[row][col] = ' ';
				flag = 1;
				break;
			}
			else if (board[row - 1][col] == '*') {
				cout << "INVALID MOVE. TRY ANOTHER DIRECTION!" << endl;
			}
			else if (board[row - 1][col] == 'X') {
				cout << "YOU MET WITH THE ENEMY AND LOST THE GAME : (\nGAME IS OVER!\n";
				break;
			}
			row = row - 1;
		}
		else if (command == 'd') {
			if (board[row + 1][col] == '$') {
				board[row][col] = ' ';
				board[row + 1][col] = '0';
				totalBonus += 1;
				cout << "YOU GOT " << bonus[row+1][col] << "$." << endl;
			}
			else if (board[row - 1][col] == board[finalRow][finalCol]) {
				cout << "CONGRATS! YOU GOT " << totalBonus << " BONUS :)\n";
				board[row + 1][col] = '0';
				board[row][col] = ' ';
				flag = 1;
				break;
			}
			else if (board[row + 1][col] == '*') {
				cout << "INVALID MOVE. TRY ANOTHER DIRECTION!" << endl;
			}
			else if (board[row + 1][col] == 'X') {
				cout << "YOU MET WITH THE ENEMY AND LOST THE GAME : (\nGAME IS OVER!\n";
				break;
			}
			row = row + 1;
		}
		else if (command == 'r') {
			if (board[row][col + 1] == '$') {
				board[row][col] = ' ';
				board[row][col + 1] = '0';
				totalBonus += 1;
				cout << "YOU GOT " << bonus[row][col+1] << "$." << endl;
			}
			else if (board[row][col + 1] == board[finalRow][finalCol]) {
				cout << "CONGRATS! YOU GOT "<<bonus[row][col+1] <<" BONUS :)\n";
				board[row][col + 1] = '0';
				board[row][col] = ' ';
				flag = 1;
				break;
			}
			else if (board[row][col + 1] == '*') {
				cout << "INVALID MOVE. TRY ANOTHER DIRECTION!" << endl;
			}
			else if (board[row][col + 1] == 'X') {
				cout << "YOU MET WITH THE ENEMY AND LOST THE GAME : (\nGAME IS OVER!\n";
				break;
			}
			col = col + 1;
		}
		else if (command == 'l') {

			if (board[row][col - 1] == '$') {
				board[row][col] = ' ';
				board[row][col - 1] = '0';
				totalBonus += 1;
				cout << "YOU GOT " << bonus[row][col-1] << "$."<<endl;
			}
			else if (board[row][col - 1] == board[finalRow][finalCol]) {
				cout << "CONGRATS! YOU GOT " << totalBonus << " BONUS :)\n";
				board[row][col - 1] = '0';
				board[row][col] = ' ';
				flag = 1;
				break;
			}
			else if (board[row][col - 1] == '*') {
				cout << "INVALID MOVE. TRY ANOTHER DIRECTION!" << endl;
			}
			else if (board[row][col - 1] == 'X') {
				cout << "YOU MET WITH THE ENEMY AND LOST THE GAME : (\nGAME IS OVER!\n";
				break;
			}
			col = col - 1;
		}
		for (i = 0; i < size1; i++) {
			for (j = 0; j < size2; j++) {
				cout << board[i][j];
			}
			cout << endl;
		}
	}
	if (flag == 0)
		cout << "YOU COULD NOT REACH THE FINAL POSITION : (\nGAME IS OVER!\n";

	return 0;
}
