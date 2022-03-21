#include <stdio.h>

int main(){
    int num;
    printf("Geben Sie eine Zahl ein:");
    scanf("%i", &num);
    printf("Die Negation lautet: %i \n", ~num+1);

    int erg = 0;

    erg = erg + num & 1;
    num >> 1;

  return 0;
}