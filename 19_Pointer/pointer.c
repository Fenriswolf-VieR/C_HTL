#include <stdio.h>


int main (int argc, char const * argv){

    // *... sagt das es eine Adresse ist
    // &... Adresse ermiteln
    // **... Pointer auf einen Integerpointer


    // Datentyp *.... sagt das das eine Adresse ist
    //Datentyp ist nur Infoamtion für Kompiler was unter dieser Adresse liegt

    int num = 0xFFFFFFF;            //Wert in der 
    int *ptrInt;    // Definition einer Pointer-Var          (int...8 Byte für Adresse frei halten)
    ptrInt = &num; // &... ermittelt die Adresse der folgenden Variable

    printf("0x%X\n", *ptrInt);  // *... ermittelt den Wert dieser Adresse

    char *ptrChar;  // Adresse
    ptrChar = (char*)ptrInt;

    *ptrChar = 0xAA;

    printf("0x%X\n", *ptrInt);  // * ermittelt den Wert unter der Adresse
    printf("0x%X\n", *ptrChar); // * ermittelt den Wert unter der Adresse





return 0;
}