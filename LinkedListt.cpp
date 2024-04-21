#include <iostream>

using namespace std;
class Node
{
	public:
		char id;
		Node *next;
		
		Node()
		{
			next = NULL;
		} 
};

class Linkedlist
{
	public:
		Node *head;
		Node *tail;
		
		Linkedlist()
		{
			head = tail = NULL;
		}
		void InsertToHead(char data)
		{
			Node *node = new Node();
			node->id = data;
			
			Node *tmp = head;
			head = node;
			node->next = tmp; 
		}
		void InsertToTail(char data)
		{
			Node *node = new Node();
			node->id = data;
			
			tail->next = node;
			tail = node;	
		}
		void printAll()
		{
			if (head!=NULL)
			{
				Node *tmp = head;
				do
				{
					cout << tmp->id << "->";
					tmp = tmp->next;
				}
				while (tmp!=NULL);
			}
		}
		
		
};

int main(int argc, char** argv) 
{
	Linkedlist *link1 = new Linkedlist();
	
	Node *node1 = new Node();
	node1->id = 'A';
	
	link1->head = node1;
	link1->tail = node1;
	
	cout << link1->head->id << endl;
	cout << node1 << endl;
	
	Node *node2 = new Node();
	node2->id = 'B';
	
	link1->tail->next = node2;
	link1->tail = node2;
	
	cout << link1->head->id << endl;
	cout << link1->tail->id << endl;
	
	Node *nodeX = new Node();
	nodeX ->id = 'X';
	
	Node *tmp = link1->head;
	link1->head = nodeX;
	nodeX->next = tmp;
	
	cout << link1->head->id << endl;
	cout << link1->tail->id << endl;
	
	link1->InsertToHead('Y');
	link1->InsertToTail('C');
	
	cout << link1->head->id << endl;
	cout << link1->tail->id << endl;
	
	link1->printAll();
	

	return 0;
}