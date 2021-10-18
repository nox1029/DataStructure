#include <iostream>
#include <queue>

using namespace std;


int main()
{
    queue<int> testQueue;
    testQueue.push(3);
    testQueue.push(6);
    testQueue.push(2);
    testQueue.push(1);
    testQueue.push(7);
    testQueue.push(9);

    testQueue.pop();
    testQueue.pop();

    while(!testQueue.empty())
    {
        cout<<testQueue.front()<<endl;
        testQueue.pop();
    }
    
    return 0;
}