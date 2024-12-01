#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>vec={2,4,5,6,7};
    //foreach loop access all the element
    for(int i: vec){
        cout<< i <<" ";
    }

    return 0;
}