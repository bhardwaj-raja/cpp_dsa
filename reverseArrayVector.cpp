#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int>& vec) {
    int n = vec.size();
    int temp;

    for(int i = 0; i < n / 2; i++) {
        temp = vec[i];
        vec[i] = vec[n-1-i];
        vec[n-1-i] = temp;
    }
    return vec;
}

int main() {
    vector<int> nums = {6, 74, 246, 534, 23, 56};
    nums = reverse(nums);

    for(int val : nums) {
        cout << val << " ";
    }

    return 0;
}
