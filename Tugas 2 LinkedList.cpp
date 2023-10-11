#include <iostream>

struct Node {
    int value;
    Node* next;
};

Node* insert(Node* start, int value) {
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = start;
    return newNode;
}

int Calculate(Node* start) {
    int length = 0;
    while (start != nullptr && start->value != 0) {
        length++;
        start = start->next;
    }
    return length;
}

int main() {
    Node* start = nullptr;
    int num;

    while (std::cin >> num && num != 0) {
        start = insert(start, num);
    }

    int length = Calculate(start);
    std::cout << length << std::endl;

    while (start != nullptr) {
        Node* temp = start;
        start = start->next;
        delete temp;
    }

    return 0;
}
