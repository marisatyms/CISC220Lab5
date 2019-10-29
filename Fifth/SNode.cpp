/*
 * SNode.cpp
 *
 *  Created on: Oct 29, 2019
 *      Author: kevinkoudelka
 */

#include <stdlib.h>
#include <iostream>
#include "LL.hpp"
#include "SNode.hpp"
using namespace std;

SNodeL::SNodeL() {
	size = 0;
	score = 0;
	next = NULL;
	word = "";
}
SNodeL::SNodeL(string s) {
	size = 0;
	score = 0;
	next = NULL;
	word = s;
}


