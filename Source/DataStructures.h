// Created by majed on 12/03/2021.

#ifndef DATASTRUCTURES_DATASTRUCTURES_H
#define DATASTRUCTURES_DATASTRUCTURES_H

namespace DataStruct {

// Linked List
    struct ListNode {
        int val;
        ListNode *next;
        ListNode *prev;

        ListNode(int x) : val(x), next(nullptr), prev(nullptr) {}
        ListNode() : val(0), next(nullptr), prev(nullptr) {}
    };

    class LinkedList {

        // properties
        int size;
        ListNode *head, *tail;

    public:

        LinkedList();

        // member functions
        int get(int index);
        void addAtHead(int val);
        void addAtTail(int val);
        bool addAtIndex(int index, int val);
        bool deleteAtIndex(int index);

        bool hasCycle();
        ListNode* detectCycle

    };


}
#endif //DATASTRUCTURES_DATASTRUCTURES_H
