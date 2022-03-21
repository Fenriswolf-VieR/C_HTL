#include <stdio.h>
#include <string.h>
int strcmp(const char *str1, const char *str2) {
   /* int result = 0;
    int i=0;
    for(i=0;((str1[i]==0)||(str2[i]==0));i++){
        if(str1[i] != str2[i]){
            if(str1[i]>str2[i]){
                result++;
                //return result;
            }else{
                result--;
                //return result;
            }
        }
    }
    /*if(str1[i]==0){
        result--;
    }else if(str2[i]==0){
        result++;
    }*/
    return str1 - str2;
}

void main(){
    char *str1 = "abc";
char *str2 = "abcd";
printf("strcmp(%s, %s) = %i", str1, str2, -(strcmp(str1, str2)<0));
}