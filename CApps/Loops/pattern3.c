#include <stdio.h>

int main() {
    int i, j;


    for(i = 1; i <=4; i++) {
        for(j = 1; j <=4; j++) {
            if(i==2 && j==2 || i==2 && j==3){
                printf("  ");
                continue;
            }
            if(i==3 && j==1 || i==3 && j==4){
                printf("  ");
                continue;
            }
            if(i==4 && j==1){
                printf("   0");
                break;
            }
            // Print '*' and '+' function
            if(j == 1 || j == 3) {
                printf("* ");
            }
            else{
                printf("+ ");
            }
            
        }
        printf("\n");
    }            
            
}
