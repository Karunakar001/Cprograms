#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node *lbranch;
    struct Node *rbranch;
};
// 
struct Node *createNode(int data)
{
    struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->lbranch=NULL;
    newNode->rbranch=NULL;
    newNode->data=data;
    return newNode;
}

// void insert(int data)
// {
//     //struct Node *n=createNode(data);
//     if(root==NULL)
//     {
//         struct Node *n=createNode(data);
//         root=n;
//         return;
//     }
//     root_ref=root;
//     else if(root_ref==NULL)
//     {
//         struct Node *n=createNode(data);
        
//     }
//     //root_ref=root;
//     else if((data)>root_ref->data)
//     {
//         root_ref=root_ref->rbranch;
//         insert(data);
//     }
//     else
//     {ZA
//         root_ref=root_ref->lbranch;
//         insert(data);
//     }
// }

struct Node *insert(struct Node *root,int data)
{
    if(root==NULL)
    {
        return createNode(data);
    }
    else if(data<root->data)
        root->lbranch=insert(root->lbranch,data);
    else if(data>root->data)
        root->rbranch=insert(root->rbranch,data);
    return root;
}





void inOrder(struct Node *root)
{
    if(root==NULL)
        return;
  inOrder (root->lbranch);
  printf ("%d ", root->data);
  inOrder (root->rbranch);
}

void preOrder(struct Node *root)
{
    if(root==NULL)
        return;
    printf ("%d ", root->data);
    preOrder (root->lbranch);
    preOrder (root->rbranch);
}

void postOrder(struct Node *root)
{
    if(root==NULL)
        return;
    postOrder (root->lbranch);
    postOrder (root->rbranch);
    printf ("%d ", root->data);
}

int height(struct Node *root)
{
    int lcount=0,rcount=0;
    if(root==NULL)
        return 0;
    struct Node *root_ref=root;
    while(root_ref!=NULL)
    {
        root_ref=root_ref->lbranch;
        lcount++;
    }
    root_ref=root;
    while(root_ref!=NULL)
    {
        root_ref=root_ref->rbranch;
        rcount++;
    }
    if(lcount<rcount)
    {
        printf("%d\n",rcount);
    }
    else{
        printf("%d\n",lcount);
    }
    
//     int lcount=0,rcount=0;
//     if(root==NULL)
//         return 0;
//     lcount=height(root->lbranch);
//     rcount=height(root->rbranch);
//     if(lcount<rcount)
//     {
//         return rcount+1;
//     }
//     else
//     {
//         return lcount+1;
//     }
}
    
    
    
    
    
    
    
    



void main()
{
    int h;
    struct Node *root=NULL;
    root=insert(root,10);
    root=insert(root,5);
    root=insert(root,6);
    root=insert(root,7);
    root=insert(root,8);
    root=insert(root,9);
    root=insert(root,30);
    root=insert(root,2);
    root=insert(root,1);
    root=insert(root,0);
    inOrder(root);
    printf("\n");
    preOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
    h=height(root);
    printf("%d\n",h);
}










