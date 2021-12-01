#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void Insert_at_end();
void Insert_at_beg();
void Insert_after_pos();

void Delete_from_end();
void Delete_from_beg();
void Delete_from_pos();

void Display();
int count();

struct node
{
	int data;
	struct node *next;
};
struct node *head=0,*newnode,*temp;
int cnt=0;

main()
{
	int choice;
	char ans='y';
	do
	{
		printf("\n1.Insert(END):\n2.Insert(BEG):\n3.Insert(AFTER GIVEN POS):\n4.Display:\n5.Delete(BEG):\n6.Delete(END):\n7.Delete(POSITION):\n8.Exit:");
		printf("\nEnter Your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				Insert_at_end();
				break;
			case 2:
				Insert_at_beg();
				break;
			case 3:
				Insert_after_pos();
				break;
			case 4:
				Display();
				break;
			case 5:
				Delete_from_beg();
				break;
			case 6:
				Delete_from_end();
				break;
			case 7:
				Delete_from_pos();
				break;
			case 8:
				exit(0);
				break;
			default:
				printf("\nInvalid Choice:");
		}	
		printf("\nDo you want to continue(Y/N):");
		ans=getche();
	}while(ans=='y'||ans=='Y');
	
}

void Insert_at_end()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the Data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		head=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=temp->next;
	}
}

void Insert_at_beg()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the Data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		head=temp=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	}
}

void Insert_after_pos()
{
	int pos,i=1;

	printf("\nEnter the Position:");
	scanf("%d",&pos);
	if(pos>count())
	{
		printf("Invalid Position");
	}
	else
	{
		struct node *temp;
		temp=head;
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the Data:");
		scanf("%d",&newnode->data);
		newnode->next=temp->next;
		temp->next=newnode;
	}

}

int count()
{
	struct node *temp;
	temp=head;
	while(temp!=0)
	{
		cnt++;
		temp=temp->next;
	}
	return cnt;
}

void Display()
{
	if(count()>0)
	{
		struct node *temp;
		temp=head;
		while(temp!=0)
		{
			printf("\n%d",temp->data);
			temp=temp->next;
		}
	}
	else
		printf("\nList is Empty:");	
}

void Delete_from_beg()
{
	if(head==NULL)
	{
		printf("\nList is Empty:");
	}
	else
	{
		struct node *temp;
		temp=head; 
		head = temp->next;
		free(temp);
	}	
}

void Delete_from_end()
{
	if(head==NULL)
	{
		printf("\nList is Empty:");
	}
	else
	{
		struct node *temp,*prevnode;
		temp=head;
		while(temp->next!=0)
		{
			prevnode=temp;
			temp=temp->next;			
		}
		prevnode->next=0;
		free(temp);
	}	
	
}

void Delete_from_pos()
{
	int pos,i=1;

	printf("\nEnter the Position:");
	scanf("%d",&pos);
	if(pos>count())
	{
		printf("Invalid Position");
	}
	else
	{
		struct node *temp,*nextnode;
		temp=head;
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
		nextnode=temp->next;
		temp->next=nextnode->next;
		free(nextnode);
	}

}
