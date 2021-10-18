#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nvt = {7,6,5,8,3,5,9,1,6};

    sort_heap(nvt.begin(), nvt.end());

    for(int i=0; i<nvt.size(); i++)
        cout<<nvt[i]<<endl;

    return 0;
}