public class ABC{
	public static void main(String[] args) {
		

		B znakB = new B();
		A znakA = new A();
		znakA = znakB;
	}
}

class A{
	A(){
		System.out.println("Constructed A");
	}
}

class B extends A{
	B(){
		System.out.println("Constructed B");
	}
}

class C extends B{
	C(){
		System.out.println("Constructed C");
	}
}	