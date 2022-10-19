void SafetyMaker(int& boardR, int& answer) {
    if (boardR == 0) {
        boardR = 2;
        answer--;
    }
}

int Programmers120866(vector<vector<int>> board) {
    int answer = board.size() * board.size();
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size();j++) {
            bool isTop = i - 1 < 0;
            bool isFLeft = j - 1 < 0;
            bool isBottom = i + 1 >= board.size();
            bool isERight = j + 1 >= board.size();
            if (board[i][j] == 1) {
                answer--;
                if (!isTop)SafetyMaker(board[i - 1][j], answer);
                if (!isTop && !isFLeft)SafetyMaker(board[i - 1][j - 1], answer);
                if (!isTop && !isERight)SafetyMaker(board[i - 1][j + 1], answer);
                if (!isFLeft)SafetyMaker(board[i][j - 1], answer);
                if (!isERight)SafetyMaker(board[i][j + 1], answer);
                if (!isBottom)SafetyMaker(board[i + 1][j], answer);
                if (!isBottom && !isFLeft)SafetyMaker(board[i + 1][j - 1], answer);
                if (!isBottom && !isERight)SafetyMaker(board[i + 1][j + 1], answer);
            }
        }
    }
    return answer;
}
