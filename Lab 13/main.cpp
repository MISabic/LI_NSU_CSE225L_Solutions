#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
#include "quetype.h"
#include <iostream>

using namespace std;

void bstnewInsertRecursively(TreeType<int>& bstnew, int arr[], int start, int end)
{
    // always insert the element in the middle
    int mid=(start+end)/2;

    bstnew.InsertItem(arr[mid]);

    if(start == end)
        return ;

    if(start < mid)
        bstnewInsertRecursively(bstnew, arr, start, mid-1);
    bstnewInsertRecursively(bstnew, arr, mid+1, end);
}

int main()
{
    // Create a tree object
    TreeType<int> bst;

    // Print if the tree is empty or not
    if(bst.IsEmpty())
        cout << "Tree is empty" << endl;
    else
        cout << "Tree is not empty" << endl;

    // Insert ten items
    int n;
    for(int i=0; i<10; i++){
        cin >> n;
        bst.InsertItem(n);
    }

    // Print if the tree is empty or not
    if(bst.IsEmpty())
        cout << "Tree is empty" << endl;
    else
        cout << "Tree is not empty" << endl;

    // Print the length of the tree
    cout << bst.LengthIs() << endl;

    // Retrieve 9 and print whether found or not
    bool found;
    bst.RetrieveItem(n=9, found);

    if(found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    // Retrieve 13 and print whether found or not
    bst.RetrieveItem(n=13, found);

    if(found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    // Print the elements in the tree (inorder)
    bst.ResetTree(IN_ORDER);
    found = false;
    while(!found){
        bst.GetNextItem(n, IN_ORDER, found);
        cout << n << " ";
    }
    cout << endl;

    // Print the elements in the tree (preorder)
    bst.ResetTree(PRE_ORDER);
    found = false;
    while(!found){
        bst.GetNextItem(n, PRE_ORDER, found);
        cout << n << " ";
    }
    cout << endl;

    // Print the elements in the tree (postorder)
    bst.ResetTree(POST_ORDER);
    found = false;
    while(!found){
        bst.GetNextItem(n, POST_ORDER, found);
        cout << n << " ";
    }
    cout << endl;

    // Make the tree empty
    bst.MakeEmpty();

    /*  Given a sequence of integers, determine the best ordering of
        the integers to insert them into a binary search tree. The best
        order is the one that will allow the binary search tree to have
        the minimum height.
    */

    int numOfElements;
    cin >> numOfElements;

    for(int i=0; i<numOfElements; i++){
        cin >> n;
        bst.InsertItem(n);
    }

    /**  Sort the sequence (use the inorder traversal). The middle
            element is the root. Insert it into an empty tree. Now in the
            same way, recursively build the left subtree and then the right
            subtree.
    */

    int arr[numOfElements+10], index=0;
    bst.ResetTree(IN_ORDER);
    found = false;
    while(!found){
        bst.GetNextItem(n, IN_ORDER, found);
        arr[index++]=n;
    }

    cout << "Sorted List :: ";
    for(int i=0; i<index; i++)
        cout<<arr[i] <<" ";

    cout<<endl;

    TreeType<int> bstnew;

    bstnewInsertRecursively(bstnew, arr, 0, index-1); // calling the function recursively

    bstnew.ResetTree(PRE_ORDER);
    found = false;
    while(!found){
        bstnew.GetNextItem(n, PRE_ORDER, found);
        cout << n << " ";
    }
    cout << endl;

    return 0;
}

/**
Input

4 9 2 7 3 11 17 0 5 1
10
11 9 4 2 7 3 17 0 5 1

*/
