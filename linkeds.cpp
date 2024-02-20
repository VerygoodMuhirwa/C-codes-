#include <iostream>

class Node {
public:
    int data;
    
    Node* next;

    Node(int value) : data(value), next(NULL) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(NULL) {}

    // Insert at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Insert at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }

        current->next = newNode;
    }

    // Insert at a specific position
    void insertAtPosition(int value, int position) {
        Node* newNode = new Node(value);

        if (position == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* current = head;
        for (int i = 0; i < position - 1 && current != NULL; ++i) {
            current = current->next;
        }

        if (current == NULL) {
            std::cerr << "Invalid position" << std::endl;
            return;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    // Delete from the beginning
    void deleteFromBeginning() {
        if (head == NULL) {
            std::cerr << "List is empty" << std::endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Delete from the end
    void deleteFromEnd() {
        if (head == NULL) {
            std::cerr << "List is empty" << std::endl;
            return;
        }

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* current = head;
        while (current->next->next != NULL) {
            current = current->next;
        }

        delete current->next;
        current->next = NULL;
    }

    // Display the linked list
    void display() {
        Node* current = head;
        while (current != NULL) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "NULL" << std::endl;
    }
};

int main() {
	int 
    LinkedList linkedList;

    // Insert nodes at the beginning
    linkedList.insertAtBeginning(3);
    linkedList.insertAtBeginning(2);
    linkedList.insertAtBeginning(1);

    // Display the linked list
    std::cout << "Linked List after insert at beginning:" << std::endl;
    linkedList.display();

    // Insert nodes at the end
    linkedList.insertAtEnd(4);
    linkedList.insertAtEnd(5);

    // Display the linked list
    std::cout << "Linked List after insert at end:" << std::endl;
    linkedList.display();

    // Insert at a specific position
    linkedList.insertAtPosition(10, 3);

    // Display the linked list
    std::cout << "Linked List after insert at position 3:" << std::endl;
    linkedList.display();

    // Delete from the beginning
    linkedList.deleteFromBeginning();

    // Display the linked list
    std::cout << "Linked List after delete from beginning:" << std::endl;
    linkedList.display();

    // Delete from the end
    linkedList.deleteFromEnd();

    // Display the linked list
    std::cout << "Linked List after delete from end:" << std::endl;
    linkedList.display();

    return 0;
}

