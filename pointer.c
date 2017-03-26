#include<stdio.h>
void get_add(int n,double *p,double *s);
int main(){
	int n,i;
	double sum;
	printf("enter how many numbers you want to add:");
	scanf("%d",&n);
	double a[n];
	get_add(n,&a[0],&sum);
	printf("the sum is %lf\n",sum);
}

void get_add(int n,double *p,double *s){
	int i;
	for(i=0;i<n;i++){
		printf("enter %d number:",i+1);
		scanf("%lf",(p+i));
		*s+=*(p+i);
	}
}
