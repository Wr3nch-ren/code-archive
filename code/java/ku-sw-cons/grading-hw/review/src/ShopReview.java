import java.util.ArrayList;
import java.util.Scanner;

public class ShopReview {
    private double rate;
    private String name;

    public ShopReview(double rate, String name){
        this.rate = rate;
        this.name = name;
    }

    public double getRate() {
        return rate;
    }

    public void setRate(double rate) {
        this.rate = rate;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public static void main(String[] args) {
        ArrayList<ShopReview> rateArr = new ArrayList<>();
        Scanner input1 = new Scanner(System.in);
        int n = input1.nextInt();
        input1.close();
        if(n<0){
            System.out.println("ERROR");
        }else if(n==0){
            System.out.println("No reviews found");
        }else{
            for (int i = 0; i < n; i++) {
            Scanner input2 = new Scanner(System.in).useDelimiter("\\s*");
            double rateScore = input2.nextDouble();
            String raterName = input2.next();
            input2.close();
            rateArr.add(new ShopReview(rateScore,raterName));
            }
        }
        System.out.println(rateArr);
    }
}
