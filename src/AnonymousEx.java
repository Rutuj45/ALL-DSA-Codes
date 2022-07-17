
interface Ab{
	
	  void show() ;
}


public class AnonymousEx {

	public static void main(String[] args) {
		
		Ab obj = ()-> System.out.println("im the best");
		
		obj.show();

	}

}
