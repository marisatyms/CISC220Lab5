/*
 * TreePuzzle.hpp
 *
 *  Created on: Oct 21, 2019
 *      Author: kevinkoudelka
 */

#ifndef TREEPUZZLE_HPP_
#define TREEPUZZLE_HPP_
#include <stdlib.h>
#include <string.h>
#include "BSTY.hpp"

class treePuzzle {
	BSTY *tree;
public:
	treePuzzle(int x, string sarr[], int k);
	void runMine1(bool flag);
	void runMine2();
	~treePuzzle();
};



#endif /* TREEPUZZLE_HPP_ */

