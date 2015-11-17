#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int input;
    vector<int> v;
    auto row = 6;
    auto col = 6;

    for(auto i = 0; i < row * col; ++i){
           cin >> input; 
           v.push_back(input);
        }
    auto max = -2147483648;
    for(auto i = 0; i < row; ++i){
            for(auto j = 0; j < col; ++j){
                        
                        auto sum = v[i+j*6] + v[i+1+j*6] + v[i+2 + j*6] + v[i+1 + (1+j) * 6] + v[i+(2+j)*6] + v[i+1+(2+j)*6] + v[i+2 + (2+j)*6];
                        if(sum > max)        
                            max = sum;
                    }
        }

    cout << max;
    return 0;
}
