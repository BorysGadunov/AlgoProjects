#include <stdio.h>
#include <conio.h>
#define max 50

void push();
void pop();
void display();
int menu();
int stack[max], top = 0;

int main()
{
	int ch;
	clrscr();
	do{
		ch = menu;
		switch(ch){
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: display();
			break;
			case 4: exit();
			default:printf("\nEnter a valid choice!!!");
		}
	}while(1);

	return 0;
}

int menu()
{
	int ch;
	printf("Stack\n");

	printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
	printf("\nEnter your choice: \n");
	scanf("%d", &ch);
	return ch;
}

void push(){
	if (top == max)
	{
		printf("\nOverflow\n");
	}
	else
	{
		int element;
		printf("Enter element:\n");
		scanf("%d", &element);
		printf("\nElement(%d) has been pushed at %d", element, top);
		stack[top++] = element;
	}
}

void pop(){
	if (top == -1)
	{
		printf("\nUnderflow");
	}else
	{
		top--;
		printf("\nElement has been popped out!");
	}
}
void display(){
	if (top == 0)
		printf("Stack is empty!\n");
	else{
		for (int i = 0; i < max; i++)
			printf("%d", stack[i]);
	}
}