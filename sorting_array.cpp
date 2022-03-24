#include<iostream>
#include<algorithm>

using namespace std;

void show(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
}

int main(){
    int n;
    cout << "Enter the number of elements in the array" << endl;
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array" << endl;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
    sort(a, a + n);
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }

}
