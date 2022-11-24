#include <iostream>
using namespace std;

struct bst
{
    int data;
    struct bst *leftc, *rightc;
} * root, *temp;

void create(int value)
{
    temp = (struct bst *)malloc(sizeof(struct bst));
    temp->data = value;
    temp->leftc = NULL;
    temp->rightc = NULL;

    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        search(root);
    }
}

void search(struct bst *groot)
{
    if (temp->data < groot->data && groot->leftc == NULL)
    {
        groot->leftc = temp;
    }
    else if (temp->data < groot->data && groot->leftc != NULL)
    {
        search(groot->leftc);
    }
    else if (temp->data > groot->data && groot->rightc == NULL)
    {
        groot->rightc = temp;
    }
    else if (temp->data > groot->data && groot->rightc != NULL)
    {
        search(groot->rightc);
    }
}

void preorder(struct bst *proot)
{
    if (proot == NULL)
    {
        cout << "Tree not present" << endl;
    }
    else
    {
        cout << proot->data << endl;

        if (proot->leftc != NULL)
        {
            preorder(proot->leftc);
        }
        if (proot->rightc != NULL)
        {
            preorder(proot->rightc)
        }
    }
}

void inorder(struct bst *iroot)
{
    if (iroot == NULL)
    {
        cout << "Tree not present" << endl;
    }
    else
    {
        if (proot->leftc != NULL)
        {
        }
    }
}

int main()
{

    return 0;
}