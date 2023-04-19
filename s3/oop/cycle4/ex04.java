/*Thread synchronisation*/
import java.util.*;
import java.lang.*;
class first{
	public void display(String msg){
		System.out.print("["+msg);
		try{
			Thread.sleep(1000);
		}
		catch(InterruptedException e){
			System.out.println("Exception handled");
		}
		System.out.println("]");
	}
}
class second extends Thread{
	first fobj;
	String msg;
	second(first fp, String str){
		fobj=fp;
		msg=str;
	}
	public void run(){
		synchronized(fobj){
			fobj.display(msg);
		}
	}
}
class ex04{
	public static void main(String[] args) {
		first f1=new first();
		second s1=new second(f1,"hello");
		second s2=new second(f1,"world");
		s1.start();
		s2.start();
	}
}