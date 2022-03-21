#include <stdio.h>


int main(){

    int num,length = 1;
    printf("Enter the length the array should have\n");
    scanf("%d",&length);
    while (length <= 0){
        printf("Incorrect input! Number must be higher than zero!\n");
        scanf("%d",&length);
    }
    //length = 3;
    int arr[length];
    for (int i = 0; i < length; i++){
        printf("Enter the %i. of the Array\n",i+1);
        scanf("%d",&num);
        arr[i] = num;
    }
    FlipArr(arr,length);
    GetStat(arr,length);
    SortArr(arr,length);
}

int FlipArr(int aray[],int len){
    /*for (int i = len-1; i >= 0; i--){
        printf("%i \n",aray[i]);
    } */
    int middle = 0;
    for (int i = 0; i < len/2; i++){
        middle = aray[i];
        aray[i]=aray[len-1-i];
        aray[len-1-i]=middle; 
    }
    for (int i = 0; i < len; i++){
        printf("%i \n",aray[i]);
    } 
}

int GetStat(int aray[],int len){
    int max,pos_max,min,pos_min = 0;
    double average = 0;
    for (int i = 0; i < len; i++){
        average = average+aray[i];
        if(i==0){
            max = min = aray[i];
            pos_max = pos_min = i;
        }else{
            if(aray[i]>max){
                max = aray[i];
                pos_max = i;
            }else if(aray[i]<min){
                min = aray[i];
                pos_min = i;
            }
        }
    }
    average=average/len;
    printf("Maximum: %i Pos: %i \n",max,pos_max);
    printf("Minimum: %i Pos: %i \n",min,pos_min);
    printf("Mittelwert: %f \n",average);
}

int SortArr(int aray[],int len){
    int bol_done = 0;
    int middle = 0;
    do{
        bol_done = 0;
        for (int i = 0; i < len-1; i++){
            if (aray[i]>aray[i+1]){
                middle = aray[i+1];
                aray[i+1]=aray[i];
                aray[i]=middle;
                bol_done = 1;
            }
        } 
    }while (bol_done == 1);
    
    for (int i = 0; i < len; i++){
        printf("%i \n",aray[i]);
    } 
}

