import java.util.*;

public class p4{
  public static void main(String[] args) {
    Scanner in=new Scanner(System.in);
    System.out.println("Enter a string : ");
    String orig=in.nextLine();;
    char[] st=orig.toCharArray();
    for(int i=0;i<st.length;i++){
      if(i%2==0)st[i]=Character.toLowerCase(st[i]);
      else st[i]=Character.toUpperCase(st[i]);
    }
    System.out.println(st);
  }
}
