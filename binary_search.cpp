#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array" << endl;
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array" << endl;
    int key;
    cout << "Enter the key to be searched" << endl;
    cin >> key;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(binary_search(a, a + n, key)){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }

}
