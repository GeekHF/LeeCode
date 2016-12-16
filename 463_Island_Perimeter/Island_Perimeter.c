int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
    int pm = 0;
    for(int i = 0; i < gridRowSize; i++){
        for(int j = 0; j < gridColSize; j ++){
            if(grid[i][j] == 1){
                int temp = 4;
                if(i > 0){
                    if(grid[i-1][j] == 1) temp--;
                }
                if(j > 0){
                    if(grid[i][j-1] == 1) temp--;
                }
                if(j+1< gridColSize){
                    if(grid[i][j+1] == 1) temp--;
                }
                if(i+1 < gridRowSize){
                    if(grid[i+1][j] == 1) temp--;
                }
                pm = pm + temp;
            }
        }
    }
    return pm;
}