public class Xerox {
    private String name;

    public void setName(String name) {
        this.name = name;
    }

    public void print() {
        printString(name);
    }

    private void printString(String s) {
        System.out.println(s + " (" + s.length() + ")");
    }

    public static void main(String[] args) {
        Xerox printer = new Xerox();
        printer.print();
    }
}
