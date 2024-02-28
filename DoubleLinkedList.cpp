void deleteAtPosition(Node* &head, Node* &tail, int position) {
    if (head == NULL) {
        cout << "Linked list is empty";
        return;
    }

    if (position == 1) {
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL;  // Update tail if head is NULL
        }
        temp->next = NULL;
        delete temp;
        return;
    }

    int len = getLength(head);

    if (position > len) {
        cout << "Enter a valid position" << endl;
        return;
    }

    if (position == len) {
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;
    }

    int i = 1;
    Node* left = head;
    while (i < position - 1) {
        left = left->next;
        i++;
    }
    Node* curr = left->next;
    Node* right = curr->next;

    left->next = right;
    right->prev = left;
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
}
