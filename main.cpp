#include <iostream>
#include <array>

using namespace std;

array<char,9> board;
char currentPlayer;  //X,O

void init();
bool inRange(unsigned low, unsigned high, unsigned x);
void displayBoard();
void changePlayer();
bool hasWon();
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
}

bool inRange(unsigned low, unsigned high, unsigned x)
{
    return  ((x-low) <= (high-low));
}

void displayBoard(){
	cout << " " << board[0] << " | " << board[1] << " | " << board[2]  << endl;
	cout << "-----------" << endl;
	cout << " " << board[3] << " | " << board[4] << " | " << board[5]  << endl;
	cout << "-----------" << endl;
	cout << " " << board[6] << " | " << board[7] << " | " << board[8]  << endl;
}

void changePlayer(){
    if (currentPlayer == 'X')
        currentPlayer = 'O';
    else
        currentPlayer = 'X';
}

bool hasWon(){
    // check rows
    if (board[0] != ' ' && board[0] == board[1] && board[1] == board[2]) return true;
    if (board[3] != ' ' && board[3] == board[4] && board[4] == board[5]) return true;
    if (board[6] != ' ' && board[6] == board[7] && board[7] == board[8]) return true;
    // check columns
    if (board[0] != ' ' && board[0] == board[3] && board[3] == board[6]) return true;
    if (board[1] != ' ' && board[1] == board[4] && board[4] == board[7]) return true;
    if (board[2] != ' ' && board[2] == board[5] && board[5] == board[8]) return true;
    //check diagonal
    if (board[0] != ' ' && board[0] == board[4] && board[4] == board[8]) return true;
    if (board[2] != ' ' && board[2] == board[4] && board[4] == board[6]) return true;
    return false;
}

void game(){
    board.fill(' ');
	char playerSelection;
    int move;

	while(1)
	{
        cout << "Which player will make the first move (X,O) ?" << endl;
        cin >> playerSelection;

	    if (playerSelection == 'X' || playerSelection == 'x'){
    		currentPlayer = 'X';
            break;
	    }
	    else if (playerSelection == 'O' || playerSelection == 'o'){
            currentPlayer = 'O';
            break;
        }
        else{
            cout << "Invalid Player ! Try Again." << endl;
            cin.clear();
            cin.ignore(256,'\n');
            continue;
        }

	}

    for (int i = 1; i <= 9; i++)
    {
        displayBoard();
        cout << "It is your turn " << currentPlayer << ". Please move (1-9):";
        cin >> move;
        if (cin.fail() || !inRange(1,9,move) || board[move-1] != ' '){
            cout << "Invalid move ! Try Again." << std::endl;
            cin.clear();
            cin.ignore(256,'\n');
            i--;
            continue;
        }
        board[move-1] = currentPlayer;
        if(hasWon()){
            displayBoard();
            cout << currentPlayer << " has Won !" << endl;
            cout << " The End";
            exit(0);
        }
        changePlayer();
    }

    displayBoard();
    cout << "It is a DRAW. Nobody won !";
}

