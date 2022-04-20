#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,k;
	scanf("%d", &t);
	while(t--){
	    scanf("%d %d", &n , &k);
	    int arr[n];
	    for(int i = 0; i<n; i++){
	        scanf("%d", &arr[i]);
	    }
	     for(int i = 0; i<n; i++){
	       
	         
	         if(k - arr[i] >= 0){
	             printf("1");
	             k = k - arr[i];
	             
	         }
	         else{
	             printf("0");
	         }
	        
	    }
	     printf("\n");
	}
	return 0;
}
	

