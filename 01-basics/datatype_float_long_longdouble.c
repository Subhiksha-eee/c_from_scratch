// size of float,long,long double 
#include<stdio.h>
int main(){
   printf("%d\n",sizeof(float));
   printf("%d\n",sizeof(long));
   printf("%d\n",sizeof(long double));

}
// precision of float[7],long[16],long double[19]
#include <stdio.h>
int main(){
float varl =3.1415926535897932;
double var2= 3.1415926535897932;
long double var3= 3.141592653589793213456;
printf("%.16f\n", varl);
printf("%.16f\n", var2);
printf("%.21Lf\n", var3);
}
// realise
#include <stdio.h>
int main(){
    int var= 4/9;
    printf("%d\n", var);
    float varl = 4/9;
    printf("%.2f\n", varl);
    float var2 = 4.0/9.0;
    printf("%.2f\n", var2);
}
