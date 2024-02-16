#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    node *left, *right;
} *Tree;
Tree creatNode(int value)
{
    Tree tmp = new node;
    tmp->data = value;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}
void bTree(Tree &T, int val)
{
    if (T == NULL)
    {
        T = creatNode(val);
        return;
    }
    if (T->data > val)
    {
        bTree(T->left, val);
    }
    else
        bTree(T->right, val);
}
void postOrder(Tree T)
{
    if (T->left != NULL)
        postOrder(T->left);
    if (T->right != NULL)
        postOrder(T->right);
    cout << T->data << ' ';
}
void preOrder(Tree T)
{
    cout << T->data << ' ';
    if (T->left != NULL)
        preOrder(T->left);
    if (T->right != NULL)
        preOrder(T->right);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Tree root = NULL;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            bTree(root, x);
        }
        postOrder(root);
        cout << endl;
    }
}
