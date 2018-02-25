#include <stdio.h>
int main(void) {
	int a[10],i,b[10],c=0,j;
	for(i=1;i<=5;i++){
	scanf("%d",&a[i]);}
	for(i=1;i<=4;i++){
	scanf("%d",&b[i]);}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(a[i]==b[j]){
				c++;
			}
		}
	}
		if(c==4)
		{
			printf("yes");
		}
	            else
	            {
	            	printf("no");
	            }
	return 0;
}
