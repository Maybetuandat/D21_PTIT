#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    node *left, *right;
} *Tree;
Tree root1, root2;
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
bool check(Tree root1, Tree root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1->data != root2->data)
        return false;
    if (root1->left == NULL && root2->left != NULL)
        return false;
    else if (root1->left != NULL && root2->left == NULL)
        return false;
    else if (root1->right == NULL && root2->right != NULL)
        return false;
    else if (root1->right != NULL && root2->right == NULL)
        return false;
    else if (root1->data == root2->data)
    {
        return check(root1->left, root2->left) && check(root1->right, root2->right);
    }
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
        root1 = NULL;
        int par, child;
        char c;
        cin >> par >> child >> c;
        root1 = creatNode(par);
        BuildTree(root1, c, par, child);
        n -= 1;
        for (int i = 1; i <= n; i++)
        {
            cin >> par >> child >> c;
            BuildTree(root1, c, par, child);
        }
        cin >> n;
        root2 = NULL;
        cin >> par >> child >> c;
        root2 = creatNode(par);
        BuildTree(root2, c, par, child);
        n -= 1;
        for (int i = 1; i <= n; i++)
        {
            cin >> par >> child >> c;
            BuildTree(root2, c, par, child);
        }
        if (check(root1, root2))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}
