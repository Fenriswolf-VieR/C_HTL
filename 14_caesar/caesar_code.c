#include <stdio.h>
#include <string.h>

int main(){
    char string[100] = {"delete"};
    int shift = 0;
    printf("Enter the String you want to encode\n");
    scanf("%s",&string);
    printf("Enter how many Letters you want to encode with\n");
    scanf("%i",&shift);
    /*printf("%i \n",'A'); //65
    printf("%i \n",'Z'); //90
    printf("%i \n",'a'); //97
    printf("%i \n",'z');//122 */

    for (int i = 0; i < strlen(string); i++){
        if (isspace(string[i])){
            //do nothing
        }else{
            if(string[i]<='z'&&string[i]>='a'){
                string[i]=string[i]+shift;
                if ((unsigned char) string[i]>(unsigned char)'z'){
                    string[i]=string[i]+'a'-'z'-1;
                }else if(string[i]<'a'){
                    string[i]=string[i]-'a'+'z'+1;
                }
            }else if(string[i]<='Z'&&string[i]>='A'){
                string[i]=string[i]+shift;
                if (string[i]>'Z'){
                    string[i]=string[i]+'A'-'Z'-1;
                }else if(string[i]<'A'){
                    string[i]=string[i]-'A'+'Z'+1;
                }
            }
        }
    }
    for (int i = 0; i < strlen(string); i++){
        printf("%c",string[i]);
    }
}