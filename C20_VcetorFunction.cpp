#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // VECTOR FUNCTIONS
    vector<int> vec = {2, 3, 4, 5, 6, 7};
    // 1.SIZE
    cout << "size of the vector is = " << vec.size() << endl;
    // 2.PUSH_BACK
    vec.push_back(10);
    vec.push_back(8);
    vec.push_back(9);
    cout << "size of the vector  after push back is = " << vec.size() << endl;
    // 3.POP BACK
    vec.pop_back();
    cout << "size of the vector  after pop back is = " << vec.size() << endl;
    // 4.FRONT
    cout << vec.front() << " is the front value" << endl;
    // 5.BACK
    cout << vec.back() << " is the back value" << endl;

    // 6.AT
    cout << vec.at(2) << endl;
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
// HOW VECTOR WORKS INTERNALLY IN MEMMORY
    vector<int>ans;
    ans.push_back(0);
    ans.push_back(1);
    ans.push_back(2);
    ans.push_back(3);
    ans.push_back(4);
    cout<<ans.size()<<endl;
    cout<<ans.capacity()<<endl;
}