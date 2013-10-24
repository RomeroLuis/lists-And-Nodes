#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

class node
{
public:

    node();
        // constructor sets node pointer next to NULL
        // next ca be changed to point to another node

    node(int i);
        // constructor sets int data to int i;
        // pointer next points to NULL

    friend ostream& operator<<(ostream& out, node* show);
        // show function
        // shows it all on the fisrt date

    friend bool operator ==(const node& LHS, const node& RHS);
        // overloaded opperator == compares to see
        // if both nnodes are equal in data
        // if so, then return true, else return false

    friend bool operator <(const node& LHS, const node& RHS);
        // compare the value of data of both LHS and RHS
        // returns true if LHS->data < RHS->data

    friend bool operator >(const node& LHS, const node& RHS);
        // compare the value of data of both LHS and RHS
        // returns true if LHS->data > RHS->data

    void operator =(const node& RHS);
        // overload assignment opperator to copy data from one node to another
        // Is void

    int data;     // int member variable stores value in node
    node* next;   // node pointer points to another node to continue list or
                  // NULL to terminate list.

};

#endif // NODE_H
