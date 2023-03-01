//ECGR 3180 - Homework 2B
//Jacob Barker
//jbarke33@uncc.edu
#include <iostream>
#include "list-b.h"

using namespace std;

int main() {
	List a_list;	//creates list
	List Copy_a_list;	

	cin>>a_list;	//takes list input
	Copy_a_list = a_list;	//creates a copy of the input list

	// cout << a_list.has_id(a_list.head, "1") << endl; //<- this line tests the has_id function
	// cout << a_list.is_empty(a_list.head) << endl; //<- this line tests is_empty fucntion
	cout << a_list;	//ouputs list

	Copy_a_list.reverse(Copy_a_list.head); //reverses the inputed list
	cout << Copy_a_list;	//outputs the reversed list	

	return 0;
}
