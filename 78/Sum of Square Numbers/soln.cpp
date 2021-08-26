class Solution {
public:
    bool judgeSquareSum(int c) {
        unordered_map<int, int> square;
        for (long i = 0; i * i <= c; i++) square[i * i] = 1;
        for (long i = 0; i * i <= c; i++) {
            if (square.find(c - i * i) != square.end() ) return true;
        }
        return false;
    }
};