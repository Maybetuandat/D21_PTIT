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
int Lv[1005], a[50];
void duyet(Tree T, int lv)
{
    if (T == NULL)
    {
        return;
    }
    Lv[lv]++;
    duyet(T->left, lv + 1);
    duyet(T->right, lv + 1);
}
int check()
{
    for (int i = 0; i <= 30; i++)
    {
        if (Lv[i] == 0)
            return 1;
        if (Lv[i] != a[i])
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i <= 1000; i++)
            Lv[i] = 0;
        for (int i = 0; i <= 30; i++)
        {
            a[i] = pow(2, i);
        }
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
        duyet(root, 0);
        if (check() == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
