#include <stdio.h>
#include <stdbool.h>
#define rows 8
#define cols 8

void tablero (char board[rows][cols]){
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            if (i<3 && (i+j)%2!=0){
                board[i][j]='x';
            }else if (i>4 && (i+j)%2!=0){
                board[i][j]='o';
            }else{
                board[i][j]='.';
            }
        }
    }

    printf ("\n\t     Tablero\n");
    printf ("==================================\n ");
    for (int i=1;i<=rows;i++){
        printf ("   %d",i);
    }
    for (int i=0;i<rows;i++){
        printf ("\n%d   ",i+1);
        for (int j=0;j<cols;j++){
            printf ("%c   ",board[i][j]);
        }
    }
}
bool is_winner(char board[rows][cols], char player){
    int cont=0;
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            if (board[i][j]!=player-32 && board[i][j]!=player && board[i][j]!='.'){
                return false;
            }
        }
    }
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            if (board[i][j]=='.') {
                cont++;
            }
        }
    }
    if (cont==8*8){
        return false;
    }else{
        return true;
    }

}

int main() {
    char board[rows][cols], player1='x',player2='o',player='x';
    int i,j;

    printf("\nJugador 1: %c\t\tJugador 2: %c\n",player1,player2);
    tablero(board);

    printf("\n\n");
    while (is_winner(board,player)==false){
        printf ("Mueve %c a (0-0):",player);
        scanf ("%d-%d",&i,&j);
    }
    if (is_winner(board,player)==true){
        printf ("\n%c es el ganador",player);
    }
    printf("\n");
    return 0;
}
