#ifndef LIST_H
#define LIST_H
#include <iostream>
#include "node.h"
using namespace std;

//_____________________________________________________________________________________
class list
{
public:

    list();
        // Constructor sets node pointer head to an empty list
        // no need to set data to any value since set is empty

    void insertHead(node* newHeadNode);
        // Inserts newHeadNode to top of list
        // Next node pointer poins to what head is pointing to
        // Sets head pointer to point to newHEadNode (top of list)

    void insertAfter(node* afterME, node* insertNode);
        // Before call to function, afterME points to some next node or NULL
        // After call, afterME points to inserted insertNode
        // InsertNode points to node that WAS pointed to by afterME or ends list

    void insertBefore(node* beforeNode, node* insertNode);
        // Similar ro insertAfter except insertNode is inserted behind insertBefore
        // the node that points to boforeNode now points to insertNode
        // insertNode points to beforeNode
        // WHAT IF BEFORE IS THE HEAD!?

    void Append(node* addNode);
        // Adds to linked list at the end of list
        // Node before NULL points to addNode;
        // AddNode points to nd of list (NULL);

    void sort();
        // function sorts nodes wrt the value of data in each node
        // creates temp list the holds sorted nodes
        // returns sorted list of nodes

    void deletethis(node* target);///////////////////////////////////////
        // deletes the target node in list if the node is found
        // rearranges list to point to node after deleted node
        // if the node is not found then there are no opperations

    node* removethis(node* target);
        // remove this looks for node target
        // if not found then return NULL
        // if found, rearange list
        // return target node and

    node* search(node *target);///////////////////////////////////////
        // function searches for target.
        // returns address to the node

    friend ostream& operator<<(ostream& out, const list& show);
        // basic show function, displays data of node.
        // returns ostream reference


    node* head;  // Node pointer head points to the top of the linked list;
                 // Is fisrt set to empty list (head = NULL)
                 // Is not a node itself, just a pointer that can point to one,
                 // particulary the top most node in the linked list
                 // ?????????? should head be set to NULL in constructor?
                 // I dont think so since NULL is not a the adress of any memory location,
                 // so head should not point NULL but node next should when it needs to.

};
//_____________________________________________________________________________________

#endif // LIST_H
