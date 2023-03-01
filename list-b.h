//ECGR 3180 - Homework 2B
//Jacob Barker
//jbarke33@uncc.edu
#ifndef list_hb
#define list_hb
#include <iostream>

class Node {	//Node class given in lecture
	public:
		std::string     id ;
		Node            *next ;
		Node ( std::string id , Node *next=nullptr ) {
			this->id = id ;			
			this->next = next ;
		}
} ;


class List {
	public:
		Node    *head ;
		List() { head = nullptr ; }
		Node    *first() { return head ; }
		friend std::istream& operator>> ( std::istream& sin, List &lst ) ; //overloaded >> function
		friend std::ostream& operator<< (std::ostream& os, List &lst);	//overloaded << function
		void prepend(Node*& head, std::string id);	//prepend function
		void append(Node*& head, std::string id);	//append function
		void reverse(Node*& head);	//list reveral function
		bool is_empty(Node*& head);	//list is_empty function
		bool has_id(Node*& head, std::string id);	//list has_id(x) function
} ;
#endif
