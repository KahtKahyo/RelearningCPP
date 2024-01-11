#include <stdio.h>

typedef struct
{
    void *next;
    int data;
} Node;

Node *head = NULL;

void printMenu()
{
    char *opt[] = {"Add", "Remove", "Insert", "Quit"};

    printf("Here's are your options: ");

    for (int i = 0; i <= sizeof(opt); i++)
    {
        printf("%d. %s.\n", i, opt[i]);
    }
}

int main(int argc, char **argv)
{
    printMenu();

    int option = -1;
    return 0;
}