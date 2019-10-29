/*
 * Snode.hpp
 *
 *  Created on: Oct 29, 2019
 *      Author: kevinkoudelka
 */

#ifndef SNODE_HPP_
#define SNODE_HPP_
#include <iostream>
using namespace std;
class SNodeL {
friend class SLL;
public:
int size;
int score;
string word;
SNodeL *next;
public:
SNodeL(); // this constructor takes no input. It and asks the user to input a
// rating, then reads the rating into the rating field, and
// then asks the user to input their comments, and reads in the
// comments into the comments field.
SNodeL(string s);
~SNodeL();
void printNode();
};

#endif /* SNODE_HPP_ */
