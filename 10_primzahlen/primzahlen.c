#include <stdio.h>

int main(){
    int max = 0;
    printf("Please input the maximum number you want checked: ");
    scanf("%i", &max);
    printf("\n");
    for (int i = 1; i <= max; i++){
        int test = check_prim(i);
        if(test){
            printf("%i, ",i);
        }
    }

}
check_prim(int num){
    //int num = 0;
    int is_prim = 1;
    /*printf("Please input the number you want checked: ");
    scanf("%i", &num);*/
    //printf("test %i", num);
    for (int i = 2; (i < num) && is_prim; i++){
        if (num%i == 0){
            is_prim = 0;
        } 
    }

    if(is_prim){
        return 1;
        //printf("The number: %i is a primenumber",num);
    }else{
        return 0;
        //printf("The number: %i is no primenumber",num);
    }
}