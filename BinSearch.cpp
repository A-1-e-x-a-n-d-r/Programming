#include <iostream>
using namespace std;
#include <vector>
#include <cstdlib>
#include <algorithm>
int main(){
    cout << "Введите количество верёвок ";
    int n;
    cin >> n;
    vector<int> v = {};
    for (int i = 0; i < n; i++){
        v.push_back(rand()%1000);
    }
    cout << "Вот их длины: ";
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << "\n" << "Сколько верёвок вы хотите получить? ";
    int k;
    cin >> k;
    int begining = 0;
    int sigma = 0;
    for (int i = 0; i < n; i++){
        sigma += v[i];
    }
    int ending = sigma/k + 1;
    while (ending - begining > 1){
        int middle = (begining + ending)/2;
        int summ = 0;
        for (int i = 0; i < n; i++){
            summ += v[i]/middle;
        }
        if (summ >= k){
            begining = middle;
        }
        else {
            ending = middle;
        }
    }
    cout << begining;
}
