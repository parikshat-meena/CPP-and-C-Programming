#include"node.h"

Node::Node(int d)
{
	this->data = d;
	this->next = NULL;
}
///////////////////////////////////////////////////////
void Node:: setData(int d)
{
	this->data = d;	
}
///////////////////////////////////////////////////////
void Node:: setNext(Node*nt)
{
	this->next = nt;
}
///////////////////////////////////////////////////////
int Node:: getData()
{
	return this->data;
}
///////////////////////////////////////////////////////
Node* Node:: getNext()
{
	return this->next;
}
///////////////////////////////////////////////////////
