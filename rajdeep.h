int isArmstrongNumber(int num) {
    int originalNum = num, remainder, result = 0;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    return (result == num);
}
