#include <iostream>
using namespace std;
struct bst
{
    int data;
    struct bst *leftc, *rightc;
} * root, *temp;

void search(struct bst *troot)
{
    if (temp->data < troot->data && troot->leftc == NULL)
    {
        troot->leftc = temp;
    }
    else if (temp->data < troot->data && troot->leftc != NULL)
    {
        search(troot->leftc);
    }
    else if (temp->data > troot->data && troot->rightc == NULL)
    {
        troot->rightc = temp;
    }
    else if (temp->data > troot->data && troot->rightc != NULL)
    {
        search(troot->rightc);
    }
}

void create_bst(int value)
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

void search_ele(int value, struct bst *groot)
{

    if (groot->data == value)
    {
        cout << "Element found";
    }
    else if (value > groot->data)
    {
        search_ele(value, groot->rightc);
    }
    else if (value < groot->data)
    {
        search_ele(value, groot->leftc);
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
            preorder(proot->rightc);
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

        if (iroot->leftc != NULL)
        {
            preorder(iroot->leftc);
        }

        cout << iroot->data << endl;

        if (iroot->rightc != NULL)
        {
            preorder(iroot->rightc);
        }
    }
}

void postorder(struct bst *froot)
{

    if (froot == NULL)
    {
        cout << "Tree not present" << endl;
    }
    else
    {

        if (froot->leftc != NULL)
        {
            preorder(froot->leftc);
        }

        if (froot->rightc != NULL)
        {
            preorder(froot->rightc);
        }
        cout << froot->data << endl;
    }
}

int main()
{
    create_bst(100);
    create_bst(200);
    create_bst(50);
    create_bst(10);
    create_bst(150);
    create_bst(250);
    create_bst(30);
    cout << "preorder" << endl;
    preorder(root);
    cout << "inorder" << endl;
    inorder(root);
    cout << "postorder" << endl;
    postorder(root);

    search_ele(230, root);

    return 0;
}