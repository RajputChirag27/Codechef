#include <stdio.h>

int main(void) {
	// your code goes here
	int n, friends, leftshoes; 


	scanf("%d", &n);
	for(int i = 0 ; i< n; i++)
	{
	    
	scanf("%d %d", &friends, &leftshoes);
	if(friends <= leftshoes){
	 
	    printf("%d\n" , friends);
	}
	else if(leftshoes == 0){
	 printf("%d \n", 2*friends);
	}
	else{
	printf("%d \n",friends+(friends - leftshoes));
	}
	}
	return 0;
}

