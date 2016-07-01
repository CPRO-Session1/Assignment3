//Anya Lauria
//Asterix half moon

#include <stdio.h> 

int main() 

{

int x; 
int y; 

  for(x=1; x<=5; x++){
          
	  for(y=1; y<=x; y++){
		  printf("*");
  }
	  printf("\n");
  }

  for(x=5; x>=1; x--){

	  for(y=1; y<=x; y++){
		  printf("*");
	  }
	  printf("\n");
  }
  return 0; 
}
