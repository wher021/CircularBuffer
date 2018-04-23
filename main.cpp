/*
 * main.cpp
 *
 *  Created on: Apr 22, 2018
 *      Author: willy
 */

#include "circularqueue.h"
#include <iostream>
int main()
{
	CircularQueue cq;
	(void)cq.deque();
	cq.enque(2);
	cq.enque(3);
	cq.enque(4);
	(void)cq.deque();
	(void)cq.deque();
	cq.enque(5);
	cq.enque(6);
	cq.enque(7);
	cq.enque(8);
	std::cout<<"daasdsa"<<cq.deque();
	cq.print();


}



