#include <stdio.h>
#include <stdlib.h>

void fibonacci (int **a,int n){
 int *x=malloc(n*sizeof(int));
 x[0]=1;
 x[1]=1;
 for(int i=2;i<n;i++)
  x[i]=x[i-1]+x[i-2];
  *a=x;
}

int main(){
 int *a,k=10;
 fibonacci(&a,k);
 for(int i=0;i<k;i++){
		printf ("%d\n",a[i]);
	}	
 free(a);
}
