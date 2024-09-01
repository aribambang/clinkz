# Find Kth Node From End

Implement the `findKthFromEnd` member function for the `LinkedList` class, which returns the k-th node from the end of the linked list <b>WITHOUT USING THE LENGTH</b> of the list.

If the value of k is greater than the length of the list, the function should return nullptr.

<b>Function signature:</b>

`Node* findKthFromEnd(int k)`

<b>Example:</b>

Consider the following singly linked list:

`1 -> 2 -> 3 -> 4 -> 5 -> nullptr`

For the given list, the function `ll.findKthFromEnd(2)` should return the node with value <b>4</b>, as it is the 2nd node from the end of the list.
