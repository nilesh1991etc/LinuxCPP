//============================================================================
// Name        : hello_world.cpp
// Author      : nilesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "hello_class.h"
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

pthread_t tid1;
nilesh nil;

void* thread1(void *arg)
{
	while(1)
	{
		nil.increament_var(*((int*)arg));
		sleep(1);
	}
	return 0;
}

int main()
{
	int ret, inr=1;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	ret=pthread_create(&tid1,NULL,thread1,&inr);
	while(1)
	{
		nil.print_var();
		sleep(1);
	}
	pthread_join(tid1,NULL);
	return 0;
}
