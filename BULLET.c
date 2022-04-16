#include <stdio.h>
#include <stdlib.h>
int main(void) {
	// your code goes here
	int t,x,y,z;
	scanf("%d", &t);
	while(t--){
	    scanf("%d %d %d", &x, &y, &z);
	    if((y/x) < z){
	        printf("%d \n", abs(z-(y/x)));
	        
	    }
	    else if((y/x) >= z){
	        printf("0 \n");
	    }
	}
	return 0;
}

