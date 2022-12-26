// CPP program to illustrate
// Application of push()
// and pop() function
 
#include <iostream>
#include <stack>
using namespace std;
 
int main()
{
    int c = 0;
 
    // Empty stack
    stack<int> mystack;
    mystack.push(5);
    mystack.push(13);
    mystack.push(0);
    mystack.push(9);
    mystack.push(4);
    // stack becomes 5, 13, 0, 9, 4
 	mystack.pop();
    mystack.pop();
    mystack.pop();
    mystack.pop();
    // Counting number of elements in queue
    while (!mystack.empty()) {
        cout << ' ' << mystack.top();
        mystack.pop();
		}
}
