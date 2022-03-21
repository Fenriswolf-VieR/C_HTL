#include <stdio.h>
#include <string.h>

int strcmp(const char *str1, const char *str2);

int main(int argc, char *argv[]){ //man kann parameter mitgeben Aufrufen mit AA.exe 'String 1' 'String2'
    char s1[] = "abc";
    char s2[] = "xyz";
    for(int i= 0; i < argc; i++){      
        printf("Arg#%i: %s \n", i, argv[i]);
    }
    if(argc !=3){
        printf("NUR 2 STRINGS ERLAUBT!!!");
        return -1;
    } 
    printf(" \n", argc);

    int i = strcmp(argv[1], argv[2]);
    printf("\n %i", i);

}

void swap(int *a,int *b) {
   int e = *a;
   *a = *b;
   *b = e;
}

void inc(int *a) {
    (*a)++;
}

void get_min_max(int *arr, int len, int *min, int *max) {
    int kl;
    int gr;
    for(int i = 0; i<len;i++)
        if(i==0){
            kl = arr[i];
            gr = arr[i];
        }else{
            if(arr[i]>gr){
                gr = arr[i];
            }
            if(arr[i]<kl){
                kl = arr[i];
            }
        }
    *min = kl;
    *max = gr;
}

int strcmp(const char *str1, const char *str2){
    int done = 0;
    for(int i=0; done == 0; i++){
        if((str1[i]==0)&&(str2[i]==0)){
            done = 1;
            return 0;
        }else if(str1[i]==0){
            done = 2;
            return -1;
        }else if(str2[i]==0){
            done = 3;
            return 1;
        }
        if(str1[i]<str2[i]){ done =4; return -1;}
        else if (str1[i]>str2[i]){ done=5; return -1;}
    }
    return 0;
}

int strcat(const char *str1, const char *str2) {
    char str3[strlen(str1)+strlen(str2)];
    int j = 0;
    for(int i=0;str1[i]==0;i++){
        str3[j] = str1[i];
        j++;
    }
    for(int i=0;str2[i]==0;i++){
        str3[j] = str2[i];
        j++;
    }
    str1 = str3;
    return 0;
}