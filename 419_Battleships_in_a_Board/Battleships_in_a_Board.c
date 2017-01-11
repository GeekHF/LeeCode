int countBattleships(char** board, int boardRowSize, int boardColSize) {
    int count = 0;
    for(int i = 0; i < boardRowSize; i++){
        for(int j = 0; j < boardColSize; j++){
            if(board[i][j] == 'X' && ((i == 0)||(board[i-1][j] =='.')) && ((j == 0)||(board[i][j-1] == '.')) ) count++;
        }
    }
    return count;
}