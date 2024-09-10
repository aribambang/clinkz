# Partition List

Implement the `partitionList` member function for the LinkedList class, which partitions the list such that all nodes with values less than x come before nodes with values greater than or equal to x.

<b>Note: This linked list class does NOT have a `tail` which will make this method easier to implement.</b>

The original relative order of the nodes should be preserved.

<b>Function Signature:</b>

`void partitionList(int x)`

<b>Details:</b>

The function `partitionList` takes an integer `x` as a parameter and modifies the current linked list in place according to the specified criteria. If the linked list is empty (i.e., `head` is `null`), the function should return immediately without making any changes.

Example 1:

<b>Input:</b>

Linked List: `3 -> 8 -> 5 -> 10 -> 2 -> 1 x: 5`

<b>Process:</b>

- Values less than 5: `3`, `2`, `1`
- Values greater than or equal to 5: `8`, `5`, `10`

<b>Output:</b>

Linked List: <b>`3 -> 2 -> 1 -> 8 -> 5 -> 10`</b>

Example 2:

<b>Input:</b>

Linked List: `1 -> 4 -> 3 -> 2 -> 5 -> 2` x: `3`

<b>Process:</b>

- Values less than 3: `1`, `2`, `2
- Values greater than or equal to 3: `4`, `3`, `5`

<b>Output:</b>

Linked List: <b>`1 -> 2 -> 2 -> 4 -> 3 -> 5`</b>
