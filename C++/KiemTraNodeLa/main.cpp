#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int cmp = 0;
bool res = true;
struct Node{
    int data;
    int level = 0;
    Node *left;
    Node *right;
};

Node *CreateNode(int init){
    Node *p = new Node;
    p->data = init;
    p->level = 0;
    p->left = NULL;
    p->right = NULL;
    return p;
}

typedef Node* Tree;

void CreateTree(Tree &root)
{
    root = NULL;
}

Node* DuyetCay(Tree root, int data){
    if(root != NULL){
        if(root->data == data){
            return root;
        }
        DuyetCay(root->left, data);
        DuyetCay(root->right, data);
    }
}

bool isNodeLeaf(Node* node){
    if(node->left == NULL && node->right == NULL){
        return true;
    }
    return false;
}

Node* TimNodeLa(Node* root){
    if(root != NULL){
        cout << root->data << " " << root->level << " " << root->left << " " << root->right << endl;
        if(isNodeLeaf(root)){
            if(cmp != 0){
                if(cmp != root->level){
                    res = false;
                }
            }
            else{
                cmp = root->level;
            }
        }
        TimNodeLa(root->left);
        TimNodeLa(root->right);
    }
}



int main()
{
    Node* myTree = new Node;
    //CreateTree(myTree);
    int n;
    cin >> n;
    int a, b;
    char c;
    cin >> a >> b >> c;
    cout << a << " " << b << " " << c << endl;
    myTree->data = a;
    cout << myTree->data << endl;
    Node *newNode = CreateNode(b);
    newNode->level = myTree->level + 1;
    if(c == 'L'){
        myTree->left = newNode;
    }
    else{
        myTree->right = newNode;
    }
    TimNodeLa(myTree);
    cout << "================" << endl;
    for(int i = 1; i < n; i++){
        cin >> a >> b >> c;
        Node* tmpNode = CreateNode(b);
        Node* tmp;
        if(DuyetCay(myTree, a) != NULL){
            DuyetCay(myTree, a);
            cout << DuyetCay(myTree, a)->data << " " << DuyetCay(myTree, a)->left << " " << DuyetCay(myTree, a)->right << endl;
        }
        tmpNode->level = DuyetCay(myTree, a)->level + 1;
        if(c == 'L'){
            DuyetCay(myTree, a)->left = tmpNode;
        }
        else{
            DuyetCay(myTree, a)->right = tmpNode;
        }
    }
    //Node *query = myTree;
    cout << "Tim NODE la" << endl;
    TimNodeLa(myTree);
    if(res) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
