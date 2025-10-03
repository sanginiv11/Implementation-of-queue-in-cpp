# Implementation-of-queue-in-cpp
## Objective
Understand and implement a linear queue in C++ using a fixed-size array, covering insertion, deletion, and traversal operations.

Software required:
- MinGW C/C++ compiler
- Visual Studio Code
- Online C++ compiler

## Linear queue using array
Explanation and theory: A queue is a sequential structure that operates on the FIFO rule, meaning the earliest inserted element is the first to be removed. This implementation uses a constant-size array (size 5) along with two indices, start and end, both initialized to −1 to denote an empty structure. Enqueue checks for capacity before appending at ++end and initializes start to 0 on the first insertion. Dequeue validates that elements exist, removes the item at start, and advances start forward. A display routine iterates from start through end to show the queue contents and handles the empty state gracefully. The main routine showcases enqueue, dequeue, and display to verify behavior.

### Algorithm
- Start
- Initialize start = −1, end = −1, and allocate a fixed-size array
- Enqueue:
  - If end == SIZE − 1, report overflow
  - If start == −1, set start = 0
  - Place the new value at ++end
- Dequeue:
  - If start == −1 or start > end, report underflow
  - Remove the element at start and increment start
- Display:
  - If empty, indicate no elements
  - Otherwise, print elements from start to end
- In main:
  - Perform a sequence of enqueue, dequeue, and display operations
- Stop

## Conclusion
This array-based linear queue illustrates the essential mechanics of FIFO processing with straightforward state tracking using start and end indices. It effectively demonstrates insertion, removal, and visualization of elements, including overflow and underflow checks. Though simple and suitable for learning, it is constrained by a fixed capacity and does not reclaim freed positions at the array’s front; moving to a circular queue or dynamic structure can address these limitations while preserving the same operational semantics.
