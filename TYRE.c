#include <stdio.h>

int main(void) {
	// your code goes here
	int a,n,m;
	scanf("%d" , &a);
	for(int i = 0 ; i < a; i++){
	    scanf("%d %d", &n, &m);
	   printf("%d\n", (2*n)+(4*m));
	}
	return 0;
}

