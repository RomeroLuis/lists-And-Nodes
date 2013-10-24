#include <iostream>
#include "node.h"
#include "list.h"

using namespace std;

int main()
{
    cout << "Linked lists" << endl;

    list l;                 // list l nas head pointing empty list;
    node* a = new node(1);  // node* n cretes new node constructed with int 5;
    l.insertHead(a);        // inserts node n at top of list.

    node* b = new node(2);
    l.insertHead(b);
    node* c = new node(3);
    l.insertHead(c);
    node* d = new node(4);
    l.insertHead(d);
    node* e = new node(5);
    l.insertHead(e);

    node* NEW = new node(11);
    node* otherNEW = new node(30);
    node* append = new node(500);
    node* search = new node(3);
    node* found = new node;


    cout<<"\nshowing list: "<<endl;                             // DISPLAY WORKS
    cout<<l<<endl;

    cout<<"\ninserting after "<<b<<":"<<endl;                  //INSERTAFTER WORKS
    l.insertAfter(b,NEW);

    cout<<"\nshowing list: "<<endl;
    cout<<l<<endl;

    cout<<"\ninserting before "<<c<<":"<<endl;                 // INSERTBEFORE WORKS
    l.insertBefore(c,otherNEW);

    cout<<"\nshowing list: "<<endl;
    cout<<l<<endl;

    cout<<"appending node  append("<<append<<") to list"<<endl; // APPEND WORKS
    l.Append(append);

    cout<<"\nshowing list: "<<endl;
    cout<<l<<endl;

    cout<<"Searching for node search("<<search<<") in list"<<endl;// SEARCH WORKS
    found = l.search(search);
    cout<<"found and returned : "<<found<<endl;

    cout<<"\nshowing list: "<<endl;
    cout<<l<<endl;

    cout<<"Removing a("<<a<<") from list "<<endl;                   // REMOVETHIS WORKS
    l.removethis(a);

    cout<<"\nshowing list: "<<endl;
    cout<<l<<endl;

    cout<<"Deleting new("<<NEW<<") from list "<<endl;//////////
    l.deletethis(NEW);
    system("pause");
    cout<<"\nshowing list: "<<endl;/////////
    cout<<l<<endl;
    system("pause");


    cout<<"\nEND";


    delete a;
    delete b;
    delete c;
    delete d;
    delete e;
    delete NEW;
    delete otherNEW;
    delete append;
    delete search;
    delete found;

    return 0;
}

