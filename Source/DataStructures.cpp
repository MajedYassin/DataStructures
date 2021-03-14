// Created by majed on 12/03/2021.
#include "DataStructures.h"


namespace DataStruct {

    int LinkedList::get(int index)
    {
        if(index < 0 || index >= size) return -1;
        else if(index == 0) return head->val;
        else
        {
            ListNode* indexNode = head;

            for(int i = 0; i < index; ++i)
            {
                ListNode* tempNode = indexNode->next;
                indexNode = tempNode;
            }
            return (indexNode->val);
        }
    }

    void LinkedList::addAtHead(int val)
    {
        ListNode* newNode = new ListNode();
        newNode->val = val;

        if(!head) newNode->next = head;
        else tail = newNode;

        head = newNode;
        ++size;
    }

    void LinkedList::addAtTail(int val)
    {
        listNode* newNode = new ListNode();
        newNode->val = val;

        if(!tail)
        {
            // There are currently no nodes in the LinkedList
            tail = newNode;
            head = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        ++size;
    }

    bool LinkedList::addAtIndex(int index, int val)
    {
        // check if valid index  and return false if not valid
        if(index < 0 || index > size) return false;
        else if (index == size)
        {
            addAtTail(val);
            return true;
        }
        else if(index == 0)
        {
            addAtHead(val);
            return true;
        }
        else
        {
            ListNode* newNode = new ListNode();
            newNode->val = val;
            ListNode* indexNode = head;

            for(int i = 0; i < (index - 1); ++i)
            {
                ListNode* tempNode = indexNode->next;
                indexNode = tempNode;
            }

            newNode->next = indexNode->next;
            indexNode->next = newNode;
            ++size;
            return true;
        }
    }


    bool LinkedList::deleteAtIndex(int index)
    {
        // check if valid index  and return false if not valid
        if(index < 0 || index >= size) return false;

        ListNode* indexNode = head;
        int i = 0;
        while(i < (index - 1))
        {
            indexNode = indexNode->next;
            ++i;
        }

        if(index == 0)
        {
            if (head->next && tail)
            {
                head = indexNode->next;
            }
            else
            {
                head = nullptr;
                tail = nullptr;
            }
            delete indexNode;
        }
        else if(tail == indexNode->next)
        {
            tail = indexNode;
            delete indexNode->next;
            indexNode->next = nullptr;
        }
        else
        {
            ListNode* tempNode = indexNode->next->next;
            delete indexNode->next;
            indexNode->next = tempNode;
        }

        --size;
        return true; 
    }

}