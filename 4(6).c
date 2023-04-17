#include<stdio.h>
#include<conio.h>
#define MAX_BOOKS 100
struct book
{
	char title[100];
	char author[50];
	int isbn;
	float price;
};
struct book LIBRARY[MAX_BOOKS];
 int num_books=0;
 
 void add_book()
{
	if (num_books >= MAX_BOOKS)
	{
		printf("the LIBRARY is full");
		return;
	}
	printf("enter title:");
	scanf("%s",LIBRARY[num_books].title);
	printf("enter author:");
	scanf("%s",LIBRARY[num_books].author);
	printf("enter isbn:");
	scanf("%d",LIBRARY[num_books].isbn);
	printf("enter price:");
	scanf("%f",LIBRARY[num_books].price);
	
	num_books++;
	printf("book added to LIBRARY");
	}
	
	void display_book(struct book b)
	{
		printf("title:%s, author:%s,isbn:%d,price:%f",b.title,b.author,b.isbn,b.price);		
	}
	void display_book()
	{
		if(num_books == 0)
		{
		printf("library empty");
		return;
		}
		int i;
		printf("library contents:");
		
		for (i=0;i< num_books;i++)
		{
			display_book(LIBRARY[i]);
		}
}
int main()
{
	int choice;
	do
	{
		printf("library menu\n");
		printf("1.add book\n");
		printf("2.display book\n");
		printf("enter choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				add_book();
				break;
				
			case 2:
				display_book();
				break;
			default:
			printf("invalid choice");
		}
		
	}while(choice!=2);
	return 0;
}
	

