import java.util.Scanner;

class Main
{
   public static void main(String args[])
   {
      int n;
      Scanner in = new Scanner(System.in);
      while(in.hasNext())
      {
        n = in.nextInt();
        if (n % 6 == 0)
           System.out.println("Y");
        else
           System.out.println("N");
      }
   }
}
