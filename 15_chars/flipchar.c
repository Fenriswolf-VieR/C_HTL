#include <stdio.h>
#include <string.h>

void flipChar(char s[]); //Prototyp - nur der Funktionskopf/Signatur (um Warnings zu vermeiden)
int main()
{
    // Max Text-Length
    #define LEN 100

    char str[LEN];
    printf("Geben Sie einen Text ein: ");
    fgets(str, LEN, stdin);
    str[strlen(str)-1] = 0;    // Removing LF

    flipChar(str);

    printf("\nFlipcase: %s\n", str);
    return 0;
}

void flipChar(char s[]){
    for (int i = 0; i<strlen(s);i++){
        if ((s[i]<='Z')&&('A'<=s[i])){
            s[i] = s[i]+'a'-'A';
        }else if((s[i]<='z')&&('a'<=s[i])){
            s[i] = s[i]-'a'+'A';
        }
    }
}

void delChar(char str[], int idx){ //wir wollen das idx-te Zeichen loeschen
    for(int i=idx;str[i] != 0; i++){
        str[i] == str[i+1];
    }
}