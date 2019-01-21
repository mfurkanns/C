#include <stdio.h>

struct exm{	
	int val;
	struct exm *next;	
	
};

void add(struct exm *node,int a){
	
	struct exm *current=node;
	while(current->next!=NULL){
		current=current->next;
	}	
	current->next=malloc(sizeof(struct exm));
	current->next->val=a;
	current->next->next=NULL;
}

void list(struct exm *node){
	
	struct exm *current=node;
	while(current->next!=NULL){
		printf("%d ",current->val);
		current=current->next;
	}
	printf("%d ",current->val);	
}

int main(){
	
	int n;
	struct exm *head;
	
	printf("enter value to add  end of the list = ");
	scanf("%d",&n);	
	
	head->val=n;
	head->next=NULL;
	
	printf("enter value to add  end of the list = ");
	scanf("%d",&n);
	
	add(head,n);	
	list(head);	
	
	return 0;
}
