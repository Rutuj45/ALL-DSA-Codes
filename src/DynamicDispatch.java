class Aa
{
	public void show()
	{
	System.out.println("in A");
	}
}
class Bb extends Aa
{
	public void show()
	{
		System.out.println("in B");
	}
	public void config() 
	{
		System.out.println("config");
	}
}
class C extends Aa
{
	public void show()
	{
		System.out.println("in C");
	}
}
public class DynamicDispatch {

	public static void main(String[] args) {
		Aa obj1 = new C();
		obj1.show();
		
		obj1 = new C();
		obj1.show();  // Dynamic Method Dispatch
	}

}
