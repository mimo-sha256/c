//fibonacci series
#include<stdio.h>
void pfib(int n){
	int a=0,b=1;
	printf("0\t1\t");
	for(int i=3;i<=n;i++){
		int c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
	printf("\n");
}

int main(){
	int n;
	printf("how many terms of the fibonacci series do you want:");
	scanf("%d",&n);
	pfib(n);
	return 0;
}
