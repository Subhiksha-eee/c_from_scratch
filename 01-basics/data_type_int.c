// to find sizeof int 
#include<stdio.h>
int main(){
    printf("%d ",sizeof(int));
    return 0;
}
// range of signed integer
#include<stdio.h>
int main(){
    printf("%d ",sizeof(int));
    return 0;
}
// range of unsigned integer 
#include<stdio.h>
#include<limits.h>
int main(){
    unsigned int a=0;
    unsigned int b=UINT_MAX;
    printf("size of unsigned integer %u %u",a,b);
    return 0;
}
// range of short signed integer
#include<stdio.h>
#include<limits.h>
int main(){
    short  int a=SHRT_MIN;
    short int b=SHRT_MAX;
    printf("size of shortsigned integer %d %d",a,b);
    return 0;
}

// range of short unsigned integer 
#include<stdio.h>
#include<limits.h>
int main(){
    unsigned int a=0;
    unsigned int b=UINT_MAX;
    printf("size of signed integer %u %u",a,b);
    return 0;
}
