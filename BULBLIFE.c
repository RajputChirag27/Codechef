#include <stdio.h>

int main(void) {
	int t;
	int n,x;
	int arr[1000];



	scanf("%d", &t);
	while(t--){
	    scanf("%d %d", &n, &x);
	   for(int i=0; i<n-1; i++)
	   {
	       scanf("%d", &arr[i]);
	      
	   }
	   int sum = 0; 
	    for(int i=0; i<n-1; i++){
	      
	       sum =sum + arr[i];
	   }
	   int total = (n*x)-sum;
	   if(total <= 0){
	       printf("0 \n");
	   }
	  else if(sum == 0){
	      printf("%d" , n*x);
	  }
	   else{
	       printf("%d \n",total);
	   }
	    
	}
	return 0;
}

