

class rohit{
	
	int num1;
	int num2;
	int result;
	
	
	public void perform() {
	   result = num1+num2;	
	}
}
public class oops2 {

	public static void main(String[] args) {
		
		rohit obj = new rohit();
		
		obj.num1=4;
		obj.num2=5;
		
		obj.perform();
		System.out.println(obj.result);
	}
}
