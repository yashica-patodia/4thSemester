public abstract class Box{
	protected int x,y;
	protected double area;
	
	public Box(int x,int y){
		this.x=x;
		this.y=y;
	}
	
	protected void area(){
		
	}
	protected abstract void perimeter();
}