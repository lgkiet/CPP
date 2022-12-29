
#include <iostream>
#include <queue>
#include <cmath>

using namespace std;
struct TNODE {
	int key;
	TNODE* pLeft;
	TNODE* pRight;
};
typedef TNODE* TREE;

void CreateEmptyTree(TREE &T) {
	T = NULL;
}
TNODE* CreateTNode(int x) {
	TNODE *p=new TNODE; //cấp phát vùng nhớ động
	p->key = x; //gán trường dữ liệu của node = x
	p->pLeft = NULL;
	p->pRight = NULL;
	return p;
}
int Insert(TREE &T, TNODE *p) {
	if (T) {
		if (T->key == p->key) return 0;
		if (T->key > p->key)
			return Insert(T->pLeft, p);
		return Insert(T->pRight, p);
	}
	T = p;
	return 1;
}
void CreateTree(TREE &T){
	int x;
	do {
		cin >> x;
		if(x==-1) break;
		Insert(T, CreateTNode(x));
	}while(true);
}
int CountNode(TREE root)
{
    if(root == NULL) return 0;
    return 1 + CountNode(root->pLeft) + CountNode(root->pRight);
}

bool IsCompleteBST(TREE root) {
    if(root == NULL) return true;
    bool flag = false;
    queue<TREE> q;
    q.push(root);

    while(q.empty() == false)
    {
        TNODE *p = q.front();
        q.pop();

        if(p->pLeft)
        {
            if(flag)
                return false;
            q.push(p->pLeft);
        }
        else{
            flag = true;
        }

        if(p->pRight)
        {
            if(flag)
                return false;
            q.push(p->pRight);
        }
        else{
            flag = true;
        }
    }

    return true;
}
int main() {
	TREE T; //hay: TNODE* T;
	T = NULL; // Khoi tao cay T rong, or: CreateEmptyTree(T)
	CreateTree(T);

	if(T==NULL) cout << "Empty Tree.";
	else cout << boolalpha << IsCompleteBST(T);
	return 0;
}