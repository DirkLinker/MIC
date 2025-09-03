#include <stdio.h>

void printHollowSquare(int height, int width);
void printFloydsTriangle(int size);

// Main function: entry point for execution
int main() {

    printHollowSquare(10, 10);

    printFloydsTriangle(4);

    return 0;
}

void printHollowSquare(int height, int width){
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if(i == 0 || i == height-1 || j==0 || j == width-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

void printFloydsTriangle(int size){
    int i = 0;
    for(int j = size; j > 0; j--){
        for(int k = size; k > 0; k--){
            if(j <= k){
                i++;
                printf("%d",i);
            }
        }
        printf("\n");
    }
}