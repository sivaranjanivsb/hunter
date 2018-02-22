#include <stdio.h>

int main(void){
int no,r,s=0;
scanf("%d",&no);
while(no!=0)
{
	r=no%10;
	s=s+(r*r);
	no=no/10;
}
printf("%d",s);
	return 0;
}
