#include<stdio.h>
#include<math.h>

int main()
{
    int bin,dec = 0;
    printf("Enter a number\n");
    scanf("%d",&bin);
    for(int i=0;bin > 0;i++) //do while bin greater than  0 while still counting which place you are at
    {
        int digit = bin % 10;  //split lsb from number
        //printf("%d\n",digit); //print the digit. 
        dec = dec + digit*pow(2,i);
    
        bin = bin / 10;    //divide num by 10 to cut away the lsb
    }
    printf("%d",dec);
    
    return 0;
}