/*
 * LL.cpp
 *
 *  Created on: Oct 29, 2019
 *      Author: kevinkoudelka
 */

#include <stdlib.h>
#include <iostream>
#include "LL.hpp"
#include "SNode.hpp"

using namespace std;

LL::LL() {
	first = NULL;
	last = NULL;
	size = 0;
}

void LL::addFirst(string s) {
	size++;
	first = new SNodeL(s);
	last = first;
}

void LL::push(string s) {
	SNodeL* n = new SNodeL(s);
	last->next = n;
	last = n;
	size++;
}

void LL::printList() {
	SNodeL *tmp = first;
	while (tmp != NULL) {
		cout<< tmp->word<<endl;
		tmp = tmp->next;
	}
	cout << endl;
}

