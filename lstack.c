#include <stdio.h>  
#include <stdlib.h>  
void push();  
void pop();  
void display();  
struct node   
{  
int value;  
struct node *s;  
};  
struct node *top;  
  
void main ()  
{  
    int x=0;
    printf("\nPerform operations on the stack:\n1.Push\n2.Pop\n3.Display\n4.End\n");     
    while(1)  
    { 
        printf("Enter the choice: ");
        scanf("%d", &x); 
        switch(x)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:   
            {  
                exit(0);  
                break;   
            }  
            default:  
            {  
                printf("\nPlease enter correct option");  
            }   
    };  
}  
}  
void push ()  
{  
    int value;  
    struct node *p = (struct node*)malloc(sizeof(struct node));   
    if(p == NULL)  
    {  
        printf("\nOverflow");   
    }  
    else   
    {  
        printf("Enter the value: ");  
        scanf("%d",&value);  
        if(top==NULL)  
        {         
            p->value = value;  
            p -> s = NULL;  
            top=p;  
        }   
        else   
        {  
            p->value = value;  
            p->s = top;  
            top=p;  
               
        }           
    }  
}  
  
void pop()  
{  
    int item;  
    struct node *p;  
    if (top == NULL)  
    {  
        printf("\nUnderflow");  
    }  
    else  
    {  
        item = top->value;  
        p = top;  
        top = top->s;
        printf("The element poped is \033[1;31m%d\033[0m.\n", *p); 
        free(p);  
          
    }  
}  
void display()  
{  
    int i;  
    struct node *p;  
    p=top;  
    if(p == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {  
        printf("Printing Stack elements \n");  
        while(p!=NULL)  
        {  
            printf("\033[1;32m%d\033[0m\n", p->value);
            p = p->s;  
        }  
    }  
}  