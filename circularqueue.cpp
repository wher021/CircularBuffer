/*
 * circularqueue.cpp
 *
 *  Created on: Apr 22, 2018
 *      Author: willy
 */

#include "circularqueue.h"
#include <iostream>

CircularQueue::CircularQueue():m_front(-1),m_rear(-1)
{
	// TODO Auto-generated constructor stub

}

CircularQueue::~CircularQueue() {
	// TODO Auto-generated destructor stub
}

void CircularQueue::enque(int value)
{
	//initial empty case
	if(m_front == -1)
	{
		m_rear = 0;
		m_front = 0;
		m_array[m_rear] = value;
	}
	//Queue full
	else if(m_front == 0 && m_rear == SIZE-1)
	{
		std::cout<<"queue is full"<<std::endl;
	}
	//Queue last slot reset iterators
	else if(m_front > 0 && m_rear == SIZE-1)
	{
		m_rear = 0;
		m_front = 0;
		m_array[m_rear] = value;
	}
	else
	{
		m_rear++;
		m_array[m_rear] = value;
	}
}

int CircularQueue::deque()
{
	int value = -99;

	//initial empty case
	if(m_front == -1)
	{
		std::cout<<"queue is empty"<<std::endl;
		return -99;
	}
	//Queue last deque reset to empty
	else if(m_front ==  SIZE-1)
	{
		m_array[m_front] = -1;
		value = m_array[m_front];
		m_front = -1;
		m_rear = -1;
	}
	else
	{
		m_array[m_front] = -1;
		value = m_array[m_front];
		m_front++;
	}
	return value;
}

void CircularQueue::print()
{
	for(int i = 0; i<SIZE; i++)
	{
		std::cout<<m_array[i]<<std::endl;
	}
}
