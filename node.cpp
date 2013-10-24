#include "node.h"

//_____________________________________________________defualt constructor
node::node()
{
    next = NULL;    // sets next node pointer to NULL
                    // Ends list
}

//_____________________________________________________int constructor
node::node(int i)
{
    data = i;       // setting data to int i;
    next = NULL;    // sets next node pointer to NULL
                    // ends list
}

//_____________________________________________________bool op ==
bool operator ==(const node& LHS, const node& RHS)
{
    if(LHS.data == RHS.data)    // if the data value mathes for bothe nodes
        return true;            // return true!
    return false;               // else return false homie
}

//_____________________________________________________bool operator <
bool operator <(const node& LHS,const node& RHS)
{
    if(LHS.data<RHS.data)       // if data is less than other
        return true;            // return true
    return false;               // else return false
}

//_____________________________________________________bool operator >
bool operator >(const node& LHS,const node& RHS)
{
    if(LHS.data>RHS.data)       // if data is greater than other
        return true;            // return true
    return false;               // else return false
}

//_____________________________________________________assignment operator =
void node::operator =(const node& RHS)
{
     data = RHS.data;
}

//_____________________________________________________show <<
ostream& operator<<(ostream& out, node* show)
{
    out<<show->data; // show me your datas (.)(.)
    return out;
}
