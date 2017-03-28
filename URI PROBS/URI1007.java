import java.util.Scanner;

public class URI1007{
  public static void main(String[] args)
  {
    int a,b,c,d;
    Scanner in = new Scanner(System.in);
    a= in.nextInt();
    b= in.nextInt();
    c= in.nextInt();
    d= in.nextInt();
    System.out.println("DIFERENCA = "+((a*b)-(c*d)));
  }
}