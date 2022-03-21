#include <stdio.h>

int main(){
    unsigned int val = 429496729;
    char z = 't';
    char zeichen = 'A';//97;
    if ((zeichen>= 'a')&&(zeichen <= 'z')){
        //zeichen -= 32;
        zeichen = zeichen - 'a' + 'A';
    }else if((zeichen>= 'A')&&(zeichen <= 'Z')){
        //zeichen += 32;
        zeichen = zeichen - 'A' + 'a';
    }
    printf("%c",zeichen);
    float f = 1.3;
    double d = 2.4;
    short s = (short) 0xFFFFFFFF; //implizites Casten 4->2
    //printf("%u Bytes", sizeof(1.5));
    //printf("%x",s);
}