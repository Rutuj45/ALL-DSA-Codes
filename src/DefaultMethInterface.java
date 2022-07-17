

interface Demo 
{
	void abc();
	default void show()
	{
		System.out.println("in Demo show");
	}
}

interface MyDemo
{
	default void show() 
	{
		System.out.println("in MyDemo Show");
	}
	
}


class DemoImp implements Demo , MyDemo{
	
	public void abc() {
		
		System.out.println("in abc");
	}
	
	@Override
	public void show() {
		MyDemo.super.show();
	}
}
public class DefaultMethInterface {

	public static void main(String[] args) {
		
		Demo obj =  new DemoImp();
		
		obj.abc();
		obj.show();

	}

}
