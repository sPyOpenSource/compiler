// Comment test
public class Calculator {
    private int result;

    public Calculator() {
        result = 0;
    }

    /* multi-line
       comment */
    public int add(int a, int b) {
        int sum = a + b;
        return sum;
    }

    public String getResult() {
        return "Result: " + result;
    }

    public void loopTest() {
        for (int i = 0; i < 10; i++) {
            if (i % 2 == 0) {
                System.out.println("even: " + i);
            }
        }

        int x = 0;
        while (x < 5) {
            x = x + 1;
        }
    }
}
