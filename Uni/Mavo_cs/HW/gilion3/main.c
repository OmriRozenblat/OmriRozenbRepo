#include <stdio.h>
#include <stdbool.h>

#define MAX_COLS 7


// function declarations

void print_board(char board[][MAX_COLS], int rows, int cols);


int min(int num1, int num2);

void game_flow(char board[][MAX_COLS]);
int get_board_data(int* row_size_ptr, int* col_size_ptr, int* k_ptr );


void get_player_move(char board[][MAX_COLS], char name, int row_size, int col_size);
bool insert_in_col(char board[][MAX_COLS], char name, int wanted_col, int row_size);
bool check_diagonal(char board[][MAX_COLS], int col_size,  int k);
bool check_row_col(char board[][MAX_COLS], int row_size, int col_size,  int k);
bool game_over(char board[][MAX_COLS], int row_size, int col_size,  int k, char name, int move_counter);
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
    char board[MAX_COLS][MAX_COLS] = {{0}};
//    print_board(board, 3, 3);
    game_flow(board);
    printf("finished");
    // TODO: add your code here

    return 0;
}


// function implementations

// TODO: add your functions
void game_flow( char board[][MAX_COLS]){
    int is_game_over = false;
    int row_size, col_size, k, move_counter = 0;
    int *row_size_ptr = &row_size, *col_size_ptr = &col_size, *k_ptr = &k;
    get_board_data(row_size_ptr, col_size_ptr, k_ptr);
    do{
        get_player_move(board, 'Y', row_size, col_size);
        move_counter++;
        is_game_over = game_over(board, row_size, col_size, k, 'Y', move_counter);
        print_board(board, 3, 3);
        get_player_move(board, 'X', row_size, col_size);
        is_game_over = game_over(board, row_size, col_size, k, 'X', move_counter);

        move_counter++;
        print_board(board, 3, 3);

    } while (!is_game_over);
    //

}

void get_player_move(char board[][MAX_COLS], char name, int row_size, int col_size) {
    int wanted_col = col_size + 1;
    while (wanted_col >= col_size) {
        print_player_enter_col(name);
        scanf(" %d", &wanted_col);
        if (wanted_col >= col_size) {
            print_invalid_input();
        }
    }
    while (insert_in_col(board, name, wanted_col, row_size) == false) {
        scanf(" %d", &wanted_col);

    }

}


int get_board_data(int* row_size_ptr, int* col_size_ptr, int* k_ptr){
    print_get_row();
    scanf(" %d", row_size_ptr);
    if (*row_size_ptr > MAX_COLS){
        print_error_number_of_rows();
        return 1;
    }
    print_get_column();
    scanf(" %d", col_size_ptr);
    if (*col_size_ptr > MAX_COLS){
        print_error_number_of_cols();
        return 1;
    }
    print_get_k();
    scanf(" %d", k_ptr);
    if (k_ptr <= 0) {
        *k_ptr = min(*col_size_ptr, *row_size_ptr);
        print_error_k(*k_ptr);
    }
    return 0;
}

bool insert_in_col(char board[][MAX_COLS], char name, int wanted_col, int row_size){
    for (int row=row_size-1; row >= 0; row--) {
        if (board[row][wanted_col] == 0) {
            board[row][wanted_col] = name;
            return true;
        }
    }
        print_column_full();
        print_player_enter_col(name);
        return false;
    }

bool check_row_col(char board[][MAX_COLS], int row_size, int col_size,  int k) {
    // check in rows
    int k_counter = 1;
    for (int row = 0; row < row_size; row++) {
        for (int col = 0; col < col_size - k + 1; col++) {
            if (board[row][col] == board[row][col + 1]) {
                k_counter++;
                if (k_counter == k) {
                    return true;
                }
            }
        }
    }
    // check in col
    k_counter = 1;
    for (int col = 0; col < col_size; col++) {
        for (int row = 0; row < row_size - k + 1; row++) {
            if (board[row][col] == board[row][col + 1]) {
                k_counter++;
                if (k_counter == k) {
                    return true;
                }

            }
        }
    }
    return false;
}

bool check_diagonal(char board[][MAX_COLS], int col_size,int k) {
    //left to right
    int k_counter =1;
    for(int row = 0; row<k-1; row++){
        if (board[row][row] == board[row+1][row+1]){
            k_counter++;
            if (k_counter == k) {
                return true;
            }

        }
    }
    //right to left
    k_counter = 1;
    for(int row = 0; row<k-1; row++){
        if (board[row][col_size-row-1] == board[row+1][col_size-row-2]){
            k_counter++;
            if (k_counter == k) {
                return true;
            }
        }
    }
    return false;
}

bool game_over(char board[][MAX_COLS], int row_size, int col_size, int k, char name, int move_counter) {
    if(check_diagonal(board, row_size, col_size, k) || check_row_col(board, row_size, col_size, k)){
        print_win_msg(name, move_counter);
        return true;
    }
    // check if boar is full
    for (int col = 0; col < col_size; col++){
        if (board[0][col] == 'Y' || board[0][col] == 'X'){
            print_draw_msg();
            return true;

        }
    }
    return false;
}
//bool game_over(char board[][MAX_COLS], int row_size, int col_size,  int k, int row_pos, int col_pos){
//    // we need to check is there is a draw or a win
//    //win
//    //check in row
//    int k_counter = 1;
//    for (int col = 0; col<col_size-1; col++){
//        if (board[row_pos][col] == board[row_pos][col+1]){
//            k_counter++;
//        }
//        if(k_counter==k){
//            return true;
//        }
//    }
//    //check in col
//    k_counter = 1;
//    for (int row = 0; row<row_size-1; row++){
//        if (board[col_pos][row] == board[col_pos][row+1]){
//            k_counter++;
//        }
//        if(k_counter==k){
//            return true;
//        }
//
//
//    }
//    //check in first diagonal
//    int temp_row_pos = row_pos;
//    int temp_col_pos = col_pos;
//    k_counter = 1;
//    while (temp_row_pos < row_size-1 && temp_col_pos < col_size-1){
//        temp_row_pos++;
//        temp_col_pos++;
//    }
//    while (temp_row_pos > row_size-1 && temp_col_pos > col_size-1){
//        if (board[temp_row_pos][temp_col_pos] == board[temp_row_pos+1][temp_col_pos+1]){
//            k_counter++;
//            if(k_counter==k){
//                return true;
//            }
//        }
//        temp_row_pos--;
//        temp_col_pos--;
//
//    }



//
//    //check in second diagonal
//    temp_row_pos = row_pos;
//    temp_col_pos = col_pos;
//    k_counter == 1;
//    while (temp_row_pos > row_size-1 && temp_col_pos > col_size-1){
//        temp_row_pos--;
//        temp_col_pos--;
//    }
//    while (temp_row_pos < row_size-1 && temp_col_pos < col_size-1){
//        if (board[temp_row_pos][temp_col_pos] == board[temp_row_pos-1][temp_col_pos-1]){
//            k_counter++;
//            if(k_counter==k){
//                return true;
//            }
//        }
//        temp_row_pos++;
//        temp_col_pos++;
//
//    }
//    return  false;
//}


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

