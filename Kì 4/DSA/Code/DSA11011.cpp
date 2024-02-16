#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    node *left, *right;
} *Tree;
Tree root;
Tree creatNode(int value)
{
    Tree tmp = new node;
    tmp->data = value;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}
void BuildTree(Tree &T, char c, int par, int child)
{
    if (T == NULL)
        return;
    if (T != NULL)
    {
        if (T->data == par)
        {
            if (c == 'L')
            {
                T->left = creatNode(child);
            }
            else
                T->right = creatNode(child);
            return;
        }
        BuildTree(T->left, c, par, child);
        BuildTree(T->right, c, par, child);
    }
}
bool check(Tree T)
{
    if (T == NULL)
        return true;
    if (T->left != NULL && T->right != NULL || (T->left == NULL && T->right == NULL))
    {
        return check(T->left) && check(T->right);
    }
    else
        return false;
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        root = NULL;
        int par, child;
        char c;
        cin >> par >> child >> c;
        root = creatNode(par);
        BuildTree(root, c, par, child);
        n -= 1;
        for (int i = 1; i <= n; i++)
        {
            cin >> par >> child >> c;
            BuildTree(root, c, par, child);
        }
        if (check(root))
            cout << "1\n";
        else
            cout << "0\n";
    }
}
