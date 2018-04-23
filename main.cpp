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
	cq.enque(5);
	cq.enque(6);
	(void)cq.deque();
	(void)cq.deque();
	cq.print();
	std::cout<<"newlin"<<std::endl;
	cq.enque(77);
	cq.enque(77);
	cq.enque(77);
	cq.print();
	std::cout<<"newlin"<<std::endl;
	cq.enque(88);
	cq.print();
	cq.enque(88);
	cq.enque(88);


}



