#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *temp, *newnode, *head = NULL, *nn;
    char a[10]; // Increase array size to accommodate "Yes" or "No"

    while (1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1;
        }

        printf("Enter  the value\n");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to add another  node?  Type Yes/No \n");
        scanf("%s", a);
        if (strcmp(a, "No") == 0)
        {
            break;
        }
    }

    printf("The elements in the linked list are  ");
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\nEnter  the element to be deleted \n");
    int deleteValue;
    scanf("%d", &deleteValue);
    if (head == NULL)
    {
        printf("List is empty, nothing to delete.\n");
    }
    else if (head->data == deleteValue)
    {
        nn = head;
        head = head->next;
        free(nn);
    }
    else
    {
        temp = head;
        while (temp->next != NULL && temp->next->data != deleteValue)
        {
            temp = temp->next;
        }

        if (temp->next == NULL)
        {
            printf("Element not found in the linked list.\n");
        }
        else
        {
            nn = temp->next;
            temp->next = nn->next;
            free(nn);
        }
    }

    printf("The elements in the linked list after deleting the element are  ");
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        nn = temp;
        temp = temp->next;
        free(nn);
    }

    return 0;
}
