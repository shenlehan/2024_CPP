#include <iostream>
#include <string>
using namespace std;

class stack {
private:
    struct node {
        int val;
        struct node *prev;
    } *head = NULL, *new_node;

    int tot = 0;

public:
    int top() {
        if (head != NULL)
            return head->val;
    }
    
    void pop() {
        if (tot == 0) {
            return;
        }
        if (head->prev != NULL)
            head = head->prev;
        else head = NULL;
        --tot;
    }
    
    void push(int x) {
        ++tot;
        new_node = new node;
        new_node->val = x;
        new_node->prev = head;
        head = new_node;
    }

    int size() {
        return tot;
    }

} s, *p;

int main() {
#if 0
    int x;
    string op;
    while (1) {
        cin >> op;
        if (op == "push") {
            cin >> x;
            s.push(x);
        } else if (op == "pop") {
            s.pop();
        } else if (op == "size") {
            cout << s.size() << endl;
        } else if (op == "top") {
            cout << s.top() << endl;
        } else {
            return 0;
        }
    }
#endif
    p = new stack;
    stack &a = *p;
    a.push(1); 
    return 0;
}