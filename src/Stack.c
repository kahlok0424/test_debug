#include "Stack.h"
#include <stdio.h>
#include "CExceptionConfig.h"
#include "Exception.h"
#include <stdlib.h>
#include "Token.h"

#define stackempty 0
#define stackfulled 1

struct Stack {
    const void *data;
    Stack *next;
};

void push(Stack *stack, const void *data) {
    printf("before Stack: %d\n",stack);
    Stack *item = malloc(sizeof *item);
    item->data = data;
    item->next = stack;
    stack = item;
    printf("Stack: %d\n",stack);
    printf("&Stack: %d\n",&stack);
    printf("item:  %d\n",item);
    printf("&item:  %d\n",&item);

}

const void *pop(Stack *stack)
{
    printf("%d\n",stack);
    Stack *item = malloc(sizeof *item);
    item = stack;
    if(item == NULL)
    {
      printf("Stack is empty");
    //Throw(createException("The stack is empty!",  \
                            stackempty));
    }
    else{
    const void *data = item->data;
    stack = item->next;
    free(item);
    return data;
  }
    return 0;
}

const void *stack_top(const Stack *stack) {
    return stack->data;
}

//This is because the second parameter for func push is const void so \
   i created another func to push integer using pointer
/*void push_double(Stack **operands , double x) {
    double *pointer = malloc(sizeof *pointer);
    *pointer = x;
    push(operands, pointer);
}

double pop_double(Stack **operands) {
    const double *pointer = pop(operands);
    double x = *pointer;
    free((void *)pointer);
    return x;
}*/
