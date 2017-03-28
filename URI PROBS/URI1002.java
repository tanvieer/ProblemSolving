import java.util.Scanner;
import java.text.*;
public class Main{
   public static void main(String[] args)
      {
         final double pi = 3.14159;
         double A,R;
         Scanner in = new Scanner(System.in);
         R = in.nextDouble();
         A=pi*(Math.pow(R,2));
         DecimalFormat df = new DecimalFormat("############.0000");
         System.out.println("A="+df.format(A));
   }
}