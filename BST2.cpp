#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int dat)
    {
        this->data=dat;
        this->left=NULL;
        this->right=NULL;
    }

};
Node *findnumber(Node *root,int num)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(num<root->data)
    {
        return findnumber(root->left,num);
    }
    else if(num>root->data)
    {
        return findnumber(root->right,num);
    }
    else
        return root;
}
void postOrderTraverse(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    //cout<<":::::::::::::"<<endl;
    postOrderTraverse(root->left);
    postOrderTraverse(root->right);
    cout<<root->data<<endl;
}
void preOrderTraverse(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<endl;
    preOrderTraverse(root->left);
    preOrderTraverse(root->right);
}
void inOrderTraverse(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    inOrderTraverse(root->left);
    cout<<root->data<<endl;
    inOrderTraverse(root->right);
}
Node* insert(Node *root,int dat)
{
    if(root==NULL)
    {
        return new Node(dat);
    }
    else if(dat<root->data)
    {
        root->left=insert(root->left,dat);
    }
    else
    {
        root->right=insert(root->right,dat);
    }
    return root;
}
Node *Findmin(Node *node)
{
    if(node==NULL)
    {
        return NULL;
    }
    if(node->left)
        return Findmin(node->left);
    else
        return node;
}
Node *deleteNode(Node *root,int dat)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(dat<root->data)
    {
        root->left=deleteNode(root->left,dat);
    }
    else if(dat>root->data)
    {
        root->right=deleteNode(root->right,dat);
    }
    else
    {
        if(root->left==NULL)
        {
            Node *tem=root->right;
            root=NULL;
            return tem;
        }
        else if (root->right==NULL)
        {
            Node *tem=root->left;
            root=NULL;
            return tem;
        }
        Node *tem=Findmin(root->right);
        root->data=tem->data;
        root->right = deleteNode(root->right, tem->data);
    }
}
int main()
{
    Node *root,*temp;
    root=NULL;
    root=insert(root,10);
    insert(root,9);
    insert(root,3);
    insert(root,91);
    insert(root,1);
    insert(root,5);
    insert(root,200);
    insert(root,2);
    cout<<"...........IN............"<<endl;
    inOrderTraverse(root);
    cout<<"...........POST............"<<endl;
    postOrderTraverse(root);
    cout<<"............PRE..........."<<endl;
    preOrderTraverse(root);
    int num;
    cin>>num;
    temp=findnumber(root,num);
            if(temp==NULL)
            {
                cout<<"Element is not found"<<endl;
            }
            else
            {
                cout<<"Element "<<temp->data<<" is Found\n";
            }
    deleteNode(root, 3);
    cout<<"............PRE..........."<<endl;
    preOrderTraverse(root);

}
