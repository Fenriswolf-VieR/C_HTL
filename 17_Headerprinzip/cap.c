#include <stdio.h>      // muss bei jeder .c Datei da sein

#include "cap.h"    // sinnvoll aber nicht notwendig

void flipchar (char s[]){ // Funktion mit definition in der Klamma
                        
                          // Funktionen steigern die Übersichtlichkeit

    for(int i = 0; s[i]!=0;  i++){ // Array-String bis zum Ende durchgehen
    
        if(s[i]>= 'a'&& s[i]<= 'z'){

            s[i]= s[i]- 'a' + 'A';

        }else if(s[i]>= 'A'&& s[i]<= 'Z')
             s[i]= s[i]- 'A' + 'a';

    
             
    }

}


void delChar(char str[], int idx){             // Zeichen an idx loeschen
    for(int i = idx; str[i] != 0 ;i++){     // oder str[i] != 0
        str[i] = str[i+1];
    
    }

}






void strCopy(char tgt[], char src[], int maxLen){
    int i;
    for(i = 0;  (src[i] != 0) && (i<maxLen);i++){

        tgt[i] = src[i];

}
    if (i < maxLen){
        tgt[i] = 0;
    }


}