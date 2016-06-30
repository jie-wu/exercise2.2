#include <stdio.h>
#include <stdlib.h>
void local();
void dynamic(int i);

void dynamic (int i){
	int *a;
	for (int j=0;j<1000000;j++){
  a=malloc(10000*sizeof(int));
	}
 a[9999]=i;
 printf ("%d\n",a[9999]);	
}
void local (){
 int a[100000];
}

int main(){
 for(int i=0;i<10;i++){
		dynamic(i);
	}
}
