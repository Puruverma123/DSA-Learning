#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element is : " << q.front() << endl;
    q.pop();
    cout << "Size of queue is : " << q.size() << endl;

    return 0;
}
    