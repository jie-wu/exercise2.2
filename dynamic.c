#include <stdio.h>
#include <stdlib.h>
void local();
void dynamic();

void dynamic (){
 int *a=malloc(10000);
}
void local (){
 int a[10000];
}

int main(){
 for(int i=0;i<10000;i++){
  local();
  dynamic();
	}
}
