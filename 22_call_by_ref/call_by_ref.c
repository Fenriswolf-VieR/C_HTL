#include <stdio.h>

void func(int a){   //call by value
    a++;            //Wert der ursprünglichen variable wurde wird nicht verändert weil es nicht sichtbar ist, nur der wert innerhalb wird verwendet
}

void func2(int *ptr){   //call by reference
    (*ptr)++;             //*=Wert auf den der Zeiger zeigt wird um eins verändert obwohl er nicht sichtbar ist
}

char *strcopy(char *dst, char *src){
    int i = 0;
    for(;src[i] !=0;i++){
        dst[i] = src [i];
    }
    dst[i] = 0;
    return dst;
}

char *strncopy(char *dst, char *src, int n){
    int i = 0;
    for(;(src[i] !=0)&&(i<n);i++){
        dst[i] = src [i];
    }
    if(i!=n){
        dst[i] = 0;
    }
    return dst;
}

int main(){
    int x= 3;
    func(x);
    printf("%i",x);

    func2(&x);
    printf("%i",x);

    char str[10];
    strcpy(str,"Hallo Welt",sizeof(str));
}