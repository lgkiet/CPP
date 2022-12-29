#include <iostream>
using namespace std;
#define M 100

struct NODE
{
    int key;
    NODE *pNext;
};
// Khai báo kiểu con trỏ chỉ node
typedef NODE *NODEPTR;
typedef NODEPTR HASHTABLE[M];

NODE *CreateNode(int x)
{
    NODE *p;
    p = new NODE;
    p->key = x;
    p->pNext = NULL;
    return p;
}
void AddTail(NODE *&head, int x)
{
    NODE *p = CreateNode(x);
    if (head == NULL)
        head = p;
    else
    {
        NODE *i = head;
        while (i->pNext != NULL)
        {
            i = i->pNext;
        }
        i->pNext = p;
    }
}

void DeleteHead(Node *&l)
{
    if (l != NULL)
    {
        Node *p = l;
        l = l->next;
        delete p;
    }
}

void DeleteAfter(Node *&q)
{
    Node *p = q->next;
    if (p != NULL)
    {
        q->next = p->next;
        delete p;
    }
}

void DeleteNode(HashTable &HT, int k)
{
    int i = Hash(k);
    Node *p = HT[i];
    Node *q = p;
    while (p != NULL && p->key != k)
    {
        q = p;
        p = p->next;
    }
    if (p == NULL)
        cout << k << " not found!" << endl;
    else if (p == HT[i])
        DeleteHead(HT[i]);
    else
        DeleteAfter(q);
}

int HF(int numbucket, int key) { return key % numbucket; }

void InitHashTable(HASHTABLE &H, int numbucket)
{
    for (int i = 0; i < numbucket; i++)
        H[i] = NULL;
}

void CreateHashTable(HASHTABLE H, int &numbucket)
{
    cin >> numbucket;
    InitHashTable(H, numbucket);
    int a, i;
    while (a != -1)
    {
        cin >> a;
        if (a == -1)
            break;
        i = HF(numbucket, a);
        AddTail(H[i], a);
    }
}

void TraverseBucket(HASHTABLE H, int i)
{
    NODEPTR p = H[i];
    while (p != NULL)
    {
        cout << " --> " << p->key;
        p = p->pNext;
    }
}
void Traverse(HASHTABLE H, int numbucket)
{
    for (int i = 0; i < numbucket; i++)
    {
        cout << i;
        TraverseBucket(H, i);
        cout << endl;
    }
}

bool isExist(NODEPTR list, int key)
{
    NODEPTR p = list;
    while (p != NULL)
    {
        if (p->key = key)
            return true;
        p = p->pNext;
    }
    return false;
}
bool Remove(HASHTABLE H, int numbucket, int key)
{
    int index = HF(numbucket, key);
    if (H[index] == NULL || isExist(H[index], key) == false)
        return false;
    else
        DeleteNode(H[index], key);
}

int main()
{
    HASHTABLE H;
    int numbucket;
    int x;

    CreateHashTable(H, numbucket);

    Traverse(H, numbucket);

    cin >> x;
    if (Remove(H, numbucket, x))
    {
        cout << endl
             << x << ": Delete Successful." << endl
             << endl;
        Traverse(H, numbucket);
    }
    else
        cout << endl
             << x << ": Delete Failed." << endl
             << endl;

    return 0;
}
