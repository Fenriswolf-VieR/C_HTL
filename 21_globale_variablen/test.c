#include <stdio.h>
//#include "globale_variablen.c"
int x; 
int y;
int main(){
    x=3; y=4;
    printf("%i + %i = %i\n",x,y,sum());
    x=8; y=74;
    printf("%i + %i = %i\n",x,y,sum());
}
