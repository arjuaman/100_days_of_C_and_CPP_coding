// https://leetcode.com/problems/bulb-switcher/discuss/77104/Math-solution..

// bulb no. 4 : on by 1, off by 2, on by 4
// bulb no. 8 : on by 1, off y 2, on by 4, off by 8
// bulb no. 9 : on by 1, off by3, on by 9

// Since only square numbers hve the property of having odd no. of divisors, thus they are the only ones that'd
// remain ON after the event!


class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n);
    }
};