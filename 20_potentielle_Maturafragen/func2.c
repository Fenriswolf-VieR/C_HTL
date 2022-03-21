static int i = 10;
int first() {
    i+=1;
    return i;
}

int next(){
    i-=1;
    return i;
}

int last(int i){
    static int j = 5;
    j++;
    return i + j;
}