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

Node* reverseLL(Node* &head)
{
	Node* prev = NULL;
	Node* curr = head;
	Node* next;

	while(curr!=NULL)
	{
		next = curr->next;
		curr->next = prev;

		prev = curr;
		curr = next;
	}

	return prev;
}

Node* recursiveReversLL(Node* &head)
{
	if(head==NULL || head->next== NULL) return head;

	Node* newNode = recursiveReversLL(head->next);
	head->next->next = head;
	head->next = NULL;

	return newNode;
}

Node* reverseKNodesLL(Node* head,int k)
{
	Node* curr = head;
	Node* prev = NULL;
	Node* next;
	int count = 0;
	while(curr!=NULL && count<k)
	{
		next = curr->next;
		(*curr).next = prev;
		prev = curr;
		curr = next;
		count++;
	}

	if(curr!=NULL)
	{
		(*head).next = reverseKNodesLL(curr,k);
	}

	return prev;
}

void makeCycle(Node* head,int pos)
{
	Node* temp = head;
	Node* link;
	int count = 0;
	while(temp->next!=NULL)
	{
		count++;
		if(count==pos)
		{
			link = temp;
		}
		temp = temp->next;
	}
	temp->next = link;
}

bool detectCycle(Node* &head)
{
	Node* fast = head;
	Node* slow = head;

	while(fast!=NULL && fast->next!=NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if(fast==slow)
		{
			return true;
		}
	}
	return false;
}

class Nodedll
{
	public :
	int dlldata;
	Nodedll* next;
	Nodedll* prev;

	Nodedll(int val)
	{
		dlldata = val;
		next = NULL;
		prev = NULL;
	}
};

void insertAtHead(Nodedll* &head,int val)
{
	Nodedll* newNode = new Nodedll(val);
	if(head==NULL)
	{
		head = newNode;
		return;
	}
	newNode->next = head;
	head->prev = newNode;
	head = newNode;
}
void insertAtTail(Nodedll* &head, int val)
{
	Nodedll* newNode = new Nodedll(val);
	if(head==NULL)
	{
		head = newNode;
		return;
	}

	Nodedll* temp = head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;
}
void insertAtposition(Nodedll* &head, int pos,int val)
{
	if(head==NULL)
	{
		insertAtHead(head,val);
		return;
	}
	Nodedll* newNode = new Nodedll(val);
	int count = 0;

	Nodedll* temp = head;

	while(temp->next!=NULL && count!=pos)
	{
		count++;
		temp = temp->next;
	} 
	if(temp->next==NULL){
		insertAtTail(head,val);
		return;
	}
	newNode->next = temp;
	newNode->prev = temp->prev;
	temp->prev->next = newNode;
	temp->prev = newNode;
}

void delectionAtHead(Nodedll* &head)
{
	if(head==NULL)
	{
		cout<<"doubly ll is empty\n";
		return;
	}
	if(head->next ==NULL)
	{
		head=NULL;
		return;
	}
	Nodedll* del = head;
	int key = head->dlldata;
	head = head->next;
	head->prev = NULL;
	delete del;
	cout<<"deleted data = "<<key<<"\n";
}
void delectionAtTail(Nodedll* &head)
{
	if(head==NULL||head->next==NULL){
		delectionAtHead(head);
		return;
	}

	Nodedll* temp = head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	Nodedll* del = temp;
	int key = temp->dlldata;
	temp->prev->next = NULL;
	delete del;
	cout<<"deleted data = "<<key<<"\n";
}

void delectionAtposition(Nodedll* &head,int pos)
{
	if(head==NULL || head->next == NULL){
		delectionAtHead(head);
		return;
	}
	if(pos==0)
	{
		delectionAtHead(head);
		return;
	}
	Nodedll* temp = head;
	int count = 0;
	while(temp->next!=NULL && count!=pos)
	{
		count++;
		temp = temp->next;
	}
	if(temp->next==NULL)
	{
		temp->prev->next = NULL;
		return;
	}
	Nodedll* del = temp;
	int key = del->dlldata;
	temp->prev->next = temp->next;
	if(temp->next!=NULL){
		temp->next->prev = temp->prev;
	}
	delete del;
	cout<<"deleted node is = "<<key<<"\n";
}
void printdll(Nodedll* &head)
{
	Nodedll* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->dlldata<<"->";
		temp = temp->next;
	}
	cout<<"NULL\n";
}

int lenghtll(Nodedll* &head)
{
	int idx = 0;
	Nodedll* temp = head;
	while(temp!=NULL)
	{
		idx++;
		temp = temp->next;
	}
	return idx;
}
Nodedll* appendKnodes(Nodedll* &head,int k)
{
	Nodedll* newTail;
	Nodedll* newHead;
	Nodedll* Tail;
	Nodedll* temp = head;
	int len = lenghtll(head);
	int idx = 0;
	k%=len;
	while(temp->next!=NULL)
	{
		idx++;
		if(idx==len-k)
		{
			newTail = temp;
			newHead = temp->next;
		}
		temp = temp->next;
	}

	Tail = temp;
	newTail->next = NULL;
	Tail->next = head;
	return newHead;
}

void intersect(Nodedll* &head1,Nodedll* &head2,int pos)
{
	Nodedll* temp1 = head1;
	Nodedll* temp2 = head2;
	while(temp2->next!=NULL)
	{
		temp2 = temp2->next;
	}
	while(pos--)
	{
		temp1 = temp1->next;
	}
	temp2->next = temp1;
}

int intersectPoint(Nodedll* &head1, Nodedll* &head2)
{
	int m = lenghtll(head1);
	int n = lenghtll(head2);
	Nodedll* ptr1;
	Nodedll* ptr2;
	int point;
	if(m>n)
	{
		ptr1 = head1;
		ptr2 = head2;
		point = m-n;
	}
	else
	{
		ptr1 = head2;
		ptr2 = head1;
		point= n-m;
	}

	while(point--)
	{
		if(ptr1==NULL)
			return -1;
		ptr1 = ptr1->next;
	}

	while(ptr1->next!=NULL && ptr2->next!=NULL)
	{
		if(ptr1==ptr2)
		{
			return ptr1->dlldata;
		}
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}

	return -1;
}

Nodedll* mergell(Nodedll* &head1,Nodedll* &head2)
{
	Nodedll* ptr1 = head1;
	Nodedll* ptr2 = head2;
	Nodedll* dummy = new Nodedll(-1);
	Nodedll* ptr3 = dummy;

	while(ptr1!=NULL && ptr2!=NULL)
	{
		if(ptr1->dlldata<ptr2->dlldata)
		{
			ptr3->next = ptr1;
			ptr1 = ptr1->next;
		}
		else
		{
			ptr3->next = ptr2;
			ptr2 = ptr2->next;
		}
		ptr3 = ptr3->next;
	}
	if(ptr1!=NULL)
	{
		ptr3->next = ptr1;
		ptr1 = ptr1->next;
		ptr3 = ptr3->next;
	}
	if(ptr2!=NULL)
	{
		ptr3->next = ptr2;
		ptr2 = ptr2->next;
		ptr3 = ptr3->next;
	}

	Nodedll* del = dummy;
	Nodedll* start = dummy->next;
	delete del;
	return start;
}

Nodedll* recursiveMergeLL(Nodedll* &head1,Nodedll* &head2)
{
	if(head1==NULL)
		return head2;
	if(head2==NULL)
		return head1;
	Nodedll* result;
	if(head1->dlldata<head2->dlldata)
	{
		result = head1;
		result->next = recursiveMergeLL(head1->next,head2);
	}
	else
	{
		result = head2;
		result->next = recursiveMergeLL(head1,head2->next);
	}

	return result;
}

void makeCirculerLL(Node* &head)
{
	Node* temp = head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = head;
}

void insertAtHeadCll(Node* &head,int val)
{
	Node* newNode = new Node(val);
	if(head==NULL)
	{
		head = newNode;
		newNode->next = head;
		return;
	}

	Node* temp = head;

	while(temp->next!=head)
	{
		temp = temp->next;
	}
	newNode->next = head;
	head = newNode;
	temp->next = head;
}

void insertAtTailCll(Node* &head,int val)
{
	if(head==NULL)
	{
		insertAtHeadCll(head,val);
		return;
	}
	Node* newNode = new Node(val);
	Node* temp = head;

	while(temp->next!=head)
	{
		temp= temp->next;
	}

	temp->next = newNode;
	newNode->next = head;
}

void delectionAtHeadCll(Node* &head)
{
	if(head->next==head)
	{
		head=NULL;
		return;
	}
	Node* temp = head;
	while(temp->next!=head)
	{
		temp = temp->next;
	}
	Node* del = head;
	temp->next = head->next;
	head = head->next;
	delete del;
}
void delectionAtTailCll(Node* &head)
{
	if(head->next==head)
	{
		delectionAtHeadCll(head);
		return;
	}
	Node* temp = head;
	while(temp->next->next!=head)
	{
		temp = temp->next;
	}

	Node* del = temp->next;
	temp->next = head;

	delete del;
}

void evenAfterOdd(Node* &head)
{
	Node* odd = head;
	Node* even = head->next;
	Node* evenStart = head->next;

	while(odd->next!=NULL && even->next!=NULL) 
	{
		odd->next = even->next;
		odd = odd->next;

		even->next = odd->next;
		even = even->next;
	}

	odd->next = evenStart;
	if(odd==NULL)
		even->next =NULL;
}
void printCirculerLL(Node* &head)
{
	Node* temp = head;

	do{
		cout<<temp->data<<"->";
		temp = temp->next;
	}while(temp!=head);
	cout<<head->data<<"\n";
}

int main()
{
	Node* cllhead = new Node(1);
	insertAtLast(2,cllhead);
	insertAtLast(3,cllhead);
	insertAtLast(4,cllhead);
	insertAtLast(5,cllhead);
	insertAtLast(6,cllhead);
	// makeCirculerLL(cllhead);
	// insertAtHeadCll(cllhead,24);
	// insertAtTailCll(cllhead,69);
	// // printCirculerLL(cllhead);
	// delectionAtHeadCll(cllhead);
	// delectionAtTailCll(cllhead);
	// printCirculerLL(cllhead);
	printLL(cllhead);
	evenAfterOdd(cllhead);
	printLL(cllhead);



	// Nodedll* dllhead;
	// dllhead = NULL;
	// Nodedll* dllhead2 = new Nodedll(2);
	// insertAtTail(dllhead2,5);
	// insertAtTail(dllhead2,8);
	// insertAtHead(dllhead,1);
	// insertAtTail(dllhead,3);
	// insertAtTail(dllhead,4);
	// insertAtTail(dllhead,6);
	// intersect(dllhead,dllhead2,4);
	// printdll(dllhead);
	// printdll(dllhead2);
	// Nodedll* merged = mergell(dllhead,dllhead2);
	// Nodedll* merged = recursiveMergeLL(dllhead,dllhead2);
	// printdll(merged);
	// cout<<intersectPoint(dllhead,dllhead2)<<"\n";
	// dllhead = appendKnodes(dllhead,3);
	// printdll(dllhead);

	// insertAtHead(dllhead,1);
	// insertAtHead(dllhead,2);
	// insertAtTail(dllhead,3);
	// insertAtTail(dllhead,7);
	// insertAtHead(dllhead,8);
	// insertAtposition(dllhead,1,9);
	// insertAtHead(dllhead,9);
	// printdll(dllhead);
	// delectionAtHead(dllhead);
	// delectionAtTail(dllhead);
	// printdll(dllhead);
	// Node* head;
	// head = NULL;

	// insertAtFirst(3,head);
	// insertAtFirst(2,head);
	// insertAtFirst(1,head);
	// insertAtLast(4,head);
	// insertAtLast(5,head);
	// insertAtLast(6,head);
	// printLL(head);
	// deleteVal(head,3);
	// head = reverseKNodesLL(head,3);
	// printLL(head);
	//iterative method
	// head = reverseLL(head);
	// cout<<detectCycle(head)<<endl;
	// makeCycle(head,4);
	// cout<<detectCycle(head);
	//recursive method
	// head = recursiveReversLL(head);
	// printLL(head);
	// cout<<searchInLL(head,3)<<endl;

}