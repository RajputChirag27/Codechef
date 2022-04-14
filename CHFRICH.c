#include <stdio.h>
#include <stdlib.h>
int main(void) {
	// your code goes here
	int n,a,x,b;
	scanf("%d", &n); 
	while(n--){
	    scanf("%d %d %d", &a, &b, &x);
	    printf("%d \n", (abs(a-b))/x);
	}
	return 0;
}

