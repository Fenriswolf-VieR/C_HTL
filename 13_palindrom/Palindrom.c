#include <stdio.h>
#include <string.h>

int main(){
    char string[] = {"delete"};
    int is_palindrom = 1;
    printf("Enter the String you want to test\n");
    scanf("%s",&string);

    for (int i = 0; i < strlen(string); i++){
        if (isspace(string[i])){
            do
            {
                for (int j = i; j <= strlen(string); j++){
                    string[j] = string[j+1];
                }
            } while (isspace(string[i]));
            
            
            
        }
        string[i] = tolower(string[i]);
    }
    for (int i = 0; i < strlen(string)/2; i++){
        if(is_palindrom==0){
            break;
        }
        if (string[i]!=string[strlen(string)-1-i]){
            is_palindrom = 0;
            break;
        } 
    }
    if (is_palindrom !=0){
       printf("The String is a Palindrom\n");
    }else{
        printf("The String is not a Palindrom\n");
    }
    
}
    
    