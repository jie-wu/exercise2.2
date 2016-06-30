#include <stdio.h>
#include <stdlib.h>

int xsquare1(int x);
void xsquare2(int x);

int xsquare1(int x){
	return(x*x);
}
void xsquare2(int x){
	x=x*x;
}
    

int main(){
 int x=5;
 printf ("x=%d xsquare1=%d xsquare2=%d\n",x,xsquare1(x));
 xsquare2(x);
 printf ("xsquare2=%d\n",x);
 return 0;
}
