#include <stdio.h>

int main(){

    int ergebnis,val1,val2;
    int test = 1;
    ergebnis = (test) ? val1 : val2;
//alternativ:
    if(test){
        ergebnis = val1;
    } else {
        ergebnis = val2;
    }

}