//#include <stdio.h>
//#include <stdbool.h>
//
//#define MAX_COLS 7
//
//
//// function declarations
//
//void print_board(char board[][MAX_COLS], int rows, int cols);
//
//
//int min(int num1, int num2);
//
//int get_board_data(char board[][MAX_COLS],
//                   int* row_size_ptr, int* col_size_ptr, int* k_ptr);
//
//
//void get_player_move(char board[][MAX_COLS],
//                     char name, int row_size, int col_size);
//
//bool insert_in_col(char board[][MAX_COLS],
//                   char name, int wanted_col, int row_size);
//
//bool check_diagonal(char board[][MAX_COLS],
//                    int col_size,  int k, char name);
//
//bool check_row_col(char board[][MAX_COLS]
//                   , int row_size, int col_size,  int k, char name);
//
//bool game_over(char board[][MAX_COLS], int row_size,
//               int col_size,  int k, char name, int move_counter);
//void print_get_row();
//
//void print_get_column();
//
//void print_error_number_of_rows();
//
//void print_error_number_of_cols();
//
//void print_get_k();
//
//void print_error_k(int correct_k);
//
//void print_player_enter_col(char player_symbol);
//
//void print_invalid_input();
//
//void print_column_full();
//
//void print_draw_msg();
//
//void print_win_msg(char player_symbol, int turn_num);
//
//
//
//int main() {
//
////    char board[MAX_COLS][MAX_COLS];
////    //fill array with spaces
////    for (int i =0; i< MAX_COLS; i++){
////        for (int j =0; j< MAX_COLS; j++){
////            board[i][j] = ' ';
////        }
////    }
////    //init variables and pointers
////    int row_size, col_size, k, move_counter = 0;
////    int *row_size_ptr = &row_size, *col_size_ptr = &col_size, *k_ptr = &k;
////
////    // get the board data from the user via the pointers
////    if (get_board_data(board, row_size_ptr, col_size_ptr, k_ptr) == 1){
////        return 1;
////    }
////    //game flow
////    while (true){
////        get_player_move(board, 'Y', row_size, col_size);
////        move_counter++;
////        //check if it is a win, draw or none
////        if (game_over(board, row_size, col_size, k, 'Y', move_counter)){
////            return 0;
////        }
////        get_player_move(board, 'X', row_size, col_size);
////        move_counter++;
////        if(game_over(board, row_size, col_size, k, 'X', move_counter)){
////            return 0;
////        }
////    }
////
////}
//
//
//
//
//// function implementations
//
//void get_player_move(char board[][MAX_COLS],
//                     char name, int row_size, int col_size){
//    int wanted_col = col_size + 1;
//    //make sure input is valid
//    while (wanted_col >= col_size) {
//        print_player_enter_col(name);
//        scanf(" %d", &wanted_col);
//        if (wanted_col >= col_size) {
//            print_invalid_input();
//        }
//
//    }
//    //if col is full insert will fail,
//    // if insert doesnt fail but new input is bad it will fail also
//    while (insert_in_col(board, name, wanted_col, row_size) == false
//                                            || wanted_col >= col_size) {
//        print_player_enter_col(name);
//        scanf(" %d", &wanted_col);
//        if (wanted_col >= col_size) {
//            print_invalid_input();
//        }
//
//    }
//    print_board(board, row_size, col_size);
//
//}
//
//
//int get_board_data(char board[][MAX_COLS], int* row_size_ptr,
//                   int* col_size_ptr, int* k_ptr){
//    print_get_row();
//    scanf(" %d", row_size_ptr);
//    if (*row_size_ptr > MAX_COLS){
//        print_error_number_of_rows();
//        return 1;
//    }
//    print_get_column();
//    scanf(" %d", col_size_ptr);
//    if (*col_size_ptr > MAX_COLS){
//        print_error_number_of_cols();
//        return 1;
//    }
//    print_get_k();
//    scanf(" %d", k_ptr);
//    if (*k_ptr <= 0) {
//        *k_ptr = min(*col_size_ptr, *row_size_ptr);
//        print_error_k(*k_ptr);
//    }
//    print_board(board, *row_size_ptr, *col_size_ptr);
//    return 0;
//}
//
//bool insert_in_col(char board[][MAX_COLS],
//                   char name, int wanted_col, int row_size){
//    // if array entry is not one of the names,
//    // enter in wanted col where empty(start from bottom)
//    for (int row=row_size-1; row >= 0; row--) {
//        if (board[row][wanted_col] != 'Y' && board[row][wanted_col] != 'X') {
//            board[row][wanted_col] = name;
//            return true;
//        }
//    }
//    //if condition always fails it is full
//    print_column_full();
//    return false;
//    }
//
//bool check_row_col(char board[][MAX_COLS], int row_size,
//                   int col_size,  int k, char name) {
//    if(k == 1){
//        return true;
//    }
//    // check in row
//    for (int row = 0; row < row_size; row++) {
//        int k_counter = 1;
//        for (int col = 0; col < col_size - 1; col++) {
//            if(board[row][col] == board[row][col+1] && board[row][col] == name){
//                k_counter++;
//                if (k_counter == k) {
//                    return true;
//                }
//            }
//        }
//    }
//    // check in col
//    for (int col = 0; col < col_size; col++) {
//        int k_counter = 1;
//        for (int row = 0; row < row_size - 1; row++) {
//            if(board[row][col] == board[row+1][col] && board[row][col] == name){
//                k_counter++;
//                if (k_counter == k) {
//                    return true;
//                }
//            }
//        }
//    }
//    return false;
//}
//
//bool check_diagonal(char board[][MAX_COLS], int col_size,int k, char name){
//    // left to right
//    int k_counter = 1;
//    for(int row = 0; row < k-1; row++){
//        if(board[row][row] == board[row+1][row+1] && board[row][row] == name){
//            k_counter++;
//            if (k_counter == k) {
//                return true;
//            }
//        }
//    }
//    //right to left
//    k_counter = 1;
//    for(int row = 0; row < k-1; row++){
//        if (board[row][col_size-row-1] == board[row+1][col_size-row-2]
//        && board[row][col_size-row-1] == name){
//            k_counter++;
//            if (k_counter == k) {
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//bool game_over(char board[][MAX_COLS], int row_size,
//               int col_size, int k, char name, int move_counter) {
//    if(check_diagonal(board, col_size, k, name) ||
//    check_row_col(board, row_size, col_size, k, name)){
//
//        print_win_msg(name, move_counter);
//        return true;
//    }
//    // check if board is full
//    for (int col = 0; col < col_size; col++){
//        if (board[0][col] != 'Y' && board[0][col] != 'X'){
//            return false;
//        }
//    }
//    print_draw_msg();
//    return true;
//}
//
//int min(int num1, int num2){
//    if (num1 < num2){
//        return  num1;
//    }
//    return num2;
//}
//
//
//void print_get_row(){
//    printf("Number of rows:\n");
//}
//
//void print_get_column(){
//    printf("Number of columns:\n");
//}
//
//void print_error_number_of_rows(){
//    printf("Error: Number of rows must be smaller than 8\n");
//}
//
//void print_error_number_of_cols(){
//    printf("Error: Number of columns must be smaller than 8\n");
//}
//
//void print_get_k(){
//    printf("Please enter k:\n");
//}
//
//void print_error_k(int correct_k){
//    printf("Error: k must be greater than zero, setting k to %d\n", correct_k);
//}
//
//void print_player_enter_col(char player_symbol){
//    printf("Player %c, enter col:\n", player_symbol);
//}
//
//void print_invalid_input(){
//    printf("Invalid input, try again\n");
//}
//
//void print_column_full(){
//    printf("Column is full, try again\n");
//}
//
//void print_board(char board[][MAX_COLS], int rows, int cols) {
//    //print the board in the following format:
//    printf("\n");
//    for (int i = 0; i < rows; i++) {
//        printf("|");
//        for (int j = 0; j < cols; j++) {
//            printf("%c|", board[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//void print_draw_msg() {
//    printf("DRAW!\n");
//}
//
//void print_win_msg(char player_symbol, int turn_num) {
//    printf("Player %c won in %d moves!\n", player_symbol, turn_num);
//}
//
