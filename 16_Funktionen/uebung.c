#include <stdio.h>
#include "mat.h"  // auch mit "mat.c"  möglich


int add(int a, int b ){// Funktion 2 Zahlen anddieren

int c = a+b;


return c;   // wenn kein void
} 

int main (){

    int x = add(3, 4);

    printf("Zahl: %i", x);

    return 0;
}