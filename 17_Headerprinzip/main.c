#include <stdio.h>
#include <string.h>
#include "cap.h"       // include kopiert Inhalt von funct.h an diese Stelle


//Methode = Funktion einer Klasse

//  1. gcc -c main.c
//  2. gcc -c cap.c
//  2.  gcc -o main main.c cap.c && main


int main (){

    int num = 0xFFFF;


    char str[] = "Hallo";
    char tgt[100];

    flipchar(str); //funktion wird ausgeführt + eine Variabel wird mitgegeben
                
    delChar(str, 3);
    delChar(str, 3);    //3 mal das 3 Zeichen löschen
    delChar(str, 3);
   // strCopy(tgt, str);
    strncpy(tgt, str, 3);       // 


    printf("\" %s \" \n", str);
    printf("\" %s \"", tgt);


    return 0;
}


 