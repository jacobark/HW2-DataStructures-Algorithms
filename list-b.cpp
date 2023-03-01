//ECGR 3180 - Homework 2B
//Jacob Barker
//jbarke33@uncc.edu
#include "list-b.h"
#include <iostream>
using namespace std;

istream& operator>> ( istream& sin, List &lst ) {	//Overloads Standard in operator to take list from input
	Node            *tmp ;
	std::string     id ;

	sin >> id ;
	while( !sin.eof() ) {
		tmp = new Node(id,lst.head) ;
		lst.head = tmp ;
		sin >> id ;
	}					    
	return sin;
}

ostream& operator<< (ostream& os, List &lst) {	//Overloaded standard out operator to ouput list to console
	cout<<"[";
	if(lst.head != NULL) {
		cout << lst.head->id;
		lst.head = lst.head->next;
	}
	while(lst.head != NULL) {
		cout<< ", " << lst.head->id;
		lst.head = lst.head->next;
	}
	cout<<"]"<<endl;
	return os;	
}

void List::prepend(Node*& head, std::string id) {	//Prepends string argument onto beginning of list
	Node *temp = new Node(id);	
	temp->next = head;	//inserts argument id at the head of list
	head = temp;
}

void List::append(Node*& head, std::string id) {	//apppend string arguments onto the end of list
	Node *N = new Node(id);
	Node *temp = head;

	while(temp->next != NULL) {	//cycles to end of list and inserts new node with argument id
		temp=temp->next;
	}
	temp->next = N;
}

void List::reverse(Node*& head) {	//reverses list
	Node *temp = NULL;
	Node *prev = NULL;
	Node *current = head;
	while(current != NULL) {	//cyclyes through list rearranging the links to the nodes so they are in reverse
		temp = current->next;	
		current->next = prev;
		prev = current;
		current = temp;
	}
	head = prev;

}

bool List::is_empty(Node*& head) {	//returns wether list contains any elements
	return head == NULL;	//checks if the head equals NULL
}

bool List::has_id(Node*& head, std::string id) {	//checks argument string is an id within a list
	Node *temp = head;
	while (temp != NULL) {	//cycles through list
		if (temp->id == id) { //checks to see if the input argument matches an id within the list	
			return 1;	//returns true if match is found
		}
		temp = temp->next;
	} 
		return 0;	//returns false if no match is found
}
