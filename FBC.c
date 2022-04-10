#include <stdio.h>
#include <stdlib.h>


int main(void) {
	// your code goes here
	int n,x,y;
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++){
	    scanf("%d %d", &x , &y);
	    
	    printf("%d \n", abs(x-y));
	}
	return 0;
}

