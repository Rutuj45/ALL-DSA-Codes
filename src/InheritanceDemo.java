


class calculater{
	
	public int add(int i,int j) {
		return i+j;
	}
}

class cals extends calculater{
	
	public int sub(int i,int j) {
		return i-j;
	}
}

class veryCal extends cals{
	
	public int mul(int i,int j) {
		return i*j;
	}
}

public class InheritanceDemo {

	public static void main(String[] args) {
		veryCal obj = new veryCal();
		
		int result = obj.add(4, 7);
		int result1 = obj.sub(9, 4);
		int result2 = obj.mul(5, 4);
		
		System.out.println(result);
		System.out.println(result1);
		System.out.println(result2);

	}

}
