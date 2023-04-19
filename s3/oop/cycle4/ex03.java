import java.util.*;
import java.lang.*;

class ThreadB extends Thread{
	int x;
	ThreadB(int n){
		x = n;
	}
	public void run(){
		if(x%2==0)
			System.out.println("Square: " + x*x);
	}
}
class ThreadC extends Thread{
	int x;
	ThreadC(int n){
		x = n;
	}
	public void run(){
		if(x%2!=0)
			System.out.println("Cube: " + x*x*x);
	}
}
class ThreadA extends Thread{
	int num;
	public void run(){
		for(int i = 0 ; i < 25 ; i++ ){
			num = (int)(Math.random()*100);
			System.out.println("Number: " +num);
			ThreadB t2 = new ThreadB(num);
			t2.start();
			ThreadC t3 = new ThreadC(num);
			t3.run();
			try{
				Thread.sleep(1000);
			}
			catch(InterruptedException e){
				System.out.println("Handled");
			}
		}
	}
}
public class ex03{
	public static void main(String args[]){
		ThreadA t1 = new ThreadA();
		// ThreadB t2 = new ThreadB();
		// ThreadC t3 = new ThreadC();
		t1.start();
		// t2.start();
		// t3.start();
	}
}