#include <iostream>
using namespace std;
const int ROWS = 3;
const int COLS = 3;
enum class Player { NONE, X, O };

void initializeBoard(Player board[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            board[i][j] = Player::NONE;
        }
    }
}

void printBoard(const Player board[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            switch(board[i][j]) {
                case Player::X:
                    cout << " X ";
                    break;
                case Player::O:
                   cout << " O ";
                    break;
                case Player::NONE:
                    cout << " . ";
                    break;
            }
            if (j < COLS - 1)
                cout << "|";
        }
        if (i < ROWS - 1)
           cout << "\n---+---+---\n";
    }
     cout <<endl;
}

bool checkWin(const Player board[ROWS][COLS], Player player) {
    for (int i = 0; i < ROWS; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
    }

    for (int j = 0; j < COLS; ++j) {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
            return true;
    }

    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;

    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

bool isBoardFull(const Player board[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (board[i][j] == Player::NONE)
                return false;
        }
    }
    return true;
}

bool isValidMove(const Player board[ROWS][COLS], int row, int col) {
    return (row >= 0 && row < ROWS && col >= 0 && col < COLS && board[row][col] == Player::NONE);
}

void playGame(Player board[ROWS][COLS]) {
    Player currentPlayer = Player::X;
    int row, col;
    bool win = false;

    while (!win && !isBoardFull(board)) {
        cout << "Player " << (currentPlayer == Player::X ? "X" : "O") << "'s turn. Enter row and column (0-2): ";
        cin >> row >> col;

        if (isValidMove(board, row, col)) {
            board[row][col] = currentPlayer;
            printBoard(board);
            win = checkWin(board, currentPlayer);
            currentPlayer = (currentPlayer == Player::X) ? Player::O : Player::X;
        } else {
            cout << "Invalid move! Try again.\n";
        }
    }

    if (win) {
    cout << "Player " << (currentPlayer == Player::X ? "O" : "X") << " wins!\n";
    } else {
       cout << "It's a draw!\n";
    }
}

int main() {
    Player board[ROWS][COLS];

    initializeBoard(board);
    printBoard(board);
    playGame(board);
return 0;
}