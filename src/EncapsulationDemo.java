// Encapsulation -> Binding data with method
class Demo{
	
	private int rollNo;
	private String name;
	
	
	public int getRollNo() {
		return rollNo;
	}
	public void setRollNo(int rollNo) {
		this.rollNo = rollNo;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	} 
	
	
}
public class EncapsulationDemo {

	public static void main(String[] args) {
		
		Demo d1 = new Demo();
		
		d1.setName("rutuj");
		d1.setRollNo(18);
		
		System.out.println(d1.getName());
		System.out.println(d1.getRollNo());

	}

}
