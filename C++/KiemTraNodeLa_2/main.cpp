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

void firstInitTree(Tree &t, int x){
    if(t == NULL){
        NODE* tmp = new NODE;
        tmp->data = x;
        tmp->pLeft = NULL;
        tmp->pRight = NULL;
        t = tmp;
        return;
    }
}

void AddNodeToTree(Tree &t, int x, char a){
//    if(t == NULL){
//        NODE* tmp = new NODE;
//        tmp->data = x;
//        tmp->pLeft = NULL;
//        tmp->pRight = NULL;
//        t = tmp;
//    }
//    else{
//        if(x < t->data){
//            AddNodeToTree(t->pLeft, x);
//        }
//        else if(x > t->data){
//            AddNodeToTree(t->pRight, x);
//        }
//    }
    if(t == NULL){
        NODE* tmp = new NODE;
        tmp->data = x;
        tmp->pLeft = NULL;
        tmp->pRight = NULL;
        t = tmp;
    }
    else {
        if(a == 'R'){
            NODE* tmp = new NODE;
            tmp->data = x;
            tmp->pRight = tmp;
        }
        else{
            NODE* tmp = new NODE;
            tmp->data = x;
            tmp->pLeft = tmp;
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

void FindingNode(Tree &t, int x, char a, int value){
    if(t == NULL) return;
    if(x == t->data){
        check = true;
        //cout << "Dia chi o nho :" << &t << endl;
        if(a == 'R'){
            NODE* tmp = new NODE;
            tmp->data = value;
            tmp->pLeft = NULL;
            tmp->pRight = NULL;
            t->pRight = tmp;
        }
        else{
            NODE* tmp = new NODE;
            tmp->data = value;
            tmp->pLeft = NULL;
            tmp->pRight = NULL;
            t->pLeft = tmp;
        }
        return;
    }
    else{
        FindingNode(t->pLeft, x, a, value);
        FindingNode(t->pRight, x, a, value);
    }
    return;
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
    int n;
    char a;
    cin >> n;
    int tmp1 = 0, tmp2 = 0;
    cin >> tmp1 >> tmp2 >> a;
    firstInitTree(t, tmp1);
    //cout << &t << " " << &tmp << endl;
    FindingNode(t, tmp1, a, tmp2);
    //cout << "Access: " << endl;
    //AccessNRLAllTree(t);
    for(int i = 1; i < n; i++){
        cin >> tmp1 >> tmp2 >> a;
        FindingNode(t, tmp1, a, tmp2);
        //cout << &tmp << " " << &(FindingNode(t, tmp1)) << endl;
    }

    AccessNLRAllTree(t);

    return 0;
}
