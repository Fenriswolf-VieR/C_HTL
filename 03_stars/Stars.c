//gcc -c stars.c                 -> Erzeugen Object-Datei
//gcc -o stars.exe stars.o       -> Verlinken mehrerer Object-Dateien
//gcc stars.c -o stars.exe       -> Abkürzung für beide Oben
//gcc -o stars.exe stars.c && stars.exe -> Ausführen in der console

#include <stdio.h> //Laden einer "Bibliothek"

int main(){

    printf("Geben Sie bitte eine Zahl ein:");
    int var;
    scanf("%d",&var); // Wichtig beim scanf: & vor Variable (damit wird Referenz geholt)

    //stars_1(var);
    //stars_2(var);
    //stars_3(var);
    stars_4(var);

    /*for(int i=0; i<var; i++)
        printf("_%02d_%2d_\n",i,i);          //Formatiertes Schreiben in Console

        /*int ctr=0;
        while(ctr++ < 10){
            printf("x");
        }*/

    return 0;
}

void stars_1(int scan){
    for(int i=0; i<scan; i++){
        printf("*");
    }
}

void stars_2(int scan){
    for(int i=1; i<=scan; i++){
        printf("|");
        for(int j=0; j<i; j++){
            printf("*");
        }
        for(int j=0; j<scan-i; j++){
            printf(" ");
        }
        printf("|");
        printf("\n""");
    }
    for(int i=scan-1; i>=1; i--){
        printf("|");
        for(int j=0; j<i; j++){
            printf("*");
        }
        for(int j=0; j<scan-i; j++){
            printf(" ");
        }
        printf("|");
        printf("\n""");
    }
}

void stars_3(int scan){
    for(int i=1; i<=scan; i++){
        for(int j=0; j<=scan; j++){
            if(j==i){
                printf(" ");
            }else{
                printf("*");
            }
            
        }
        printf("\n""");
    }
    for(int i=scan-1; i>=1; i--){
        for(int j=0; j<=scan; j++){
            if(j==i){
                printf(" ");
            }else{
                printf("*");
            }
            
        }
        printf("\n""");
    }
}

void stars_4(int scan){
    for(int i=0; i<=2*scan;i++){
        if(i==scan){
            for(int j=0;j<=2*scan;j++){
                if(j==scan){
                    printf(" ");
                }else{
                    printf("*");
                }
            }
            printf("\n""");
        }else{
            for(int j=0; j<=scan;j++){
                if(j==scan){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n""");
        }
    }
}

void swap(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}