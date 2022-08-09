public class Ex1_Types {
    public static void main(String[] args){
        int i1 = 0;
        double d1 = (i1+1); // question 1
        int i2 = (int)(d1+i1); // question 2

        float f1 = (float)(0.1*1); // question 3
        System.out.println("i1 = "+i1); // question 4

        float f2 = i1 + f1; // question 5
        double d2 = 0*0.0; // question 6

        double d3 = 1L + 1; // question 7
        System.out.println("d1 = "+d1);
        System.out.println("i2 = "+i2);
        System.out.println("f1 = "+f1);
        System.out.println("f2 = "+f2);
        System.out.println("d2 = "+d2);
        System.out.println("d3 = "+d3);
    }
}
