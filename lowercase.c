#include<stdio.h>

void lowercase(char *);

int main(){
	char a[100];
	printf("enter string:");
	fgets(a,sizeof(a),stdin);
	lowercase(a);
	puts(a);
	return 0;
}

void lowercase(char a[]){
	int i;
	for(i=0;a[i]!='\0';i++){
		char x=a[i]|'\x20';
		a[i]=x;
	}
	a[i]='\0';
}
