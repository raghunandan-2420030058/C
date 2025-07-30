#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void create(void);
void insert_first(void);
void display(void);
struct node *start = NULL;

int main()
{
    create();
    insert_first();
    insert_at_pos();
    insert_last();
    display();
}

void create(void)
{
 int i = 1, n, num;
 scanf("%d", &n);
 while(i <= n)
 {
    scanf("%d", &num);
    if(start == NULL)
    {
        start = (struct node *) malloc (sizeof(struct node));
        start->data = num;
        start->link = NULL;
    }
    else
    {
        struct node *temp = start;
        while(temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = (struct node *) malloc (sizeof(struct node));
        temp->link->data = num;
        temp->link->link = NULL;
    }
    i++;
 }
}

void display(void)
{
    struct node *temp = start;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

void insert_first(void)
{
  int num;
  scanf("%d", &num);
  struct node *new = (struct node *) malloc (sizeof(struct node));
  new->data = num;
  new->link = start;
  start = new;
}

void insert_last(void)
{
    int value;
    struct node *temp, *ptr;
    scanf("%d", &value);
    temp = (struct node *) malloc (sizeof(struct node));
    temp->data = value;
    temp->link = NULL;
    if(start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while(ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = temp;
    }
}

void insert_at_pos(void)
{
    int value, pos;
    struct node *temp, *ptr, *prev;
    scanf("%d", &value);
    scanf("%d", &pos);
    temp = (struct node *) malloc (sizeof(struct node));
    temp->data = value;
    if(start == NULL)
    {
        printf("List is empty.\n");
        return ;
    }
    else
    {
        ptr = start;
        while(ptr != NULL && ptr->data != pos)
        {
            prev = ptr;
            ptr = ptr->link;
        }
        if(ptr == NULL)
        {
            printf("Node not found.\n");
        }
        else
        {
            temp->link = ptr;
            if(ptr == start)
            {
                start = temp;
            }
            else
            {
                prev->link = temp;
            }
        }
    }
}