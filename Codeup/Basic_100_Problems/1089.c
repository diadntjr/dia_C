#include<stdio.h>

int main() {
	int a = 0,d = 0,n = 0,i,sum = 0;
	scanf("%d %d %d",&a,&d,&n);
	sum = a;
	for(i = 1;i<n;i++) {
		sum += d;
	}
	printf("%d",sum);
	return 0;
}
