#include<stdio.h>
int main(){
    int a=3;
    printf("%d\n",a);
    a=5;
    printf("%d\n",a);
}
.....................................................
#include<stdio.h>
int main(){
    int a=3;
    int b=a;
    printf("%d %d",a,b);
}
......................................................
#include<stdio.h>
int main(){
    int a,b,c;
    a=b=c=1;
    printf("%d %d %d",a,b,c);
}
