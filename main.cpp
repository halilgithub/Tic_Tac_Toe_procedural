#include <iostream>
#include <array>

using namespace std;

array<char,9> board;
char currentPlayer;  //X,O

void init();
void displayBoard();
int makeMove(int slot);
void changePlayer();
void game();


int main()
{
	init();
	game();
	return 0;
}

void init(){
	board = {'1','2','3','4','5','6','7','8','9'};
	cout << "Tic Tac Toe Console Application" << endl;
	displayBoard();
	cout << "Two players make move in turn by entering slot number (1-9)" << endl;
	cout << "Which player will make the first move (X,O) ?" << endl;
}

void displayBoard(){
	cout << " " << board[0] << " | " << board[1] << " | " << board[2]  << endl;
	cout << "-----------" << endl;
	cout << " " << board[3] << " | " << board[4] << " | " << board[5]  << endl;
	cout << "-----------" << endl;
	cout << " " << board[6] << " | " << board[7] << " | " << board[8]  << endl;
}

int makeMove(int slot){

	return 0;
}

void changePlayer(){


}

void game(){

}

