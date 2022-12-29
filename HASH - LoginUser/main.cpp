#include <iostream>
#include <string>
using namespace std;

#define tableSize 10000

struct PASSWORD_NODE
{
    string password;
    PASSWORD_NODE *pNext;
};
struct USER_NODE
{
    string username;
    PASSWORD_NODE *passHead;
    USER_NODE *pNext;
};

// Khai báo kiểu con trỏ chỉ node
typedef USER_NODE *NODEPTR;
typedef NODEPTR HASHTABLE[tableSize];

NODE *CreateNode(string x)
{
    NODE *p;
    p = new NODE;
    p->key = x;
    p->pNext = NULL;
    return p;
}

void AddTail(NODE *&head, string x)
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

int HF(string user)
{
    int s = 0;
    for (int i = 0; i < user.length(); i++)
        s += int(user[i]) * i;
    return s % numbucket;
}

int HF(string user, int i)
{
    return (HF(user) + i) % tableSize;
}

void CreatEmptyHashTable(HASHTABLE H)
{
    for (int i = 0; i < tableSize; i++)
    {
        H[i] = NULL;
        H[i].passHead = NULL;
    }
}
void CreateHashTable(HASHTABLE H)
{
    CreatEmptyHashTable(H);
    int N, M;
    string user, pass;
    int iter = 0;
    while (iter < N)
    {
        cin >> user >> pass;
        int i = HF(user);
        while (H[i].username)
    }
}

int main()
{
    HASHTABLE H;

    return 0;
}