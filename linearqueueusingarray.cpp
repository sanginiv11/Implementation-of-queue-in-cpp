#include<iostream>
using namespace std;
#define SIZE 5

class Queue {
    int arr[SIZE];
    int start, end;
public:
    Queue() {
        start = -1;
        end = -1;
    }
    void enqueue(int value) {
        if (end == SIZE - 1) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (start == -1) start = 0;
        arr[++end] = value;
        cout << value << " inserted into queue." << endl;
    }
    void dequeue() {
        if (start == -1 || start > end) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        cout << arr[start] << " removed from queue." << endl;
        start++;
    }
    void display() {
        if (start == -1 || start > end) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = start; i <= end; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    q.enqueue(40);
    q.display();
    return 0;
}
/*OUTPUT
10 inserted into queue.
20 inserted into queue.
30 inserted into queue.
Queue elements: 10 20 30 
10 removed from queue.
Queue elements: 20 30 
40 inserted into queue.
Queue elements: 20 30 40 
*/