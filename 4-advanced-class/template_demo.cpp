#include <iostream>
#include <cstdlib>
#include <utility>
#include <algorithm>
using namespace std;

template<class T>
class stack;

template<class T>
class node {
    friend stack<T>;
private:

    T val;
    node *prev, *next;

public:
    node() {
        val = 0;
        prev = next = NULL;
    }

    node(T _val):val(_val) {
        prev = next = NULL;
    }

    ~node() { }

};

template<class T>
class stack {
private:
    
    node<T> *head, *new_node;
    size_t sz;

public:

    stack<T>() {
        head = new_node = NULL;
        sz = 0;
    }
    
    ~stack<T>() {

    }

    T top() {
        if (head != NULL)
            return head->val;
        else
            return 0;
    }

    void pop() {
        if (head == NULL) 
            return;

        --sz;

        if (head->prev == NULL) {
            delete head;
            head = NULL;
            return;
        }
        
        head = head->prev;
        delete head->next;
    }

    void push(T x) {
        ++sz;
        new_node = new node(x);
        
        if (head == NULL) {
            head = new_node;
        } else {
            head->next = new_node;
            new_node->prev = head;
            head = new_node;
        }
    }

    size_t size() {
        return sz;
    }

};

stack<int> s;

int main() {
    s.push(1);
    cout << s.top() << endl;
    s.push(114);
    cout << s.top() << endl;
    s.push(1231435);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    s.push(123);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    s.pop();
    cout << s.top() << endl;

    return 0;
}