#include<stdio.h>
#include<stdlib.h>

struct details
{	
	int book_id;
	char book_name[100];
	char book_author[50];
	float book_price;
};
typedef struct details det;

void insert(int stack[] , int top)
{	
	if(top==4)
	{
		printf("Stack is full cannot enter any number of books\n");
		return;
	}
	det d;
	top++;
	printf("Enter book ID : ");
	scanf("%d" , &);
	printf("Enter book name : ");
	scanf("%s" , );
	printf("Enter author of the book : ");
	scanf("%s" , );
	printf("Enter book price : ");
	scanf("%f" , );
	
}

void remove_book(int stack[] , int top)
{
	if(top==-1)
	{
		printf("Stack is empty\n");
		return;
	}
	top--;
}

void display(int [] , int);
{
	if(top==-1)
	{
		printf("Stack is empty\n");
		return;
	}	
}

void main()
{
	int top=-1,choice;
	int stack[5];
	for(;;)
	{
		printf("Select an option\n");
		printf("1. Insert book details\n2. Remove book\n3. Display the existing book details\n4. Exit\n");
		scanf("%d" , &choice);
		switch(choice)
		{
			case 1: insert(stack,top);
				break;
			case 2: remove_book(stack,top);
				break;
			case 3: display(stack,top);
				break;
			case 4: exit(0);
		}
	}
}
