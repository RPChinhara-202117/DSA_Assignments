#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;  
};

node *start = NULL;

void insertNode(int info)
{
    node *temp = new node;
    temp -> data = info;
    temp -> next = start;
    start = temp;
}

void deleteNode()
{
    node *temp, *prevnode;
    if(start == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = start;
        while(temp->next != 0)
        {
            prevnode = temp;
            temp = temp->next;
        }
        free(temp);
        prevnode->next = 0;
    }
}

void updateNode(int old, int newData)
{
    int pos = 0, flag = 1;
    node *temp;
    
    if(start == NULL)
    {
        printf("Linked List is empty\n");
    }
    else
    {
        temp = start;
        while(temp->next != NULL)
        {
            if(temp->data == old)
            {
                temp->data = newData;
                printf("%d found at position %d, replaced with %d\n", old, pos, newData);
                flag = 0;
            }
            else
            {
                temp = temp->next;
                pos++;
            }
        }
    }
    if(flag == 1)
        printf("%d does not exist in the list\n", old);
}

void reverseLL()
{
    node *t1, *t2, *temp;
    t1 = t2 = NULL;

    if(start == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while(start != NULL)
        {
            //Reversing of points
            t2 = start->next;
            start->next = t1;
            t1 = start;
            start = t2;
        }
        start = t1;

        //New head node
        temp = start;
        printf("Reversed linked list is: ");
        while(temp != NULL)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void traverseNode()
{
    node *temp;
    if (start == NULL)
        printf("\nList is empty\n");
    else
    {
        temp = start;
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    insertNode(5);
    insertNode(4);
    insertNode(9);
    insertNode(6);
    insertNode(2);
    traverseNode();
    deleteNode();
    traverseNode();
    updateNode(9, 4);
    traverseNode();
    reverseLL();

    return 0;
}