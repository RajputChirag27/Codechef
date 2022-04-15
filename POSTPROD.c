#include <stdio.h>
int main()
{
    long int t,a;
    scanf("%ld",&t);
    while(t--)
    {
        long int c1=0,c2=0;
        long int i,n;
        scanf("%ld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a);
        
            if(a<0)
                c1++;
            if(a>0)
                c2++;
        }
        printf("%ld\n",c1*(c1-1)/2+c2*(c2-1)/2);
    }
    return 0;
}
