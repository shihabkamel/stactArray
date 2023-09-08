#include <iostream>
using namespace std;

#define MAX 4
int stackarr[MAX];
int top = -1;

bool isFull() {
    return top == MAX - 1;
}

bool isEmpty() {
    return top == -1;
}

void push(int data) {
    if (isFull()) {
        cout << "Stack overflow" << endl;
    } else {
        top++;
        stackarr[top] = data;
        cout << "Pushed element: " << data << endl;
    }
}

int pop() {
    if (isEmpty()) {
        cout << "Stack underflow" << endl;
        return 0;
    } else {
        int data = stackarr[top];
        top--;
        cout << "Popped element: " << data << endl;
        return data;
    }
}

int topper() {
    if (isEmpty()) {
        cout << "Stack underflow" << endl;
        return 0;
    } else {
        return stackarr[top];
    }
}

void print() {
    if (isEmpty()) {
        cout << "Stack underflow" << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << stackarr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, data;
      //system("cls");
    while (1) {

        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Print the top element" << endl;
        cout << "4. Print all the elements" << endl;
        cout << "5. Quit" << endl;

        cout << "Please enter the choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Please enter the element: ";
                cin >> data;
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                data = topper();
                cout << "Top element: " << data << endl;
                break;
            case 4:
                print();
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice" << endl;

        }

    }

}
