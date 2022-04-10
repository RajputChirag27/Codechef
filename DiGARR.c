#include <stdio.h>

int main(void) {
	// your code goes here
	int n,d;


	char c[1000];
	scanf("%d", &n);
	for(int i = 0; i<n ; i++){
	    scanf("%d \n %s",&d, &c);
	    	int count =  0;
	   for(int i = 0; i <d; i++) {
	      
	    if(c[i] == '0' || c[i] == '5'){
	        count++;
	    }
	   
	   }
	    if(count > 0){
	        printf("Yes\n");
	    }
	        else{
	            printf("No\n");
	        }
	}
	return 0;
}

