#include <stdio.h>

int main(void) {
	int a[10],i,j,b[10],temp,k=1,c=1;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=10;i++)
	   {
	   	 for(j=1+i;j<=10;j++)
        {
   		       if(a[i]==a[j])
   		       {
   		       
   	                   b[k]=a[i];
   	                   printf("%d",b[k]);
   	                   k++;
   		           c++;
   		       }
   		       
	    }
	   }
	    if(c==1)
	    {
	        printf("unique");
	    }
	   if(c>1)
	   {
	    for(i=1;i<k;i++)
	   {
	       for(j=1+i;j<k;j++)
	       {
	           if(b[i]>b[j])
	           {
	               temp=b[i];
	               b[i]=b[j];
	               b[j]=temp;
	           }
	       }
	   }
	   
	   
	   for(i=1;i<k;i++)
	   {
	   printf("\n%d \n",b[i]);
	   }
	   }
	return 0;
}
