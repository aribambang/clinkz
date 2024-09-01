# Find Middle Node

Implement a member function, `findMiddleNode()`, which finds and returns the middle node of the linked list.

<b>Note: this LinkedList implementation does not have a length member variable.</b>

<b>Function Signature:</b>

`Node* findMiddleNode();`

<b>Input:</b>

- The linked list can have any number of nodes (0 to n).
- Node values are integers.

<b>Output:</b>

- Return a pointer to the middle node of the linked list.
- If the list has an even number of nodes, return the second middle node (the one closer to the end).

<b>Constraints:</b>

- You are not allowed to use any additional data structures (such as arrays) or modify the existing data structure.
- You can only traverse the linked list once.

<b>Example:</b>

Suppose you have a LinkedList object, `list`, with the following values:

`1 -> 2 -> 3 -> 4 -> 5`

After calling the `findMiddleNode()` function:

`Node* middle = list.findMiddleNode();`

The `middle` pointer should point to the node with value <b>3</b>.

Now suppose you have a LinkedList object, `list`, with the following values:
`1 -> 2 -> 3 -> 4 -> 5 -> 6`

After calling the `findMiddleNode()` function:

`Node* middle = list.findMiddleNode();`

The `middle` pointer should point to the node with value <b>4</b>.
