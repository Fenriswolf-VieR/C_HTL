#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    char Datentypes [][15] = {"Char","UChar","Short","UShort","Int","UInt","Long","ULong","LongLong","ULongLong","Float","Double"};
    char Categories [][15] = {"Type","Bytes","Min","Max"};
    double  type_info  [][3] = {
            {1,SCHAR_MIN,SCHAR_MAX},
            {1,0,UCHAR_MAX},
            {2,SHRT_MIN,SHRT_MAX},
            {2,0,USHRT_MAX},
            {4,INT_MIN,INT_MAX},
            {4,0,UINT_MAX},
            {4,LONG_MIN,LONG_MAX},
            {4,0,ULONG_MAX},
            {8,LLONG_MIN,LLONG_MAX},
            {8,0,ULLONG_MAX},
            {4,FLT_MIN,FLT_MAX},
            {8,DBL_MIN,DBL_MAX},
        };
    for(int i = 0; i <= sizeof(Datentypes)/sizeof(Datentypes[0]); i++ ){
        for(int j = 0; j < sizeof(Categories)/sizeof(Categories[0]); j++ ){
            if(i==0){
                printf("%s \t",Categories[j]);
            }else{
                if(j==0){
                    printf("%s \t", Datentypes[i-1]);
                }else if((i==11 || i==12)&& j !=1 ){
                   printf("%e \t",type_info[i-1][j-1]);
                }else{
                    printf("%.f \t",type_info[i-1][j-1]);
                }
            }
        }
        printf("\n");
    }
}
/*
    Char  1                     -128                      127
   UChar  1                        0                      255
   Short  2                   -32768                    32767
  UShort  2                        0                    65535
     Int  4              -2147483648               2147483647
    UInt  4                        0               4294967295
    Long  4              -2147483648               2147483647
   ULong  4                        0               4294967295
LongLong  8     -9223372036854775808      9223372036854775807
ULongLong 8                        0     18446744073709551615
   Float  4            1.175494E-038            3.402823E+038
  Double  8            2.225074E-308            1.797693E+308
  */