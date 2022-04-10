#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int p,a,b,n;

 
   scanf("%d", &n);
   while(n--){
       scanf("%d%d%d", &p,&a,&b);
       if(abs(a-b)==1)
     {
         if(a==1 || a==p || b==1 || b==p)
          printf("1 \n");
          else
            printf("2 \n");
     }
    else if(abs(a-b)==2){
          printf("1 \n");
    }
    else
     printf("0 \n");
    }
	return 0;
}

