/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int t;
		Scanner sc = new Scanner(System.in);
		t= sc.nextInt();
		while(t-->0){
		   int n = sc.nextInt();
		   int x = sc.nextInt();
		   int y = sc.nextInt();
		    int h = n-1;
		    int v = n-1;
		    int ld = Math.min(x-1,y-1);
		    int rd = Math.min(x-1,n-y);
		    int rdd = Math.min(n-x,y-1);
		    int ldd = Math.min(n-x,n-y);
		    System.out.println(h+v+ld+rd+rdd+ldd);
		}
	}
}
