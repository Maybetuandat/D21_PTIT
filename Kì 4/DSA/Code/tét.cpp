#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node *left, *right;
} *Tree;
int n, pre[1005], in[1005];
node *Create_node(int value) // tao nut
{
    node *tmp = new node;
    tmp->data = value;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}
void preOrder(node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
void inOrder(node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}
void postOrder(node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}
int findIndex(int x, int in[], int start, int end)
{
    int i = start, Found = 0;
    while (i <= end && !Found)
    {
        if (x == in[i])
        {
            Found = 1;
        }
        else
            i++;
    }
    return i;
}
node *buildTree(int pre[], int in[], int start, int end, int preIndex)
{
    node *N = NULL;
    if (start <= end)
    {
        N = Create_node(pre[preIndex]);
        (preIndex)++;
        int Mid = findIndex(N->data, in, start, end);
        N->left = buildTree(pre, in, start, Mid - 1, preIndex);
        N->right = buildTree(pre, in, Mid + 1, end, preIndex);
    }
    return N;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> in[i];
        for (int i = 0; i < n; i++)
            cin >> pre[i];
        int s = 0;
        node *N = buildTree(pre, in, 0, n - 1, s);
        postOrder(N);
        cout << endl;
    }
    return 0;
}
