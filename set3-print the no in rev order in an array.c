#include <stdio.h>
int main(void) {
	int a[10],b[10],i,k=1;
 for(i=1;i<=5;i++)
 {
 	scanf("%d",&a[i]);
 }
 for(i=5;i>=1;i--)
 {
 	b[k]=a[i];
 	k++;
 }
 for(i=1;i<=5;i++){
 printf("%d\t",b[i]);}
	return 0;
}
