/*
 * circularqueue.h
 *
 *  Created on: Apr 22, 2018
 *      Author: willy
 */

#ifndef CIRCULARQUEUE_H_
#define CIRCULARQUEUE_H_

#define SIZE 5

class CircularQueue {
public:
	CircularQueue();
	virtual ~CircularQueue();
	void enque(int value);
	int deque();
	void print();

private:
	int m_array[SIZE];
	int m_front, m_rear;
};

#endif /* CIRCULARQUEUE_H_ */
