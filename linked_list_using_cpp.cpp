#include<bits/stdc++.h>
using namespace std;
struct ListNode{
	int data;
	struct ListNode *next;
};
struct ListNode *head=NULL;
int ListLength(){
	struct ListNode *current=head;
	int count=0;
	while(current!=NULL){
		count++;
		current=current->next;
	}
	return count;
}
void insert(int data,int position){
	struct ListNode *p,*q,*newNode;
	int k=1;
	newNode=(ListNode*)malloc(sizeof(struct ListNode));
	if(!newNode){
		cout<<"Memory Error"<<endl;
		return;
	}
	newNode->data=data;
	p=head;
	if(position==1){
		newNode->next=p;
		head=newNode;
	}
	else
	{
		while(p!=NULL and k<position){
			k++;
			q=p;
			p=p->next;
		}
		q->next=newNode;
		newNode->next=p;
	}
}
void delete_node(int position){
	int k=1;
	struct ListNode *p,*q;
	if(head==NULL){
		cout<<"List is Empty"<<endl;
		return;
	}
	p=head;
	if(position==1){
		head=(head)->next;
		free(p);
		return;
	}
	else
	{
		while(p!=NULL and k<position){
			k++;
			q=p;
			p=p->next;
		}
		q->next=p->next;
		free(p);
	}
}
void display(){
	struct ListNode *p;
	p=head;
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}
bool detect_cycle(){
	struct ListNode *p,*q;
	p=head;
	q=head;
	while(p and q and q->next){
		p=p->next;
		q=q->next->next;
		if(p==q)
		return true;
	}
	return false;
}
void reverse(){
	struct ListNode *next,*prev,*current;
	current=head;
	prev=NULL;
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
}
int search(int data){
	struct ListNode *temp;
	temp=head;
	while(temp!=NULL){
		if(temp->data==data)
		return 1;
	temp=temp->next;
	}
	
	return -1;
}
int middle_element(){
	struct ListNode *slow,*fast;
	slow=fast=head;
	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow->data;
}
void swap_nodes(){
	struct ListNode *temp;
	temp=head;
	while(temp!=NULL and temp->next!=NULL)
	swap(temp->data,temp->next->data);
	temp=temp->next->next;
}
void delete_list(){
	struct ListNode *temp,*temp1;
	temp=head;
	while(temp){
		temp1=temp->next;
		free(temp);
		temp=temp1;
	}
	head=NULL;
}
int main(){
	insert(1,1);
	insert(3,3);
	insert(2,2);
//	insert(4,3);
//	delete_node(2);
//	insert(4,4);
	display();
	cout<<endl;
//	cout<<"The Size is  "<<ListLength()<<endl;;
//	cout<<detect_cycle()<<endl;
	reverse();
	display(); 
	cout<<endl; 
	cout<<search(4)<<endl;
	cout<<middle_element();
	cout<<endl;
	display();
	delete_list();
	display();
}



