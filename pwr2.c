#include <stdio.h>
#include <math.h>

/*prints powers of 2 less than 2^100
  @author Aly Milich
  */

int main(){


	int i=0, result=1;
	
	while(result<1000){ 
		printf("%lf\n", pow(2,i));
		i++;
		result = pow(2,i);
		result = pow(2,i);
	}

	return 0;

}
