public class TestArithmetic {
    public int test(int a, int b) {
        int res = a + b;
        res = res - 1;
        res = res & a;
        res = res | b;
        res = res ^ a;
        res = ~res;
        if (res == 0) {
            res = 1;
        }
        return res;
    }
}
