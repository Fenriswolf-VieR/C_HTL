#include <stdio.h>

//Präprozessoranweisung (beginnen mit #)
#define PI 3.14 //Makro
#define FALSE 0
#define TRUE !FALSE
int main(){
    /*int false = 0;
    int true = !false;*/
    int false = FALSE;
    int true = TRUE;
    int val = 17; //bool: 0=false; true ist !=false
    if(val != false){
            printf ("%i \n",false);
        	printf("%i",true);
    }

    const float pi = PI;

    printf("%f", pi);

    return 0;
}