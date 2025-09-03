#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checkWin(char boardcell[]) {
    
    if (boardcell[1] == boardcell[2] && boardcell[2] == boardcell[3]) return 1;
    if (boardcell[4] == boardcell[5] && boardcell[5] == boardcell[6]) return 1;
    if (boardcell[7] == boardcell[8] && boardcell[8] == boardcell[9]) return 1;
    
    if (boardcell[1] == boardcell[4] && boardcell[4] == boardcell[7]) return 1;
    if (boardcell[2] == boardcell[5] && boardcell[5] == boardcell[8]) return 1;
    if (boardcell[3] == boardcell[6] && boardcell[6] == boardcell[9]) return 1;

    if (boardcell[1] == boardcell[5] && boardcell[5] == boardcell[9]) return 1;
    if (boardcell[3] == boardcell[5] && boardcell[5] == boardcell[7]) return 1;

    return 0;
}

int main(){

    printf("\nX or O: ");    
    
    char player;
    
    while(1){
        scanf("%c", &player);
        
        if(player == 'x'|| player == 'X'){
                printf(" You are X \n");
                break;
            }
            else if (player == 'o'|| player == 'O'){
                printf("You are O \n");
                break;
            }
            else{
                printf("Invalid input");
            }
    }
            
    char computer;
    while(1){
        if(player == 'x'|| player == 'X'){
            computer = 'O';
            printf("\nOpponent is O \n");
            break;
        }
                else if(player == 'o'|| player == 'O'){
                    computer = 'X';
                    printf("\nOpponent is X \n");
                    break;
                }
                else{
                    printf("Invalid input");
                }
        
    }

            printf("Welcome to TicTacToe Console\n");
        
            char boardcell [10] = {'0','1','2','3','4','5','6','7','8','9'};
            char currentplayer = player;

            printf("\n");
            printf(" %c   |   %c  |   %c \n", boardcell[1], boardcell[2], boardcell[3]);
            printf("-----|------|----- \n");           
            printf(" %c   |   %c  |   %c \n", boardcell[4], boardcell[5], boardcell[6]);
            printf("-----|------|----- \n");            
            printf(" %c   |   %c  |   %c \n", boardcell[7], boardcell[8], boardcell[9]);
            
           
          char input;             

        for (int count = 1; count > 0; count++){

            if(count % 2 != 0){
                 currentplayer = 'X';
            }
            else{
                 currentplayer = 'O';
            }

            printf("\nPick a cell [1 - 9]:");
            scanf("\n%c", &input);

            
          int cell = input - '0';  
          
          if (cell >= 1 && cell <= 9) {
              if (boardcell[cell] >= '1' && boardcell[cell] <= '9') {
                  boardcell[cell] = currentplayer;                
                }
                else {
                    printf("This cell is already occupied! Try again.\n");
                }
                }
                else {
                     printf("Invalid cell number entered.\n");
            }
            
            printf("\n");
            printf(" %c   |   %c  |   %c \n", boardcell[1], boardcell[2], boardcell[3]);
            printf("-----|------|----- \n");           
            printf(" %c   |   %c  |   %c \n", boardcell[4], boardcell[5], boardcell[6]);
            printf("-----|------|----- \n");            
            printf(" %c   |   %c  |   %c \n", boardcell[7], boardcell[8], boardcell[9]);

            if (checkWin(boardcell) == 1) {
            printf("\nPlayer %c wins!", currentplayer);
            break;  
            }
            
            if (count == 9) {
            printf("\nIt's a tie!");
            break;
            }
    }
                              
                                                          
            
return 0;  
}

 