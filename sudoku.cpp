#include<iostream>
#include<vector>

using namespace std;


vector<vector<int>> sudokuboard = {
    {0, 0, 6, 5, 0, 8, 4, 0, 0},
    {5, 2, 0, 0, 0, 1, 0, 0, 0},
    {0, 7, 8, 0, 0, 0, 0, 0, 1},
    {0, 0, 4, 0, 1, 0, 0, 8, 0},
    {9, 0, 0, 8, 2, 3, 0, 0, 5},
    {0, 5, 0, 0, 9, 0, 6, 0, 0},
    {1, 3, 0, 0, 0, 0, 2, 5, 0},
    {0, 0, 0, 0, 0, 0, 0, 7, 4},
    {0, 0, 5, 2, 0, 6, 3, 0, 0}};

vector<int> countZeroRow(){
    vector<int> count = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(sudokuboard[i][j] == 0){
                count[i]++;
            }
        }
    }
    return count;
}

vector<int> countZeroCol(){
    vector<int> count = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(sudokuboard[j][i] == 0){
                count[i]++;
            }
        }
    }
    return count;
}

vector<int> countZeroSquare(){
    int counter = 0;
    vector<int> count = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    for(int i = 0; i < 9; i+=3){
        for(int j = 0; j < 9; j+=3){
            for(int k = i; k < i + 3; k++){
                for(int l = j; l < j + 3; l++){
                    if(sudokuboard[k][l] == 0){
                        count[counter]++;
                    }
                }
            }
            counter++;
        }
    }
    return count;
}

void chooseStartPoint(){

}

int main() {
    chooseStartPoint();
    countZeroRow();
    countZeroCol();
    countZeroSquare();
    return 0;
}