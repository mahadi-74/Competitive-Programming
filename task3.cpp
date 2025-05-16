#include <iostream>
#include <vector>

class Stack {
private:
    std::vector<int> data;

public:
    // Push an integer onto the stack
    void push(int value) {
        data.push_back(value);
    }

    // Pop an integer from the stack
    void pop() {
        if (!isEmpty()) {
            data.pop_back();
        } else {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
        }
    }

    // Check if the stack is empty
    bool isEmpty() const {
        return data.empty();
    }
};

int main() {
    Stack myStack;

    // Push values onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Perform pop operations
    myStack.pop();
    myStack.pop();

    // Push another value
    myStack.push(40);

    // Perform pop operation again
    myStack.pop();

    // Try popping from an empty stack
    myStack.pop();

    return 0;
}

