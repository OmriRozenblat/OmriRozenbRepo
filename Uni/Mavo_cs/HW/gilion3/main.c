#include <stdio.h>
#include <stdbool.h>

#define MAX_COLS 7


// function declarations

void print_board(char board[][MAX_COLS], int rows, int cols);


int min(int num1, int num2);

void game_flow(int* row, int* col, int* k);
int get_board_data(int* row_size, int* col_size, int* k );


void get_player_move(char board[][MAX_COLS], char name);

void print_get_row();

void print_get_column();

void print_error_number_of_rows();

void print_error_number_of_cols();

void print_get_k();

void print_error_k(int correct_k);

void print_player_enter_col(char player_symbol);

void print_invalid_input();

void print_column_full();

void print_draw_msg();

void print_win_msg(char player_symbol, int turn_num);



int main() {
    char board[MAX_COLS][MAX_COLS];
    get_player_move(board, 'Y');
    printf("finished");
    // TODO: add your code here

    return 0;
}


// function implementations

// TODO: add your functions
void game_flow(int* row, int* col, int* k){
//    get_player_move(*col, 'Y');

}

void get_player_move(char board[][MAX_COLS], char name){
    int wanted_col = MAX_COLS + 1;
    while (wanted_col > MAX_COLS){
        print_player_enter_col(name);
        scanf(" %d", &wanted_col);
        if (wanted_col > MAX_COLS){
            print_invalid_input();
    }
    char board_status = board[MAX_COLS-1][wanted_col];
    while (board_status == 'Y' || board_status == 'X'){
        print_column_full();
        print_player_enter_col(name);
        scanf(" %d", &wanted_col);}
    }
}


int get_board_data(int* row_size, int* col_size, int* k){
    print_get_row();
    scanf(" %d", row_size);
    print_get_column();
    scanf(" %d", col_size);
    if ((*row_size > MAX_COLS) || (*col_size > MAX_COLS)){
        if (*row_size > MAX_COLS){
            print_error_number_of_rows();
        } else {
            print_error_number_of_cols();}
        return 1;}
    print_get_k();
    scanf(" %d", k);
    if (k <= 0){
        *k = min(*col_size, *row_size);
        print_error_k(*k);
    }
}

int min(int num1, int num2){
    if (num1 < num2){
        return  num1;
    }
    return num2;
}


void print_get_row(){
    printf("Number of rows:\n");
}

void print_get_column(){
    printf("Number of columns:\n");
}

void print_error_number_of_rows(){
    printf("Error: Number of rows must be smaller than 8\n");
}

void print_error_number_of_cols(){
    printf("Error: Number of columns must be smaller than 8\n");
}

void print_get_k(){
    printf("Please enter k:\n");
}

void print_error_k(int correct_k){
    printf("Error: k must be greater than zero, setting k to %d\n", correct_k);
}

void print_player_enter_col(char player_symbol){
    printf("Player %c, enter col:\n", player_symbol);
}

void print_invalid_input(){
    printf("Invalid input, try again\n");
}

void print_column_full(){
    printf("Column is full, try again\n");
}

void print_board(char board[][MAX_COLS], int rows, int cols) {
    //print the board in the following format:
    printf("\n");
    for (int i = 0; i < rows; i++) {
        printf("|");
        for (int j = 0; j < cols; j++) {
            printf("%c|", board[i][j]);
        }
        printf("\n");
    }
}

void print_draw_msg() {
    printf("DRAW!\n");
}

void print_win_msg(char player_symbol, int turn_num) {
    printf("Player %c won in %d moves!\n", player_symbol, turn_num);
}

