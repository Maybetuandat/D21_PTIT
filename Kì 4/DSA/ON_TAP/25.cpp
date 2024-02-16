#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    struct node *left, *right;
    int data;
} *Tree;
int a[1005];
Tree root;
node *creatNode(int value)
{
    node *tmp = new node;
    tmp->data = value;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}
Tree BuildTree(int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Tree res = creatNode(a[mid]);
    res->left = BuildTree(l, mid - 1);
    res->right = BuildTree(mid + 1, r);
    return res;
}
void preOrder(Tree T)
{
    cout << T->data << ' ';
    if (T->left != NULL)
    {
        preOrder(T->left);
    }
    if (T->right != NULL)
    {
        preOrder(T->right);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        root = NULL;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        root = BuildTree(0, n - 1);
        preOrder(root);
        cout << endl;
    }
    return 0;
}
