// redefination of varaible with same variable name is not allowed
#include<stdio.h>
int main(){
    int var=34;
    int var=89;
    printf("%d",var);
}
// basic principle of scope - contents if outer loop is accesible to inner block but inner block contents are not visible to puter block
#include<stdio.h>
int main(){
    int var=34;
   {
       int var=89;
       printf("%d\n",var);
   }
   printf("%d",var);
}
// local variable
#include<stdio.h>
int func();
int main(){
    int var=34;
    printf("%d\n",var);
    func();
    return 0;
}
int func(){
    int var=89;
    printf("%d",var);
    return 0;
}
// global variable
#include<stdio.h>
int func();
int var=100;
int main(){
    int var=34;
    printf("%d\n",var);
    func();
    return 0;
}
int func(){
    printf("%d",var);
    return 0;
}

