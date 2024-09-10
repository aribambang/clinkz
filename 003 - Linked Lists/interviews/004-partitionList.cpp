#include <iostream>

using namespace std;

class Node
{
public:
  int value;
  Node *next;
  Node(int value)
  {
    this->value = value;
    next = nullptr;
  }
};

class LinkedList
{
private:
  Node *head;
  int length;

public:
  LinkedList(int value)
  {
    Node *newNode = new Node(value);
    head = newNode;
    length = 1;
  }

  ~LinkedList()
  {
    Node *temp = head;
    while (head)
    {
      head = head->next;
      delete temp;
      temp = head;
    }
  }

  void printList()
  {
    Node *temp = head;
    if (temp == nullptr)
    {
      cout << "empty";
    }
    else
    {
      while (temp != nullptr)
      {
        cout << temp->value;
        temp = temp->next;
        if (temp != nullptr)
        {
          cout << " -> ";
        }
      }
    }
    cout << endl;
  }

  Node *getHead()
  {
    return head;
  }

  int getLength()
  {
    return length;
  }

  void makeEmpty()
  {
    Node *temp = head;
    while (head)
    {
      head = head->next;
      delete temp;
      temp = head;
    }
    length = 0;
  }

  void append(int value)
  {
    Node *newNode = new Node(value);
    if (head == nullptr)
    {
      head = newNode;
    }
    else
    {
      Node *currentNode = head;
      while (currentNode->next != nullptr)
      {
        currentNode = currentNode->next;
      }
      currentNode->next = newNode;
    }
    length++;
  }

  //   +======================================================+
  //   |                 WRITE YOUR CODE HERE                 |
  //   | Description:                                         |
  //   | - Partition list around value x                      |
  //   | - Return type: void                                  |
  //   |                                                      |
  //   | Tips:                                                |
  //   | - Create two dummy nodes for two new lists           |
  //   | - One list for nodes less than x                     |
  //   | - Another list for nodes greater or equal to x       |
  //   | - Loop through original list                         |
  //   | - Assign nodes to new lists based on value           |
  //   | - Merge the two new lists                            |
  //   | - Update the original list's head                    |
  //   +======================================================+

  void partitionList(int x)
  {
    LinkedList *ll = new LinkedList(1);
    LinkedList *lll = new LinkedList(1);
    ll->makeEmpty();
    lll->makeEmpty();

    Node *temp = head;
    while (temp != nullptr)
    {
      if (temp->value >= x)
      {
        lll->append(temp->value);
      }
      else
      {
        ll->append(temp->value);
      }
      temp = temp->next;
    }

    Node *temp1 = lll->head;
    while (temp1 != nullptr)
    {
      ll->append(temp1->value);
      temp1 = temp1->next;
    }
    head = ll->head;
  }
};
