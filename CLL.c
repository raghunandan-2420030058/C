#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *link;
};

void create(void);
void display(void);

struct node *start=NULL;
int main()
{
  create();
  display();
}

void create(void)
{
    int n;
    struct node *new, *temp;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        new = (struct node *) malloc (sizeof(struct node));
        scanf("%d", &new->data);
        new->link = start;
        if(start == NULL)
        {
            start = new;
            new->link = start;
        }
        else
        {
            temp = start;
            while(temp->link != start)
            {
                temp = temp->link;
            }
            temp->link = new;
            new->link = start;
        }
    }
}
void display(void)
{
    struct node *temp;
    if(start == NULL)
    {
        printf("List is empty. \n");
        return;
    }
    temp = start;
    do {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    while(temp != start);
    printf("\n");
}