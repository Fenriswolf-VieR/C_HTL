# include <stdio.h>
# include <stdlib.h>

int main(){

    int *ptr = (int *)malloc(5000 * sizeof(int));
    int arr[5000000];

    *ptr = 4;

    int val = 0;
    int i=0;
    while(val != -1){
        scanf("%i", &val);
        ptr = (int*)realloc(ptr, (i+1)*sizeof(int));
        ptr[i] = val;
        arr[i++] = val;
        
    }

    printf("MW von [%i",ptr[0]);
    for(int j=1; j<i; j++){
        printf(", %i",ptr[j]);
    }

    printf("] ist 7");

    free(ptr);

    return 0;
}