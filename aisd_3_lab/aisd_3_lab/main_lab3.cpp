#include <iostream>
#include "Classes Tree, Stack and Queue.h"
using namespace std;

int main() {
    tree a;
    cout << "Filling the tree with elements" << endl;
    a.insert(22);
    a.insert(9);
    a.insert(23);
    a.insert(3);
    a.insert(24);
    a.insert(5);
    a.insert(13);
    a.insert(11);
    a.insert(15);
    a.insert(4);
    a.insert(6);
    a.remove(9);
    cout << "Deeper traversal of the tree" << endl; 
    Iterator* tree_iterator_stack = a.create_dft_iterator();
    while (tree_iterator_stack->has_next()) {
        cout << tree_iterator_stack->next() << ' ';
    }
    cout << endl;
    cout << "Traversing the tree in breadth" << endl;

    Iterator* tree_iterator_queue = a.create_bft_iterator();
    while (tree_iterator_queue->has_next()) {
        cout << tree_iterator_queue->next() << ' ';
    }
    

    return 0;
}