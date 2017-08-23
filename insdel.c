#include<stdio.h>
#include<stdlib.h>

void get_arr(int *,int);
void display_arr(int *,int);
void insert_arr(int *,int,int,int);
void delete_arr(int *,int,int);

int main()
{
	int size,n,pos,ele;
	int *arr;
	while(1)
	{
		printf("1.input\n2.display\n3.insert\n4.delete\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1: printf("enter size of the array:");
					scanf("%d",&size);
					arr=malloc(size*sizeof(int));
					get_arr(arr,size);
					break;
			
			case 2: display_arr(arr,size);
					break;
			
			case 3: printf("enter position and element you want to insert:");
					scanf("%d%d",&pos,&ele);
					size++;
					arr=realloc(arr,size*sizeof(int));
					insert_arr(arr,size,pos,ele);
					break;
					
			case 4: printf("enter position you want to delete:");
					scanf("%d",&pos);
					delete_arr(arr,size,pos);
					size--;
					arr=realloc(arr,size*sizeof(int));
					break;
					
			default: free(arr);
					 return 0;
		}
	}
	free(arr);
	return 0;
}

void get_arr(int *a,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("enter element %d:",i+1);
		scanf("%d",a+i);
	}
}

void display_arr(int *a,int size)
{
	for(int i=0;i<size;i++)
		printf("%d\t",*(a+i));
	printf("\n");
}

void insert_arr(int *a,int size,int pos,int ele)
{
	while(size-2>=pos)
	{
		*(a+(size-2))=*(a+(size-1));
		size--;
	}
	*(a+pos)=ele;
}

void delete_arr(int *a,int size,int pos)
{
	while(pos<size)
	{
		*(a+pos)=*(a+(pos+1));
		pos++;
	}
}
