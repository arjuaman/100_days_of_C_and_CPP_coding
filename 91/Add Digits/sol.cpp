class Solution {
public:
    int countDigit(long long n) {
        return floor(log10(n) + 1);
    }
    int addDigits(int num) {
        if(num<10) return num;
        int n = countDigit(num);
        while(n>=2){
            int number=num, res=0;
            while(number > 0) {
                int tmp = number % 10;
                res += tmp;
                number /= 10;
            }
            num = res;
            n = countDigit(num);
        }
        return num;
    }
};