int i = 1;
int main(){
    int i, j;
    i = fu();
    for (j=1; j<2; j++){
        printf("%i%i", i, j);
        printf("%i", first());
        printf("%i", next());
        printf("%i", last(i + j));
    }
}