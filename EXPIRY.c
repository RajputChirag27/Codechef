#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,m,k;
	scanf("%d", &t);
	while(t--){
	    scanf("%d %d %d" , &n, &m, &k);
	    
	    if(n > m*k){
	        printf("NO \n");
	        }
	        else{
	            printf("YES \n");
	        }
	}
	return 0;
}

