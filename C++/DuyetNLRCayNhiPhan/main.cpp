#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* pLeft;
    node* pRight;
};

typedef struct node NODE;
typedef NODE* Tree;

void InitTree(Tree &t){
    t = NULL;
}

void AddNodeToTree(Tree &t, int x){
    if(t == NULL){
        NODE* tmp = new NODE;
        tmp->data = x;
        tmp->pLeft = NULL;
        tmp->pRight = NULL;
        t = tmp;
    }
    else{
        if(x < t->data){
            AddNodeToTree(t->pLeft, x);
        }
        else if(x > t->data){
            AddNodeToTree(t->pRight, x);
        }
    }
}

// Tại sao "Tree t" mà không phải "Tree &t" vì ta chỉ duyệt cây mà ko thay đổi giá trị của mỗi node trong cây.
void AccessNLRAllTree(Tree t){
    if(t == NULL){
        return;
    }
    else{
        cout << t->data << " ";
        AccessNLRAllTree(t->pLeft);
        AccessNLRAllTree(t->pRight);
    }
}

void AccessNRLAllTree(Tree t){
    if(t == NULL){
        return;
    }
    else{
        cout << t->data << " ";
        AccessNRLAllTree(t->pRight);
        AccessNRLAllTree(t->pLeft);
    }
}

bool check = false;

NODE* FindingNode(Tree t, int x){
    if(t == NULL){
        return NULL;
    }
    else{
        if(x < t->data){
            FindingNode(t->pLeft, x);
        }
        else if(x == t->data){
            check = true;
            return t;
        }
        else{
            FindingNode(t->pRight, x);
        }
    }
    return NULL;
}

// Xóa node
void DeleteNode(Tree &t, int x){
    if(t == NULL){
        return;
    }
    else{
        if(x < t->data){
            DeleteNode(t->pLeft, x);
        }
        else if(x > t->data){
            DeleteNode(t->pRight, x);
        }
        else{
            NODE* tmp = t;
            if(t->pLeft != NULL){
                t = t->pLeft;
            }
            else if(t->pRight != NULL){
                t = t->pRight;
            }
            else{
                t = NULL;
            }
            //delete tmp;
            return;
        }
    }
    return;
}

int main()
{
    Tree t;
    InitTree(t);
    cout << t << endl;
    cout << "Success init tree" << endl;
    cout << "Tree 1" << endl;
    AddNodeToTree(t, 2);
    AddNodeToTree(t, -1);
    AddNodeToTree(t, 3);
    AddNodeToTree(t, 0);
    AddNodeToTree(t, -2);
    AddNodeToTree(t, 4);
    cout << "Print tree \n";
    AccessNLRAllTree(t);
    FindingNode(t, 4);
    if(check){
        cout << "\nNode has data 3 is in your tree!";
    }
    else{
        cout << "\nNot found!";
    }
    DeleteNode(t, -1);
    cout << endl;
    AccessNLRAllTree(t);
    return 0;
}
