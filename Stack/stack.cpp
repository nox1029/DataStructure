#include <iostream>
#include <stack>

using namespace std;


int main()
{
    stack<int> testStack;
    testStack.push(3);
    testStack.push(6);
    testStack.push(2);
    testStack.push(1);
    testStack.push(7);
    testStack.push(9);

    testStack.pop();
    testStack.pop();

    while(!testStack.empty())
    {
        cout<<testStack.top()<<endl;
        testStack.pop();
    }
    
    return 0;
}