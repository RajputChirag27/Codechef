#include <stdio.h>

int main(void) {
	// your code goes here
	int n, group, capacity, registered;
	scanf("%d", &n);
	for(int i = 0 ; i < n ; i++){
	    scanf("%d %d %d", &group , &capacity , &registered);
	    if(capacity - registered>= group){
	        printf("Yes \n");
	    }
	    else{
	        printf("No \n");
	    }
	}
	return 0;
}

