public class Xerox_fix {
    private String name;

    public void setName(String name) {
        this.name = name;
    }

    public void print() {
        printString(name);
    }

    private void printString(String s) {
	try {
	        System.out.println(s + " (" + s.length() + ")");
	}
	catch (Exception e)
	{
		System.out.println("Exception handled.\n");
	}
    }

    public static void main(String[] args) {
        Xerox_fix printer = new Xerox_fix();
        printer.print();
    }
}
