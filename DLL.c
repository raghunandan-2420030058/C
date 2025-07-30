#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *prev,*next;
};

void create(void);
void insert_first(void);
void insert_at_pos(void);
void insert_last(void);
void delete_first(void);
void delete_last(void);
void delete_req_node(void);
void display_left_right(void);

struct node *start=NULL;
int main()
{
  create();
  insert_first();
  insert_at_pos();
  insert_last();
  delete_first();
  delete_last();
  delete_req_node();
  display_right_left();
  display_left_right();
}

void create(void)
{
    struct node *new, *temp;
    int n, i = 1;
    scanf("%d", &n);
    while(i <= n)
    {
        new = (struct node *) malloc (sizeof(struct node));
        scanf("%d", &new->data);
        
        if(i == 1)
        {
            start = new;
            start->prev = NULL;
            temp = new;
        }
        else
        {
            temp->next = new;
            new->prev = temp;
            temp = new;
        }
        i++;
    }
    temp->next = NULL;
}
void display_right_left(void)
{
    struct node *i;
    for(i = start; i->next != NULL; i = i->next);
    for(; i!= NULL; i = i->prev)
    {
        printf("%d ", i->data);
    }
    printf("\n");
}
void insert_first(void)
{
    struct node *new;
    new = (struct node *) malloc (sizeof(struct node));
    scanf("%d", &new->data);
    new->next = start;
    new->prev = NULL;
    start->prev = new;
    start = new;
}
void insert_at_pos(void)
{
    struct node *new, *i;
    int n;
    new = (struct node *) malloc (sizeof(struct node));
    scanf("%d", &new->data);
    scanf("%d", &n);
    for(i = start; i->data != n; i = i->next);
    new->prev = i->prev;
    i->prev->next = new;
    i->prev = new;
    new->next = i;
}
void insert_last(void)
{
    struct node *new, *i;
    new= (struct node *) malloc (sizeof(struct node));
    scanf("%d", &new->data);
    for(i = start; i->next != NULL; i = i->next);
    i->next = new;
    new->prev = i;
    new->next = NULL;
}
void  delete_first(void)
{
    if(start == NULL)
    {
        return;
    }
    struct node *temp = start;
    start = start->next;
    if(start != NULL)
    {
        start->prev = NULL;
    }
    free(temp);
}
void delete_req_node(void)
{
    int value;
    scanf("%d", &value);
    struct node *temp = start;
    if(temp->data == value)
    {
        start = temp->next;
        if(start != NULL)
        {
            start->prev = NULL;
        }
        free(temp);
        return;
    }
    while(temp != NULL && temp->data != value)
    {
        temp = temp->next;
    }
    if(temp->next == NULL)
    {
        temp->prev->next = NULL;
    }
    else
    {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
    }
    free(temp);
}
void  delete_first(void)
{
    if(start == NULL)
    {
        return;
    }
    struct node *temp = start;
    start = start->next;
    if(start != NULL)
    {
        start->prev = NULL;
    }
    free(temp);
}