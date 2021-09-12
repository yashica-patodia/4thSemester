public class Synchronization {
	public static void main(String[] args) {
		Counter counter = new Counter();
		Thread t1 = new Thread(new CounterRunnable(counter));
		Thread t2 = new Thread(new CounterRunnable(counter));
		t1.start();
		t2.start();
		try{
			t1.join();
			t2.join();
		}
		catch(InterruptedException ie){

		}
		System.out.println("Run the code multiple times but still 300 will occur all the times");
		if (counter.getValue() == 300) {
			System.out.println(counter);
		}
		else{
			System.out.println("The output should be 300 but here it is " + counter);		
		}	
	}
}

class CounterRunnable implements Runnable {
	private Counter counter;
	public CounterRunnable(Counter counter){
		this.counter = counter;
	}
	public void run(){
		for (int i = 0; i<150; i++) {
			counter.action();
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