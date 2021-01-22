import java.io.*;

public class j_example {

	public static void main(String args[]) {
		foo();
	}

	static void foo() {
		System.out.println("Hello, World");
	}

}
// yes it will still work
// in java - everything is scoped within


class B {
	A a;
}

class A {

}
