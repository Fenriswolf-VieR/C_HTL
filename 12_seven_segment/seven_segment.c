#include <stdio.h>

int main(){
    int num,length = 1;
    printf("Enter the number of symbols your code should have\n");
    scanf("%d",&length);
    while (length <= 0){
        printf("Incorrect input! Number must be higher than zero!\n");
        scanf("%d",&length);
    }
    int code[length];
    int deci_to_seven[] = {0x7E,0x30,0x6D,0x79,0x33,0x5B,0x5F,0x70,0x7F,0x7B};
    for (int i = 0; i < length; i++)
    {
        printf("Enter the (binary) code for %i \n",i);
        scanf("%d",&num);
        code[i] = num;
    }
    

/*0  0111 1110  7E
  1  0011 0000  30
  2  0110 1101  6D
  3  0111 1001  79 
  4  0011 0011  33
  5  0101 1011  5B
  6  0101 1111  5F
  7  0111 0000  70
  8  0111 1111  7F
  9  0111 1011  7B*/
}