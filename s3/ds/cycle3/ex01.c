#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node* link;
}node;
node* getNode();
void InsertatBeg(node* h);
void InsertatEnd(node* h);
void InsertatPos(node* h);
void DeleteFromPos(node* h);
void DeleteFromBeg(node* h);
void DeleteFromEnd(node* h);
void display(node* h);
int main(void)
{
	node* header = getNode();
	header->link = NULL;
	int n;
	do{
		printf("Options:\n1)Insert at Beginning\n2)Insert at End\n3)Insert at a Particular Position\n4)Delete from a Particular Position\n5)Delete from Beginning\n6)Delete from End\n7)Display\n8)End\nYour Choice: ");
		scanf("%d" , &n);
		switch(n){
			case 1:
				InsertatBeg(header);
				display(header);
				break;
			case 2:
				InsertatEnd(header);
				display(header);
				break;
			case 3:
				InsertatPos(header);
				display(header);
				break;
			case 4:
				DeleteFromPos(header);
				display(header);
				break;
			case 5:
				DeleteFromBeg(header);
				display(header);
				break;
			case 6:
				DeleteFromEnd(header);
				display(header);
				break;
			case 7:
				display(header);
		}
	}
	while(n != 8);
}
node* getNode(){
	node* p;
	p = (node*)malloc(sizeof(node));
	return p;
}
void InsertatBeg(node* h){
	node* insert = getNode();
	insert->link = h->link;
	h->link = insert;
	int n;
	printf("Enter number to be inserted: ");
	scanf("%d" , &n);
	insert->data = n;
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
void InsertatPos(node* h){
	node* insertE = getNode();
	node* p = h;
	int count = 0;
	int n,k;
	printf("Enter number to be inserted: ");
	scanf("%d" , &n);
	printf("Enter position to be inserted to: ");
	scanf("%d" , &k);
	while(p->link != NULL){
		if(count == k){
			node* temp;
			temp = p->link;
			p->link = insertE;
			insertE->data = n;
			insertE->link = temp;
			break;
		}
		p = p->link;
		count++;
	}
}
void DeleteFromPos(node* h){
	node* p1;
	node* p = h;
	int count = 0;
	int n;
	printf("Enter position to be deleted: ");
	scanf("%d" , &n);
	while(p->link != NULL){
		if(count == n){
			p1->link = p->link;
		}
		p1 = p;
		p = p->link;
		count++;
	}
}
void DeleteFromBeg(node* h){
	node* sec = (h->link)->link;
	h->link = sec;
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
void display(node* h){
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
