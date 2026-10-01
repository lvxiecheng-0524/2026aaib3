///week04-3.cpp 在COdeBlocks 裡實作一下
#include <iostream>
#include <vector>
#include <algorithm> //week04
using namespace std;
int main()
{
    vector<int> a; ///上週week03教的“伸縮自如的陣列”
    a.push_back(99);
    a.push_back(88);
    a.push_back(77);///上週week03教的
    ///setting compiler 勾選第二個c++11
    for(int num : a) cout << num << ' ';///2011年的C++
    cout << "\n";

    vector<int> a2(5, 7);///本週教“陣列的初始化”有5格，每格都放7
    for(int num : a2) cout << num << ' ';
    cout << "\n";

    vector<int> a3 = {9, 8, 7, 1, 2, 3, 6, 5, 4, 0};///陣列初始值
    for(int num : a3) cout << num << '
    cout << "\n";
}
