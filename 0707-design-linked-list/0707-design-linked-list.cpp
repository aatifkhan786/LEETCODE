class MyLinkedList {
public:
    int val;
    MyLinkedList* next;
    MyLinkedList* head;

    MyLinkedList() {
        head = NULL;
        next = NULL;
    }

    MyLinkedList(int val) {
        this->val = val;
        this->next = NULL;
        this->head = NULL;
    }

    int get(int index) {
        if (index < 0)
            return -1;

        MyLinkedList* curr = head;
        int count = 0;

        while (curr != NULL) {
            if (count == index)
                return curr->val;

            curr = curr->next;
            count++;
        }

        return -1;
    }

    void addAtHead(int val) {
        MyLinkedList* temp = new MyLinkedList(val);
        temp->next = head;
        head = temp;
    }

    void addAtTail(int val) {
        MyLinkedList* temp = new MyLinkedList(val);

        if (head == NULL) {
            head = temp;
            return;
        }

        MyLinkedList* curr = head;

        while (curr->next != NULL) {
            curr = curr->next;
        }

        curr->next = temp;
    }

    void addAtIndex(int index, int val) {
        if (index < 0)
            return;

        if (index == 0) {
            addAtHead(val);
            return;
        }

        MyLinkedList* curr = head;
        int count = 0;

        while (curr != NULL && count < index - 1) {
            curr = curr->next;
            count++;
        }

        if (curr == NULL)
            return;

        MyLinkedList* temp = new MyLinkedList(val);
        temp->next = curr->next;
        curr->next = temp;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || head == NULL)
            return;

        if (index == 0) {
            MyLinkedList* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        MyLinkedList* curr = head;
        int count = 0;

        while (curr != NULL && count < index - 1) {
            curr = curr->next;
            count++;
        }

        if (curr == NULL || curr->next == NULL)
            return;

        MyLinkedList* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */