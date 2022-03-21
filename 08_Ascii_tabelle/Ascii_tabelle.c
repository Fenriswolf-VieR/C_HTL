#include <stdio.h>

int main(){
    for(int i = 0; i<=16;i++){
        if(i==0){
           for(int j = 0; j<=16;j++){
               if(j==0){
                   printf(" ");
                   printf(" ");
                   printf(" ");
               }else{
                    printf("%x",j-1);
                    printf(" ");
               }
                
            } 
        }else{
            for(int j = 0; j<16;j++){
                if(j==0){
                   //printf(" ");
                }else if(j==1){
                    printf("%x",i-1);
                   // printf(" ");
                }else{
                    char asci = 10*(j-1) + i-1;
                    printf("%c", asci);
                }
                printf(" ");
            } 
            
        }
        printf("\n");
        
    }
}