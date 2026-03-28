#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>vec; // size :0 
vector<int>vec1={1,2,3};
cout<<vec1[0]<<endl;
vector<int>vec2(3,0);
cout<<vec2[0]<<endl;
cout<<vec2[1]<<endl;
cout<<vec2[2]<<endl;
// FOR EACH LOOP
for(int val:vec1)
{
    cout<<val<<endl;
}


}