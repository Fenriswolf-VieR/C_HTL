#include <stdio.h>

int main(){

    //schreibt in den Standard - Ausgabedatenstrom (normal OS entscheidet in die Konsole)
    fprintf(stdout,"Die Zahl ist %i\n",13);
    //schreibt in den Fehler - Ausgabedatenstrom (normal OS entscheidet in die Konsole)
    fprintf(stderr,"kein Fehler \n");

    int d = 0,m = 0,y = 0;
    scanf("%i.%i.%i",&d,&m,&y); //liest vom datenstrom stdin

    printf("\n%04i/%02i/%02i\n",y,m,d);

}