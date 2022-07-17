interface Imp
{
	int num=8;
	void abc();
	
	static void show() {
		
		System.out.println("hiii");;
	}
}

class ImpDemo implements Imp
{
	public void abc() {
		int num=9;
	}
}
public class InterfaceStatic {

	public static void main(String[] args) {
		
		Imp.show();
	}

}
