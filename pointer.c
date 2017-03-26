#include<stdio.h>
void fun(int *p);
int main(){
int i;
int a[10];
int *q;
q=&a[0];
fun(q);
for(i=0;i<10;i++){
printf("%d\t",*(q+i));
}
printf("\n");
}
void fun(int *p){
int i;
for(i=0;i<10;i++){
*(p+i)=i+10;
}
}
