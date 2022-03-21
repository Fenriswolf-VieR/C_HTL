#include <stdio.h>

int add_cm(const char *str1, const char *str2, const char *str3);

int main(int argc, char *argv[]){ //man kann parameter mitgeben Aufrufen mit add_cmd.exe 'Operator' 'Nr1' 'Nr2'
    char s1[] = "5"; // 1 für +, 2 für -, 3 für *, 4 für /, 5 für %
    char s2[] = "4";
    char s3[] = "2";
    for(int i= 0; i < argc; i++){      
        printf("Arg#%i: %s \n", i, argv[i]);
    }
    if(argc !=4){
        printf("NUR 2 ZAHLEN UND EIN OPERANT VORNE ERLAUBT!!!");
        return 1;
    } 
    printf(" \n", argc);

    int i = add_cm(argv[1], argv[2], argv[3]);
    //int i = add_cm(s1,s2,s3);
    printf("\n %i", i);

}

int add_cm(const char *str1, const char *str2, const char *str3){
    int op = atoi(str1);
    float nr1 = atof(str2);
    float nr2 = atof(str3);
    float erg = 1;
    switch(op) {
	    case 1: erg=nr1+nr2; break;
	    case 2: erg=nr1-nr2; break;
	    case 3: erg=nr1*nr2; break;
        case 4: erg=nr1/nr2; break; 
	default: printf("FEHLER! KEIN VALID OPERANT"); break;
}
}