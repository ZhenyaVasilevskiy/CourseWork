#include "doublylinkedlist.h"

template <class T>
DoublyLinkedList<T>::DoublyLinkedList()
{
    create();
}

template <class T>
DoublyLinkedList<T>::DoublyLinkedList(const DoublyLinkedList& list) //copy
{
    create();

    for (Node<T>* itr = list.head->next; itr != list.tail; itr = itr->next)
        push_back(itr->inf);
}

template<class T>
DoublyLinkedList<T>::DoublyLinkedList(DoublyLinkedList<T>&& list) : Size(list.Size), head{ list.head }, tail{ list.tail }  //moving
{
    list.Size = 0;	list.head = nullptr;		list.tail = nullptr;
}

template <class T>
DoublyLinkedList<T>::~DoublyLinkedList()
{
    delete_all();
    delete head;
    delete tail;
}


template <class T>
void DoublyLinkedList<T>::create()
{
    Size = 0;
    head = new Node<T>();
    tail = new Node<T>();

    head->next = tail;
    tail->prev = head;
}

template <class T>
int DoublyLinkedList<T>::size() const
{
    return Size;
}

template <class T>
bool DoublyLinkedList<T>::empty() const
{
    if (Size == 0)
        return 1;
    else
        return 0;
}

template <class T>
void DoublyLinkedList<T>::delete_all()
{
    while (!empty()) {
        pop_back();
    }
}

template <class T>
void DoublyLinkedList<T>::pop_back()
{
    delete_node(tail->prev);
}

template <class T>
void DoublyLinkedList<T>::pop_front()
{
    delete_node(head->next);
}

template <class T>
void DoublyLinkedList<T>::delete_node(Node<T>* d)
{
    d->prev->next = d->next;
    d->next->prev = d->prev;
    --Size;
    delete d;
}


template <class T>
void DoublyLinkedList<T>::push_back(const T& n)
{
    insert_node(n, Size - 1);
}

template <class T>
void DoublyLinkedList<T>::push_front(const T& n)
{
    insert_node(n, 0);
}


template <class T>
void DoublyLinkedList<T>::insert_node(const T& val, int index)
{
    if (index >= Size) return;

    Node<T>* element = head->next;

    for (int i = 0; i <= index; ++i, element = element->next);

    Node<T>* insertingElement = new Node<T>(val);

    element->prev->next = insertingElement;
    insertingElement->prev = element->prev;
    insertingElement->next = element;
    element->prev = insertingElement;

    ++Size;
}

template <class T>
int DoublyLinkedList<T>::search(const T& date)
{
    Node<T>* search = head->next;
    int pos = 0;

    for (; search != tail; search = search->next, ++pos)
    {
        if (search->inf == date)
        {
            return pos;
        }
    }
    return -1;
}

template <class T>
const T& DoublyLinkedList<T>::front()
{
    return head->next->inf;
}

template <class T>
const T& DoublyLinkedList<T>::back()
{
    return tail->prev->inf;
}

template <class T>
void DoublyLinkedList<T>::remove(const T& data)
{
    Node<T>* search = head->next;


    for (; search != tail; search = search->next)
    {
        if (search->inf == data)
        {
            Node<T>* next = search->next;
            delete_node(search);
            search = next;
        }
    }
}

template <class T>
T& DoublyLinkedList<T>:: operator [](int number)
{
    Node<T>* element = this->head->next;

    for (int i = 0; i < number; element = element->next, i++);

    return element->inf;
}
