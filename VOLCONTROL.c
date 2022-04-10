#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d", &a);
	int arr[a] , arr2[a];
	for(int i=0; i<a; i++){
	    scanf("%d %d",&arr[i], &arr2[i]);
	}
		for(int i=0; i<a; i++){
	    printf("%d\n",abs(arr[i]-arr2[i]));
	}
	
	return 0;
}


