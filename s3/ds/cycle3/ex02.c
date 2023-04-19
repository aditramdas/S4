#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node* link;
}node;
node* getNode();
void InsertatEnd(node* h);
void DeleteFromEnd(node* h);
void display(node* h);
int main(void)
{
	node* header = getNode();
	header->link = NULL;
	int n;
	do{
		printf("Options:\n1)Push\n2)Pop\n3)Exit\nYour Choice: ");
		scanf("%d" , &n);
		switch(n){
			case 1:
				InsertatEnd(header);
				display(header);
				break;
			case 2:
				DeleteFromEnd(header);
				display(header);
				break;
		}
	}
	while(n!=3);
}
node* getNode(){
	node* p;
	p = (node*)malloc(sizeof(node));
	return p;
}
void DeleteFromEnd(node* h){
	node* p1;
	node* p = h;
	while(p->link != NULL){
		p1 = p;
		p = p->link;
	}
	p1->link = NULL;
	free(p);
	
}
void InsertatEnd(node* h){
	node* insertE = getNode();
	node* p = h;
	while(p->link != NULL){
		p = p->link;
	}
	p->link = insertE;
	int n;
	printf("Enter number to be inserted: ");
	scanf("%d" , &n);
	insertE->data = n;
	insertE->link = NULL;

}
void display(node* h){
	if(h->link == NULL)
	{
		printf("*********************\n\n");
		printf("Empty\n\n\n");
		return;
	}
	node* k = h;

	k = k->link;
	printf("*********************\n\n");

	while(k->link != NULL){
		printf("%d\t", k->data);
		k = k->link;
	}
	printf("%d", k->data);
	printf("\n\n");

}