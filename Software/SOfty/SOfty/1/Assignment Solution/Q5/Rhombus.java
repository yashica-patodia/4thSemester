public class Rhombus extends Rectangle{
	
	int a;
	
	public Rhombus(int diag1, int diag2, int side){
		super(diag1,diag2);
		a=side;
	}	
	public void area(){
		System.out.println("The area of rectangle is "+((double)(super.x*super.y)/2)+"");
	}
	public void perimeter(){
		System.out.println("The perimeter of rectangle is "+(4*a)+"");
	}
}