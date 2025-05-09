#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> vec={1,23,4,56,75,4,43,6,74,246,534,23,56};
    int x=60;
    for(int val:vec){
        if(x==val)
        {
            cout<<"element found";
            return 0; 
        }
    }
    cout<<"not found";
    return 0;
}
