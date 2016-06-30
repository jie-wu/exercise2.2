#include <stdio.h>
#include <stdlib.h>
int main(){
 
 int a[]={1,2,3,4,5};
 int *b= (int*)&a;
 float *c=(float*)&a;

 for (int i=0;i<5;i++){ 
  printf ("a[i]=%d b[i]=%d c[i]=%d\n",a[i],b[i],c[i]);
	}
	 
 return 0;
}
