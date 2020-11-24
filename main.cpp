#include <iostream>
#include <array>

using namespace std;
using boardRef = array<char,9>&;
using constBoardRef = const array<char,9>&;

void init(boardRef board);
void displayBoard(constBoardRef board);
int makeMove(int slot, char player);
void changePlayer(char& currentPlayer);
void game(boardRef board);


int main()
{
	array<char,9> board;
	char currentPlayer;  //X,O
	init(board);
	game(board);
	return 0;
}

void init(boardRef board){
	board = {'1','2','3','4','5','6','7','8','9'};
	cout << "Tic Tac Toe Console Application" << endl;
	displayBoard(board);
	cout << "Two players make move in turn by entering slot number (1-9)" << endl;
	cout << "Which player will make the first move (X,O) ?" << endl;
}

void displayBoard(constBoardRef board){
	cout << " " << board[0] << " | " << board[1] << " | " << board[2]  << endl;
	cout << "-----------" << endl;
	cout << " " << board[3] << " | " << board[4] << " | " << board[5]  << endl;
	cout << "-----------" << endl;
	cout << " " << board[6] << " | " << board[7] << " | " << board[8]  << endl;
}

int makeMove(char player){

	return 0;
}

void changePlayer(char& currentPlayer){


}

void game(boardRef board){

}

