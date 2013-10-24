#include "list.h"

//__________________________________________________________________________________Constructor
list::list()
{
    head = NULL;                     // cnstrusctor sets head to one node linked list.
                                     // sets value in new node to zero
}

//__________________________________________________________________________________insertHead
void list::insertHead(node* newHeadNode)
{
    newHeadNode->next = head;       // newHeadNode links to the head, making
                                    // newHeadNode the new head
    head = newHeadNode;             //reset node pointer head to point to top of list
}

//__________________________________________________________________________________insertAfter
void list::insertAfter(node* afterME, node* insertNode)
{//ASSUMING NODE AFTERME EXISTS
 // CONSIDER DOING SEARCH NODE AFTERME...
    node* temp;                      // creates temp to point to what afterME points to
    temp = afterME->next;            // temp points to that node
    afterME->next = insertNode;      // Set afterME next pointer to inisertNode
    insertNode->next = temp;         // insertNode next points to temp
}

//__________________________________________________________________________________insertBefore
void list::insertBefore(node* beforeNode, node* insertNode)
{
    node* walker = head;             // have walker point to head // if it is head then call inserthead
    if(beforeNode != head)           // check to see that beforeNode is not the head before
    {                                // look for when the next pointer points to beforeNode
    while(walker->next != NULL && walker->next != beforeNode)
    walker = walker->next;           //set walker to next node
                                     // walker is now pointing to the address of insert position
    insertAfter(walker, insertNode); // call insert after
    }
}

//__________________________________________________________________________________Append node
void list::Append(node* addNode)/////////////
{
      node* walker = head;            // point walker to head
      while(walker->next)             // look for the end of the list
      walker = walker->next;          // set walker to the next pointd node
      insertAfter(walker, addNode);   // when found, insert after walker;
}

//__________________________________________________________________________________wherethisgoes
node* list::wherethisgoes(node* n)
{
    // looks like you haven't done anyrhing here


}

//__________________________________________________________________________________insertsorted
void list::insertsorted(node* i)
{

    // looks like you haven't done anyrhing here
}

//__________________________________________________________________________________sorting list
void list::sort()
{
    // looks like you haven't done anyrhing here
}

//__________________________________________________________________________________search node
node* list::search( node* target)
{
    node* walker = head;            // Have node pointer point to head of list

    while(walker)                   // while walker != NULL
    {
        if(*walker == *target)      // if *walker == *target
        return walker;              // return walker searched for
        walker = walker->next;      // set walker pointer point to next node in list
    }
    return NULL;                    // returns NULL if target not found
}

//__________________________________________________________________________________remove node
node* list::removethis(node* target)
{
    node* walker = head;            // Have node pointer point to head of list
    if(target == walker)            // if the adress matches to be at the top of list
    {
        head = walker->next;        // point head to walker->next node
        return walker;
    }
    while(walker)                   // while walker != NULL
    {
        if(*walker->next == *target)// look for the next pointer that points to target  == works here
        {
            node* temp;             // if found, create temp variable
            temp = walker->next;    // temp points to walker next (taget node)
            temp = temp->next;      // temp shifts to point to node after target
            walker->next = temp;    // redirect walker next to point to temp
            return target;    // return node in list that is target.
        }

        walker = walker->next;      // set walker pointer point to next node in list
    }
    return NULL;                    // returns NULL if target not found
}

//__________________________________________________________________________________delete node
void list::deletethis(node* target)
{
    delete removethis(target);
}

//__________________________________________________________________________________insertion<<
ostream& operator<<(ostream& out, const list& show)
{
    node* walker = show.head;         // set walker to the head of list

    while(walker!=NULL)               // while it is not the end of list
    {
        out<<walker->data<<endl;      // display the node data
        walker = walker->next;        // set walker to next node
    }
    return out;                       // return the ostream reference
}
