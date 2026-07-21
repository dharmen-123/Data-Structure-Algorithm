        
        /* *************  STACK ************** */

#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Create a stack of integers
    stack<int> st;

    // 1. push() → Insert elements into the stack
    st.push(10);   // stack: [10]
    st.push(20);   // stack: [10, 20]
    st.push(30);   // stack: [10, 20, 30]

    cout << "Top element after pushes: " << st.top() << endl; // 30

    // 2. size() → Get number of elements
    cout << "Size of stack: " << st.size() << endl; // 3

    // 3. pop() → Remove top element
    st.pop(); // removes 30 → stack: [10, 20]
    cout << "Top element after pop: " << st.top() << endl; // 20

    // 4. emplace() → Construct and insert element at top
    st.emplace(40); // stack: [10, 20, 40]
    cout << "Top element after emplace: " << st.top() << endl; // 40

    // 5. empty() → Check if stack is empty
    if(st.empty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl; // Not empty

    // 6. swap() → Swap contents with another stack
    stack<int> st2;
    st2.push(100);
    st2.push(200);

    cout << "Top of st before swap: " << st.top() << endl;   // 40
    cout << "Top of st2 before swap: " << st2.top() << endl; // 200

    st.swap(st2); // swap contents

    cout << "Top of st after swap: " << st.top() << endl;   // 200
    cout << "Top of st2 after swap: " << st2.top() << endl; // 40

    return 0;
}
