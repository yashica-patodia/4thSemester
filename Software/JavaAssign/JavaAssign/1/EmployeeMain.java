class Employee {
	private String name;
	private int Salary;
	public Employee(String n, int s){
		name = n;
		Salary = s;
	}
	public String getName(){
		return name;
	}
	public int getSalary(){
		return Salary;
	}
	public void setSalary(int s){
		Salary = s;
	}
}

class Programmer extends Employee {
	protected String language;
	public Programmer(String n, int s, String language){
		super(n,s);
		this.language = language;
	}
	public void setLanguage(String l){
		language = l;
	}
	public String getLanguage(){
		return language;
	}
}

public class EmployeeMain{
	public static void main(String[] args) {
		Employee e = new Employee("Vivek",100);
		Programmer p = new Programmer("Gupta",200,"Java");
		System.out.println("Name of the Employee: "+ e.getName()+ "\nSalary of the Employee:" +
			e.getSalary() + "\nName of the Programmer: " + p.getName() + 
			"\nSalary of the Programmer: " + p.getSalary()+ "\nLanguage of the Programmer: " + p.getLanguage());
		p.setSalary(e.getSalary());
		System.out.println("Updated salary of the Programmer: " + p.getSalary());
	}
}