#include <stdio.h>
#include <stdlib.h>
int main(void) {
	// your code goes here
	int a,n,s;
	scanf("%d" , &a);
	while(a--){
	    scanf("%d %d", &n , &s);
	    if(s<=n){
	        printf("%d \n", s);
	    }
	    else{
	        printf("%d \n", 2*n-s);
	    }
	    
	}
	return 0;
}

