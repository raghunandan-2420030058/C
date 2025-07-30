#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *start = NULL;

void create(void)
{
    struct node *temp, *new;
    char ch ='y';
    start = (struct node *) malloc (sizeof(struct node *));
    printf("\nEnter any number: ");
    scanf("%d", &start->data);
    temp = start;
    while (ch == 'y' || ch == 'Y')
    {
        new = (struct node *) malloc (sizeof(struct node *));
        printf("\nEnter any number: ");
        scanf("%d", &new->data);
        temp->link = new;
        temp = new;
        printf("\nDo you want to continue?");
        ch = getch();
    }
    temp -> link = NULL;
}

void display(void)
{
    struct node *i;
    for(i = start; i != NULL; i = i->link)
    {
        printf("%d->", i->data);
    }
}

void insert_first(void)
{
    struct node *new;
    new = (struct node *) malloc (sizeof(struct node *));
    printf("\nEnter any number to add in the Beginning: ");
    scanf("%d", &new->data);
    new -> link = start;
    start = new;
    printf("\n After inserting node at first list is\n");
    display();
}

void insert_last(void)
{
    struct node *new, *x, *i;
    new = (struct node *) malloc (sizeof(struct node *));
    printf("\nEnter any number to add in the end: ");
    scanf("%d", &new->data);
    for ( i = start; i != NULL; i = i->link)
    {
        x = i;
    }
    x -> link = new;
    new -> link = NULL;
    printf("\n After inserting node at last list is\n");
    display();
}

void insert_mid(void)
{
    struct node *new, *x, *i;
    int no;
    new = (struct node *) malloc (sizeof(struct node *));
    printf("\nEnter any number to add in the middle: ");
    scanf("%d", &new->data);
    printf("\nEnter the number after which this new number has to be inserted: ");
    scanf("%d", &no);
    for(i = start; i -> data!= no; i = i -> link)
    {
        x = i;
    }
    x -> link = new;
    new -> link = i;
    printf("\n After inserting node at middle list is\n");
    display();
}

void delete_first(void)
{
    start = start -> link;
    printf("\n After deleting first node list is\n");
    display();
}

void delete_last(void)
{
    struct node *x, *i;
    for(i = start; i -> link != NULL; i = i -> link)
    {
        x = i;
    }
    x -> link = NULL;
    printf("\n After deleting last node list is\n");
    display();
}

void delete_mid(void)
{
    struct node *x, *i;
    int no;
    printf("\nEnter the number which has to be deleted");
    scanf("%d", &no);
    for(i = start; i -> data != no; i = i -> link)
    {
        x = i;
    }
    x -> link = i -> link;
    printf("\n After deleting middle node list is\n");
    display();
}

int main()
{ 
    create();
    display();
    insert_first();
    insert_last();
    insert_mid();
    delete_first();
    delete_last();
    delete_mid();
    return 0;
}