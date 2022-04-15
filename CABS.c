#include <stdio.h>

int main(void) {
	int n, x, y;
	scanf("%d", &n);
	for(int i = 0; i <n; i++){
	    scanf("%d %d", &x, &y);
	    if(x>y){
	        printf("SECOND \n");
	    }
	        else if(x==y){
	            printf("ANY \n");
	            
	        }
	        else{
	            printf("FIRST \n");
	        }
	    
	    
	}
	return 0;
}

