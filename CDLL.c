#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev,*next;
};

void create(void);
void insert_first(void);
void insert_last(void);
void insert_at_pos(void);
void display_left_right(void);
void display_right_left(void);

struct node *start=NULL;
int main()
{
  create();
  insert_first();
  insert_last();
  insert_at_pos();
  display_left_right();
  display_right_left();
}

void create(void)
{
    struct node *temp, *new;
    int n, i = 1;
    scanf("%d", &n);
    while(i <= n)
    {
        new = (struct node *) malloc (sizeof(struct node));
        scanf("%d", &new->data);
        
        if(i == 1)
        {
            start = new;
            start->prev = new;
            start->next = new;
            temp = new;
        }
        else
        {
            new->prev = temp;
            temp->next = new;
            temp = new;
        }
        i++;
    }
    temp->next = start;
    start->prev = temp;
}
void display_left_right(void)
{
    struct node *i;
    for(i = start; i->next != start; i = i->next)
    {
        printf("%d ", i->data);
    }
    printf("%d ", i->data);
    printf("\n");
}
void display_right_left(void)
{
    struct node *i;
    for(i = start; i->next != start; i = i->next);
    for(; i!= start; i= i->prev)
    {
        printf("%d ", i->data);
    }
    printf("%d ", i->data);
    printf("\n");
}
void insert_first(void)
{
    struct node *new;
    new = (struct node *) malloc (sizeof(struct node));
    scanf("%d", &new->data);
    new->prev = start->prev;
    start->prev = new;
    new->next = start;
    new->prev->next = new;
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
    i->prev->next = new;
    new->next = i;
    new->prev = i->prev;
    i->prev = new;
}
void insert_last(void)
{
    struct node *new, *i;
    new = (struct node *) malloc (sizeof(struct node));
    scanf("%d", &new->data);
    for(i = start; i->next != start; i = i->next);
    i->next = new;
    new->next = start;
    new->prev = i;
    start->prev = new;
}