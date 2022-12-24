#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;

// Top pointer
extern Node *top;

void push(int data);
void print();
int pop();
int peek();
int isEmpty();
void nextGreaterElement(int array[]);

#endif
