class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int pos = 0;

        for (int x : arr) {

        if (x != 0) {
            arr[pos] = x;
            pos++;
        }
    }

    
    while (pos < arr.size()) {

        arr[pos] = 0;
        pos++;
    }
    }
};