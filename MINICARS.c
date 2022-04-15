#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	float a,n;
	scanf("%f", &a);
	for(float i=0; i<a; i++){
	    scanf("%f", &n);
	    printf("%d \n", (int)ceil(n/4));
	    
	}
	return 0;
}

