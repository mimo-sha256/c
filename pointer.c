#include<stdio.h>
void fun(int *p);
int main(){
int a;
int *p;
p=&a;
fun(&a);
printf("%d",*p);
}
void fun(int *p){
*p=10;
}

