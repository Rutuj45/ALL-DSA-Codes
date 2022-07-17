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
		super.show();
		System.out.println("in B");
	}
}
public class methodOveriding {

	public static void main(String[] args) {
		
		Bb obj1 = new Bb();
		obj1.show();
		
	}

}
