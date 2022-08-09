import java.util.Scanner;
public class Grading {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("กรอกคะแนนรวม: ");
        int score = in.nextInt();
        System.out.print("กรอกคะแนนสอบรวม: ");
        int scoreExam = in.nextInt();
        System.out.print("สถานะการทําโปรเจค (true คือสําเร็จ / false คือไม่เสร็จ): ");
        boolean projectStatus = in.nextBoolean();
        System.out.print("จํานวนครั้งการขาดเรียน: ");
        int numAbsent = in.nextInt();
        System.out.println("Your grade: " + getGrade(score, scoreExam, projectStatus, numAbsent));
    }

    public static String getGrade(int totalScore, int examScore, boolean projectStatus, int numAbsent) {
//code นิสิต;
        if (numAbsent > 3 || examScore < 40) { // check Absent times and exam scores
            return "F";
        } else if (!projectStatus) { // check is input pass the project or not
            return "I";
        } else { // check grading via total score
            if (totalScore >= 80) {
                return "A";
            } else if (totalScore >= 75) {
                return "B+";
            } else if (totalScore >= 70) {
                return "B";
            } else if (totalScore >= 65) {
                return "C+";
            } else if (totalScore >= 60) {
                return "C";
            } else if (totalScore >= 55) {
                return "D+";
            } else if (totalScore >= 50) {
                return "D";
            } else {
                return "F";
            }
        }
    }
}