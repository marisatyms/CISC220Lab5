/*
 * LL.hpp
 *
 *  Created on: Oct 29, 2019
 *      Author: kevinkoudelka
 */

#ifndef LL_HPP_
#define LL_HPP_
#include <stdlib.h>
#include <iostream>

#include "SNode.hpp"
using namespace std;
class LL {
public:
SNodeL *first;
SNodeL *last;
int size;
public:
LL();
void printList();
void push(string s);
void addFirst(string s);
void getScore();
};


#endif /* LL_HPP_ */
