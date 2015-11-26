import java.util.*;
import java.text.*;

class Age{
 public static void main(String[] args){
  Date date=new Date();                      //Current TimeStamp
  long val1=date.getTime();
  System.out.println("Enter Date");
  Scanner sc=new Scanner(System.in);
  int d= sc.nextInt();                       //Input in dd mm yyyy
  int m=sc.nextInt()-1;
  int y=sc.nextInt();
  Calendar cal = Calendar.getInstance();
  cal.set(y, m, d);                           //Timestamp for the date
  long val2=cal.getTimeInMillis();
  long ans=(val1-val2)/(1000*60*60*24);
  System.out.println(ans+" Days");
 }
}
