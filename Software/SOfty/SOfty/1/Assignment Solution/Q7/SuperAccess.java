class Data {
    
    int data1;
    int data2;
}

class NewData extends Data{
    
    int data3;
    int data4;
}

public class SuperAccess {

    public static void main(String[] args) {
        
        Data obj = new NewData();
        obj.data1 = 50;
        obj.data2 = 100;
        System.out.println("obj.data1 = "+obj.data1);
        System.out.println("obj.data2 = "+obj.data2);
    }
}