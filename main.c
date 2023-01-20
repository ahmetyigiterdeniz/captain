#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void order_pieces(char sea[8][8]){
        int i,j;
        for(i=0;i<8;i++){
                for(j=0;j<8;j++){
                    if(i*j%3==1)
                        sea[i][j] = ' ';
                    else 
                        sea[i][j] = 'G';
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
    char* legal_moves[3][3];
    int e,f,g,h;
    for(g=0; g<3; g++){
        for(h=0; h<3; h++){
            for(e=-1; e<2; e++){
                for(f=-1; f<2; f++){
                    if(sea[c+e][d+f]==' '){
                        legal_moves[g][h] = "%d %d", c+e, d+f;
                    }
                }
            }
        }
    }
    for(g=0; g<3; g++)
        for(h=0; h<3; h++)
            printf("%s", legal_moves[g][h]);
}

int main(int i, int j) {
    char sea[8][8];
    order_pieces(sea);
    print_point(sea, 0, 0);
    print_sea(sea);
    print_legal_list(sea, 3, 2);
    return 0;
}
