// Created by majed on 12/03/2021.

#ifndef DATASTRUCTURES_DATASTRUCTURES_H
#define DATASTRUCTURES_DATASTRUCTURES_H

#include  <cstdarg>

namespace DataStruct {

// Linked List
    template<typename T>
    struct ListNode {
        T val;
        ListNode *next;
        ListNode *prev;

        ListNode(T x) : val(x), next(nullptr), prev(nullptr) {}
        ListNode() : val(0), next(nullptr), prev(nullptr) {}
    };

    template<typename T>
    class LinkedList {

        // properties
        int size;
        ListNode<T> *head, *tail;

    public:

        LinkedList();

        LinkedList(int num, T arg, ...);

        // member functions
        T get(int index);
        void addAtHead(T val);
        void addAtTail(T val);
        bool addAtIndex(int index, T val);
        bool deleteAtIndex(int index);
        int len();

        bool hasCycle();
        ListNode<T>* detectCycle();

    };


}
#endif //DATASTRUCTURES_DATASTRUCTURES_H
