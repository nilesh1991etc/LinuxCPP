/*
 * hello_class.h
 *
 *  Created on: 08-Jul-2019
 *      Author: nilesh
 */

#ifndef HELLO_CLASS_H_
#define HELLO_CLASS_H_

#include <iostream>
#include <unistd.h>

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class nilesh
{
	int i;
	pthread_mutex_t mtx1 = PTHREAD_MUTEX_INITIALIZER;
public:
	nilesh(void)
	{
		i=0;
	}
	void increament_var(int arg);
	void print_var(void);
};

void nilesh::increament_var(int arg)
{
	int ret;
	ret=pthread_mutex_lock(&mtx1);
	i=i+arg;
	ret=pthread_mutex_unlock(&mtx1);
}

void nilesh::print_var(void)
{
	int ret;
	ret=pthread_mutex_lock(&mtx1);
	cout << "i="<<i<< endl;
	ret=pthread_mutex_unlock(&mtx1);
}

#endif /* HELLO_CLASS_H_ */
