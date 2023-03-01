//ECGR 3180 - Homework 2A
//Jacob Barker
//jbarke33@uncc.edu
#include <iostream>
#include "list-a.h"

using namespace std;

int main() {
	List a_list;	//defines list
	cin>>a_list;	//takes list input
	a_list.prepend(a_list.head, "HEAD");	//prepends HEAD onto beginning of list
	a_list.append(a_list.head, "TAIL");	//appends TAIL onto end of list
	cout<<a_list;	//outputs List

	return 0;
}
