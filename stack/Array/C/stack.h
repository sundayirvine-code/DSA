#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

extern int top;
int stack_arr[MAX];

/*primarY stack operations*/
void push(int data);
int pop();

/*secondary stack operations*/
int isFull();
int isEmpty();
int peek();//top()
int size();

void print();

/*infix to posfix functions*/
char infix[MAX], posfix[MAX];
void in_to_post();
int space(char c);
int precedence(char symbol);
void print_postfix();

#endif
