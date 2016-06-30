#include <stdio.h>
#include <string.h>

int main(){
 char *a="TEST"; //change this so that it no longer crashes
 a[0]='t';
 printf("%s\n",a);
 return 0;
}
