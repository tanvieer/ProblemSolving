import java.util.Scanner;
import java.text.*;

public class URI1015{
  public static void main(String[] args)
  {
    int x1,x2,y1,y2;
    double r;
    Scanner in = new Scanner(System.in);
    x1 = in.nextInt();
    y1 = in.nextInt();
    x2 = in.nextInt();
    y2 = in.nextInt();
    r=Math.sqrt((Math.pow((x2-x1),2))+(Math.pow((y2-y1),2)));
    DecimalFormat df = new DecimalFormat("####.####");
    System.out.println(df.format(r));
  }
}