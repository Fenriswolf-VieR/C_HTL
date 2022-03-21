#include <stdio.h>



//Methode = Funktion einer Klasse


void flipchar (char s[]); // Prototyp - nur der Funktionskopf



int main (){

    char str[] = "Hallo";


    flipchar(str); //funktion wird ausgeführt + eine Variabel wird mitgegeben
                

    printf("\" %s \"", str);
   
    return 0;
}


  // Funktion muss/ soll vor der main Funktion sein 
  //sonst Prototyp

void flipchar (char s[]){ // Funktion mit definition in der Klamma
                        
                          // Funktionen steigern die Übersichtlichkeit

    for(int i = 0; s[i]!=0;  i++){ // Array-String bis zum Ende durchgehen
    
        if(s[i]>= 'a'&& s[i]<= 'z'){

            s[i]= s[i]- 'a' + 'A';

        }else if(s[i]>= 'A'&& s[i]<= 'Z')
             s[i]= s[i]- 'A' + 'a';

    
             
    }
    printf("\" %s \"", s);

}


