#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

// Add where node is empty // Add at first position
void push(Node** head_ref, int new_value){
    Node* new_node = new Node();
    new_node->data = new_value;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Add in between
void insertAt(Node* prev_node, int new_value){
    if (prev_node == NULL){
        cout << "Prev node seem to be NULL";
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_value;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

// Add node at last
void append(Node** head_ref, int new_value){
    Node* new_node = new Node();
    new_node->data = new_value;

    Node *last = *head_ref;
    new_node->next = NULL;
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
    return;
}

// Print Linked-List
void printlist(Node *node){
    while (node != NULL) {
        cout << " " << node->data;
        node = node->next;
    }
}

// Delete Linked List
void deleteNode(Node **head_ref, int key) {
    Node *temp = *head_ref, *prev;

    //case 1
    if (temp!=NULL && temp->data==key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    //case 2
    while (temp!=NULL && temp->data!=key) {
        prev = temp;
        temp = temp->next;
    }

    //case 3
    if (temp == NULL) {
        return;
    }

    prev->next = temp->next;
    free(temp);
}

//Delete entire list
void deletentirelist(Node **head_ref){
    Node *current = *head_ref;
    Node *next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    *head_ref = NULL;
}

//Count all List
void getcount(Node* head) {
    int count = 0;
    Node* current = head;

    while (current != NULL) {
        count++;
        current = current->next;
    }
    cout << endl << " --> Total is " << count;
}

// Reverse List
void reverseList(Node *node) {
    Node *current = node;
    Node *prev = NULL, *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;

        prev = current;
        current = next;
    }
    node = prev;
}

int main(){
    Node *head = NULL;

    append(&head, 4);
    append(&head, 9);
    push(&head, 5);
    insertAt(head, 6);
    //deleteNode(&head, 3);
    //deletentirelist(&head);
    //reverseList(head);
    printlist(head);
    getcount(head);
    return 0;
}
