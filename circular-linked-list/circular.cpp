#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

//Push data
void push(Node **head_ref, int data) {
    Node *new_node = new Node();
    Node *tmp = *head_ref;
    new_node->data = data;
    new_node->next = *head_ref;

    if (*head_ref != NULL) {
        while (tmp->next != *head_ref) {
            tmp = tmp->next;
        }
        tmp->next = new_node;
    } else {
        new_node->next = new_node;
    }

    *head_ref = new_node;
}

//Delete
void deleteNode(Node** head, int key) {
    Node *last = *head, *d;
    //if ll is empty
    if (*head == NULL) {
        return;
    }

    //only one (head)
    if ((*head)->data==key && (*head)->next==*head) {
        free(*head);
        *head = NULL;
    }

    //head but many elements
    if ((*head)->data == key) {
        while (last->next != *head) {
            last = last->next;
        }
        last->next = (*head)->next;
        free(*head);
        *head = last->next;
    }

    while (last->next != *head && last->next->data != key) {
        last = last->next;
    }

    //node to be deleted
    if (last->next->data == key) {
        d = last->next;
        last->next = d->next;
        free(d);
    }
}

//Count the number
int countlist(Node *head) {
    if (head == NULL) {
        return 0;
    }

    int count = 0;
    Node *current = head;

    do {
        count ++;
        current = current->next;
    } while (current != head);

    return count;
}

//linked-list to circular linked-list
Node* tocircular(Node *head) {
    Node* start = head;
    while (head->next != NULL) {
        head = head->next;
    }
    head->next = start;
    return start;
}

//Print List
void cprintlist(Node *head) {
    Node *tmp = head;
    if (head != NULL) {
        do {
            cout << tmp->data << " ";
            tmp = tmp->next;
        } while (tmp != head);
    } else {
        cout << "Value not found!";
    }
}

int main() {
    Node *head = NULL;
    push(&head, 30);
    push(&head, 20);
    push(&head, 25);
    cprintlist(head);
    return 0;
}
