import java.util.Scanner;

public class Main{
  public static void main(String[] args)
  {
   int R,i;
   
    Scanner in = new Scanner(System.in);
    R = in.nextInt();
    for(i=0;i<10;i++)
    {
       System.out.println("N["+i+"] = "+R);
       R*=2;
    }
  }
}