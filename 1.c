//Star pattern_1
#include<stdio.h>
 void main()
 {
 	int n,i,j,k;
   scanf("%d",&n);                    //taking input for no. of rows
   for(i=1; i<=n; i++)
   {
   	for(j=i; j<n; j++)
   		{
   			printf(" ");
   		}
   		for(k=1; k<=2*i-1; k++)
   		{
   			printf("*");
   		}
   		printf("\n");
   }
 }
