package com.example;

public class HelloWorld {
    private String message;
    public static final int MAX = 100;

    public HelloWorld(String msg) {
        message = msg;
    }

    public void greet(String name) {
        int x = 42;
        if (x > 0) {
            System.out.println("Hello, " + name + "!");
        } else {
            System.out.println("Goodbye!");
        }
    }

    public int add(int a, int b) {
        return a + b;
    }
}
