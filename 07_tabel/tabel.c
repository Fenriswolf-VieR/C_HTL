#include <stdio.h>

int main(){

    /* char test = 65; //A
    printf("%c",test);*/

    int row = 0, col = 0;
    int test = 0, stellen = 0;
    printf("Please input the number of coloumns/rows: ");
    scanf("%i/%i", &col,&row);
    printf("\n");
    test = row;
    for (int i=0; test>0; i++){
        test = test/10; 
        stellen = i;
    }
    for(int i =0; i<=row;i++){
        for (int j = 0; j <= col; j++){
            if(i==0 && j==0){
                for (int t = 0; t < stellen; t++)
                {
                    printf(" ");
                }
                
                printf(" |");
            }else if (j==0){
                int stellen_i = 0;
                test = i;
                for (int t=0; test>0; t++){
                    test = test/10; 
                    stellen_i = t;
                }
                for (int i = 0; stellen_i+i < stellen; i++)
                {
                    printf("0");
                }
                
                printf("%i|",i);
                //printf("%02i|",i);
            }else if (i ==0){
                printf(" %c |", j-1+'A');
            }else{
                printf("   |");
            }
            
        }
        if(i==0||i==row){
            printf("\n--");
            for(int i=0; i<stellen;i++){
                printf("-");
            }
            for(int i=0;i<col;i++){
                printf("----");
            }
        }
        printf("\n"); 
    }
    return 0;
}