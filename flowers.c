#include <stdio.h>
#include <stdlib.h>

const char *flowers[] =
{
 "rose", "tulip", "daisy"
 "petunia", "orchid", "lily"
};

int main(){
 int i;
 int choice;

 for( i = 0; i < 25; i++ ){
  choice = rand() % 6;
  printf("%d\n",choice);
  printf( "%s\n", flowers[choice] );
 }
 return 0;
}
