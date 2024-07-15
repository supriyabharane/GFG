class Solution {
  public:
    string smallestNumber(int s, int d) {
         if (s > 9 * d || (s == 0 && d > 1)) {
        return "-1";
    }

    string result = "";
    int remainingSum = s - 1;
    for (int i = 0; i < d - 1; i++) {
        int digit = min(remainingSum, 9);
        result = to_string(digit) + result;
        remainingSum -= digit;
    }
    result = to_string(remainingSum + 1) + result;
    return result;
    }
};