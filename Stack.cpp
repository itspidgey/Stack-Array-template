// Implementation file for linked StackType
#include "Stack.h"

template<class T>
T Stack<T>::Top() {
    return data[top];
}

template<class T>
void Stack<T>::Pop() {
    if (IsEmpty()){
        throw EmptyStack();
    }
    top--;
}

template<class T>
void Stack<T>::Push(T item) {
    if (IsFull()){
        throw FullStack();
    }
    data[top + 1] = item;
    top++;
}

template<class T>
bool Stack<T>::IsEmpty() const {
    return false;
}

template<class T>
bool Stack<T>::IsFull() const {
    return false;
}

template<class T>
Stack<T>::~Stack() {

}

template<class T>
Stack<T>::Stack() {
    top = -1;
    data = new T[MAX_ITEMS];
}