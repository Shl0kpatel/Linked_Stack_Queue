#include<stdio.h>   
#include<stdlib.h>  
struct node   
{  
    int obj;   
    struct node *next;  
};  
struct node *f;  
struct node *r;   
void enqueue();  
void dequeue();  
void display();  
void main ()  
{  
    int x;
    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.End");   
    while(1)   
    {     
        printf("\nEnter the choice: ");
        scanf("%d",& x);  
        switch(x)  
        {  
            case 1:  
            enqueue();  
            break;  
            case 2:  
            dequeue();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("\nPlease enter correct option");
        }  
    }  
}  
void enqueue()  
{  
    struct node *p;  
    int item;   
      
    p = (struct node *) malloc (sizeof(struct node));  
    if(p == NULL)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    else  
    {   
        printf("Enter the value : ");  
        scanf("%d",&item);  
        p -> obj = item;  
        if(f == NULL)  
        {  
            f = p;  
            r = p;   
            f -> next = NULL;  
            r -> next = NULL;  
        }  
        else   
        {  
            r -> next = p;  
            r = p;  
            r->next = NULL;  
        }  
    }  
}     
void dequeue ()  
{  
    struct node *p;  
    if(f == NULL)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
    }  
    else   
    {  
        p = f;  
        f = f -> next;
        printf("Element deleted from the Queue: \033[1;31m%d\033[0m.\n", *p);  
        free(p);  
    }  
}  
void display()  
{  
    struct node *p;  
    p = f;      
    if(f == NULL)  
    {  
        printf("\nThe queue is empty.\n");  
    }  
    else  
    {   
        while(p != NULL)   
        {  
            printf("\033[1;32m%d\033[0m\n", p->obj);  
            p = p -> next;  
        }  
    }  
} 