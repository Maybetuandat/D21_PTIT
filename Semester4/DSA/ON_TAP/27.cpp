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
void postOrder(Tree T)
{

    if (T->left != NULL)
    {
        postOrder(T->left);
    }
    if (T->right != NULL)
    {
        postOrder(T->right);
    }
    cout << T->data << ' ';
}
int dem(Tree T)
{
    int kq = 0;
    if (T->left == NULL && T->right == NULL)
    {
        kq++;
        return kq;
    }
    if (T->left != NULL)
    {
        int t = dem(T->left);
        kq += t;
    }
    if (T->right != NULL)
    {
        int t = dem(T->right);
        kq += t;
    }
    return kq;
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
        cout << dem(root);
        cout << endl;
    }
    return 0;
}
