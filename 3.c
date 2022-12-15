#include<stdio.h>

main(){
	
  char str[100], *pt;
  int i;
 
  printf("Enter string :- ");
  
  gets(str);
  
  pt = str;
  
  for(i=0; *pt != '\0'; i++) {

    pt++;
  
  }
 
  printf("Length :- %i", i);

}
