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

char *strcat(char *dst, char *src){

}
char *strncat(char *dst, char *src, int n){

}

int strlen(char str){
    int i;
    for(i=0;str[i] !=0;i++);
    return i;
}

/*int main(){
    int test = strlen("77");
    printf("%i",test);
}*/