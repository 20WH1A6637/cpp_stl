#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    for(int i = 0 ; i < 5; i++){
        v.push_back(i);
    }
    for(auto i = v.begin(); i != v.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
    for(auto i = v.rbegin(); i != v.rend(); i++){
        cout << *i << " ";
    }
    cout << endl;
    cout << v.size() << endl;
    cout << v.max_size() << endl << v.capacity() << endl;
    v.resize(10);
    cout << v.size() << endl;
    v.shrink_to_fit();
    cout << v.capacity() << endl;
    cout << v[2] << endl;
    cout << v.at(2) << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    int* pos = v.data();
    cout << *pos << endl;
}
