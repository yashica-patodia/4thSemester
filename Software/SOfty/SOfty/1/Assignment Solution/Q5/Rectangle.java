public class Rectangle extends Box{
	
	public Rectangle(int l, int b){
		super(l,b);
	}	
	
	public void area(){
		System.out.println("The area of rectangle is "+(x*y)+"");
	}
	public void perimeter(){
		System.out.println("The perimeter of rectangle is "+(2*(x+y))+"");
	}
}