#include <iostream>


using namespace std;


void removeLowestElement(std::stack<int> &stk) {
    if (stk.empty()) {
        std::cout << "Stack is empty!" << std::endl;
        return;
    }


    int lowest = INT_MAX;
    std::stack<int> tempStack;



    while (!stk.empty()) {
        int current = stk.top();
        stk.pop();
        if (current < lowest) {
            lowest = current;
        }
        tempStack.push(current);
    }



    while (!tempStack.empty()) {
        int current = tempStack.top();
        tempStack.pop();
        if (current != lowest) {
            stk.push(current);
        }
    }
}


int main()
{
    std::stack<int> stack;
    stack.push(5);
    stack.push(2);
    stack.push(4);
    stack.push(7);

    std::cout << "Stack elements are: ";
    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }

    std::cout << std::endl;


    stack.push(5);
    stack.push(-1);
    stack.push(2);
    stack.push(4);
    stack.push(7);


    std::cout << "Stack elements are: ";
    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }
    std::cout << std::endl;



    removeLowestElement(stack);


    std::cout << "Stack elements are: ";
    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }

    std::cout << std::endl;

    return 0;
}
