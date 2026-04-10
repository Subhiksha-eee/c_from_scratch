// extern modifer 
#include <stdio.h>
extern int var;
int main(){
    printf("%d",var);
}
// multiple declarations is allowed
#include <stdio.h>
extern int var;
extern int var;
extern int var;
int main(){
    printf("%d",var);
}
// 
#include <stdio.h>
int var=90;
int main(){
    extern int var;
    printf("%d",var);
    return 0;
}
//if we dont initilaize the auto modifier it will automaticatically initilaized with garbage value
#include<stdio.h>
int main(){
  auto int var;
  printf("%d" ,var);
}
// if we dint inialize the global variable it it automatically set to 0
#include<stdio.h>
int var;
int main(){
  printf("%d" ,var);
}
