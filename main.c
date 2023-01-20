#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void order_pieces(char sea[8][8]){
        int i,j;
        for(i=0;i<8;i++){
                for(j=0;j<8;j++){
                    if(i*j%3==1)
                        sea[i][j] = ' '; // Defining empty slots.
                    else 
                        sea[i][j] = 'S'; // Defining full ones.
                }
        }
}

void print_sea(char sea[8][8]){
    int i,j;
    for(i=0;i<8;i++){
        printf("%d   ", i);
        for(j=0;j<8;j++){
            printf("[%c]\t", sea[i][j]);
            if(j==7)
                printf("\n\n");
        }
    }
}

void print_point(char sea[8][8], int a, int b){
    sea[a][b] = 'X';
}

void print_legal_list(char sea[8][8], int c, int d){
    int legal_moves[3][3], i, j;
    for(i=-1;i<2;i++){
        for(j=-1;j<2;j++){
            if(j==0 && i==0){
                legal_moves[1][1] = 1;
            } else{
                if(sea[c+i][d+j] == ' '){
                    legal_moves[1-i*-1][1-j*-1] = 1;
                } else{
                    legal_moves[1-i*-1][1-j*-1] = 0;
                }
            }
        }
    }

    printf("\n\t===LEGAL MOVES===\n");

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("[ %d ]\t", legal_moves[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }
}

int main(legal_moves) {
    char sea[8][8];
    int x = 0; // You can change the spot
    int y = 0; // with x and y.
    order_pieces(sea);
    print_point(sea, x, y);
    print_sea(sea);
    print_legal_list(sea, x, y);
    return 0;
}
