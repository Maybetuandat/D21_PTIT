#include<bits/stdc++.h>
using  namespace std;
struct Node 
{
	int data;
	Node *next;
};
typedef struct Node* node;


node makeNode(int x)
{
	node tmp = new Node();
	tmp->data = x;
	tmp->next= NULL;
	return tmp;
}
int size(node a)
{
	int count = 0;
	while(a != NULL)
	{
		count ++;
		a= a->next;
	}
	return count;
}
void chendau(node &a, int x)
{
	node tmp = makeNode(x);
	if(a == NULL)
	   a=tmp;
	else
	{
		tmp->next = a;
		a = tmp;
	}
}
void insertLast(node &a, int x)
{
	node tmp = makeNode(x);
	if(a == NULL)
	{
		a = tmp;
		return;
	}
	node p =a;
	while(p->next != NULL)
	{
		p = p->next;
	}
	p->next=tmp;
}
void in(node a)
{
	while(a != NULL)
	{
		cout<<a->data<<" ";
		a= a->next;
	}
	cout<<endl;
	cout<<"----------------------------------------"<<endl;
}
int main ()
{
	node head = NULL;
	chendau(head, 3);
	chendau(head, 5);
	chendau(head, 7);
	insertLast(head, 9);
	in(head);
}
