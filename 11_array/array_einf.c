#include <stdio.h>

#define LEN 25

int main(){

    int var1 = 0;
    int arr[LEN] = {1};
    int var2 = 0;

    arr[7] = 77;
    arr[19] = 2020;
    arr[20] = 0xFFFFFFFF; //schreibt schon in das nächste Element hinein
    //arr[40] = 7; //schreibt ins 40te Element (von 20)

    printf("%i %i \n", var1,var2);

    for(int i=0;i<LEN;i++){
        printf("%i \n",arr[i]);
    }

    char str[LEN] = {'a','b','\0','c'}; // = {'a','b',0,'c'} ascii null ist das Stringende. Nach ihm hört ein string auf
    printf("%s",str);

    return 0;

}