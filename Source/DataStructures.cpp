// Created by majed on 12/03/2021.
#include "DataStructures.h"


namespace DataStruct {

    // Linked List
    template<typename T>
    T LinkedList<T>::get(int index)
    {
        if(index < 0 || index >= size) return -1;
        else if(index == 0) return head->val;
        else
        {
            ListNode<T>* indexNode = head;

            for(int i = 0; i < index; ++i)
            {
                ListNode<T>* tempNode = indexNode->next;
                indexNode = tempNode;
            }
            return (indexNode->val);
        }
    }

    template<typename T>
    int LinkedList<T>::len()
    {
        return size;
    }

    template<typename T>
    void LinkedList<T>::addAtHead(T val)
    {
        ListNode<T>* newNode = new ListNode<T>();
        newNode->val = val;

        if(!head) newNode->next = head;
        else tail = newNode;

        head = newNode;
        ++size;
    }

    template<typename T>
    void LinkedList<T>::addAtTail(T val)
    {
        ListNode<T>* newNode = new ListNode<T>();
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

    template<typename T>
    bool LinkedList<T>::addAtIndex(int index, T val)
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
            ListNode<T>* newNode = new ListNode<T>();
            newNode->val = val;
            ListNode<T>* indexNode = head;

            for(int i = 0; i < (index - 1); ++i)
            {
                ListNode<T>* tempNode = indexNode->next;
                indexNode = tempNode;
            }

            newNode->next = indexNode->next;
            indexNode->next = newNode;
            ++size;
            return true;
        }
    }


    template<typename T>
    bool LinkedList<T>::deleteAtIndex(int index)
    {
        // check if valid index  and return false if not valid
        if(index < 0 || index >= size) return false;

        ListNode<T>* indexNode = head;
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
            ListNode<T>* tempNode = indexNode->next->next;
            delete indexNode->next;
            indexNode->next = tempNode;
        }

        --size;
        return true; 
    }

    template<typename T>
    LinkedList<T>::LinkedList() : head(nullptr), tail(nullptr)
    {
        size = 0;
    }

    template<typename T>
    LinkedList<T>::LinkedList(int num, T arg, ...) : head(nullptr), tail(nullptr)
    {
        size = 0;
        va_list arguments;
        addAtTail(arg);
        va_start(arguments, arg);
        for( int i = 0; i < (num - 1); ++i)
        {
            addAtTail(va_arg(arguments, T));
        }
        va_end(arguments);
    }

    // Binary Search Functions
    TreeNode* BinarySearchTree::searchNode(TreeNode* node, int val)
    {
        // should be root if you want to search whole tree
        if(!node) return nullptr;
        else if(node->val == val)
        {
            return node;
        }
        else if(node->val > val)
        {
            return searchNode(node->leftChildNode, val);
        }
        else if(node->val < val)
        {
            return searchNode(node->rightChildNode, val);
        }

    }

    TreeNode* BinarySearchTree::search(int val)
    {
        return searchNode(root, val);
    }



    bool BinarySearchTree::insertNode(int val)
    {
        TreeNode* parent = nullptr;
        TreeNode* current = root;

        while(current)
        {
            parent = current;
            if(current->val == val)
            {
                // cannot accept duplicates
                return false;
            }
            else if(current->val > val)
            {
                current = current->rightChildNode;
            }
            else if(current->val < val)
            {
                current = current->leftChildNode;
            }

        }

        TreeNode* node = new TreeNode;
        node->leftChildNode = nullptr;
        node->rightChildNode = nullptr;
        node->val = val;
        current = node;
        return true;
    }

    bool BinarySearchTree::deleteNode(int val)
    {
        TreeNode* parent = nullptr;
        TreeNode* current = root;

        while(current)
        {
            if(current->val == val)
            {
                // cannot accept duplicates
                if(current->leftChildNode)
                {
                    if(current == parent->leftChildNode)
                    {

                    }

                }

                delete current;

            }

            parent = current;
            if(current->val > val)
            {
                current = current->rightChildNode;
            }
            else if(current->val < val)
            {
                current = current->leftChildNode;
            }

        }

        return false;

    }

}