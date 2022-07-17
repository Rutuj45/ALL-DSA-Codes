


class A{
	
	public A() {
		System.out.println("in a");
	}
	
	public A(int i) {
		System.out.println("in with a");
	}
}

class B extends A{
	
	public B() {
	   super(5);
	   System.out.println("in b");
	}
	
	public B(int i) {
		
		System.out.println("in with b");
	}
	
	
}
public class Super {

	public static void main(String[] args) {
	 
		B obj = new B();

	}

}
