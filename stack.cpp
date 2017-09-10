#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
}*top,*top1,*temp;

int topelement();
void push(int data);
void pop();
void empty();
void display();
void stack_count();
int count = 0;

void main()
{
    int no, ch, e;

    printf("\n 1.push\t2.pop\t3.top\t 4.Empty\t5.Exit\t6.Display\t7.stack count");
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            push(no);
            break;
        case 2:
            pop();
            break;
        case 3:
            if (top == NULL)
                printf("No elements in stack");
            else
            {
                e = topelement();
                printf("\n Top element : %d", e);
            }
            break;
        case 4:
            empty();
            break;
        case 5:
            exit(0);
        case 6:
            display();
            break;
        case 7:
            stack_count();
            break;
        default :
            printf(" Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}
void push(int data)
{
    if (top == NULL)
    {
        top =(struct node *)malloc(sizeof(struct node));
        top->next = NULL;
        top->data = data;
    }
    else
    {
        temp =(struct node *)malloc(sizeof(struct node));
        temp->next = top;
        temp->data = data;
        top = temp;
    }
    count++;
}
void pop()
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    else
        top1 = top1->next;
    printf("\n Popped value : %d", top->data);
    free(top);
    top = top1;
    count--;
}
int topelement()
{
    return(top->data);
}
void empty()
{
    if (top == NULL)
        printf("\n Stack is empty");
    else
        printf("\n Stack is not empty with %d elements", count);
}
void stack_count()
{
    printf("\n No. of elements in stack : %d", count);
}
void display()
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }

    while (top1 != NULL)
    {
        printf("%d ", top1->data);
        top1 = top1->next;
    }
 }

