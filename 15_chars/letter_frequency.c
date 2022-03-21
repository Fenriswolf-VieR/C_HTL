#include <stdio.h>
#include <string.h>

int main(){
    char string[100] = {0};
    int frequency[29] = {0};
    int shift = 0;
    printf("Enter the String you want to analyse\n");
    scanf("%s",&string);
    for (int i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < strlen(string); j++)
        {
            if (string[j]==i||string[j]==i-32)
            {
                frequency[i] += 1;
            }
            
        }
        
    }
    for (int i = 0; i < 26; i++)
    {
        printf("");
    }
    
}
    