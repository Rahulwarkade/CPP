#include<bits/stdc++.h>
using namespace std;

class Node
{
	public :
	int data;
	Node* next;

	Node(int val){
		data = val;
		next = NULL;
	}
};

void insertAtFirst(int data,Node* &head)
{
	Node* newNode = new Node(data);
	if(head==NULL)
	{
		head = newNode;
		return;
	}
	newNode->next = head;
	head = newNode;
	return;
}
void insertAtLast(int data,Node* &head)
{
	Node* newNode = new Node(data);
	if(head==NULL)
	{
		head=newNode;
		return;
	}

	Node* temp = head;

	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	return;
}

bool searchInLL(Node* head, int key)
{
	while(head!=NULL)
	{
		if(head->data==key)
			return true;
		head = head->next;
	}
	return false;
}
void printLL(Node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<"->";
		head = head->next;
	}
	cout<<"NULL"<<endl;
}

void delectionAtFirst(Node* &head)
{
	if(head==NULL){
		cout<<"Linked List is empty\n";
		return;
	}
	if(head->next==NULL)
	{
		head = NULL;
		return;
	}

	Node* del = head;
	head = head->next;

	delete del;
	return;
}

void delectionAtLast(Node* &head)
{
	Node* temp = head;
	if(head==NULL){
		cout<<"Linked List is empty\n";
		return;
	}
	if(head->next==NULL)
	{
		head = NULL;
		return;
	}

	while(temp->next->next!=NULL)
	{
		temp = temp->next;
	}
	Node *del = temp->next;
	temp->next = NULL;
	delete del;
	return;
}

void deleteVal(Node* &head,int val)
{
	Node* temp = head;
	if(head==NULL){
		cout<<"Linked List is empty\n";
		return;
	}
	if(head->data==val)
	{
		head = NULL;
		return;
	}
	if(head->next==NULL && head->data != val)
	{
		cout<<"value is not present in Linked list\n";
		return;
	}

	while(temp->next->next!=NULL)
	{
		if(temp->next->next->data==val)
		{
			Node* del = temp->next->next;
			if(temp->next->next->next==NULL)
				temp->next->next = NULL;
			else
				temp->next->next = temp->next->next->next;
			cout<<"deleted data = "<<del->data<<"\n";
			delete del;
			return;
		}
	}

	cout<<"Give value is not found in linked list\n";
	return;
}
int main()
{
	Node* head;
	head = NULL;

	insertAtFirst(3,head);
	insertAtFirst(2,head);
	insertAtFirst(1,head);
	insertAtLast(4,head);
	printLL(head);
	deleteVal(head,3);
	printLL(head);
	// cout<<searchInLL(head,3)<<endl;

}