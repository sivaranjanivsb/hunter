#include <stdio.h>
int main(void) {
	int a[10],i;
	for(i=1;i<=5;i++){
	scanf("%d",&a[i]);}
	for(i=1;i<=5;i++){
		if(a[i]==i){
			printf("%d\t",a[i]);
		}
	}
	return 0;
}
