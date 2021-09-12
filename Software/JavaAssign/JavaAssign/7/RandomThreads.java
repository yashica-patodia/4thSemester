import java.util.*;
import java.io.*;

try{    
	FileOutputStream fout=new FileOutputStream("/home/rakesh/git-repositories/My_Repositories/Java-Assignment/Assignment2/7/outputtext.txt");    
	fout.write(65);    
	fout.close();    
	System.out.println("success...");    
}
catch(Exception e){
		System.out.println(e);}    
}  

public class Synchronization {
	public static void main(String[] args) {
		Counter counter = new Counter();
		Thread t1 = new Thread(new CounterRunnable(counter));
		Thread t2 = new Thread(new CounterRunnable(counter));
		Thread t3 = new Thread(new CounterRunnable(counter));
		t1.start();
		t2.start();
		t3.start();
		try{
			t1.join();
			t2.join();
			t3.join();
		}
		catch(InterruptedException ie){

		}	
	}
}

class CounterRunnable implements Runnable {
	private Counter counter;
	  
	public CounterRunnable(Counter counter){
		this.counter = counter;
	}
	public void run(){
		fout.write(Math.random()*10 + 10);
		}
	}
}

class Counter {
	private int value;
	public synchronized void action() {
		value+=1;
	}
	public int getValue(){
		return value;
	}
	public String toString() {
		return "" + value;
	}
}