public class Project7 {

    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        double P = keyboard.nextDouble(); 
        double Q = keyboard.nextDouble();
        double R = keyboard.nextDouble();
        double S = keyboard.nextDouble();
        boolean First_Relation;
        boolean Second_Relation;

        if (P > Q) First_Relation = true;
        if (R < S) Second_Relation = true;

        if (First_Relation = true) & (Second_Relation = true); 
        System.out.println("Given the values for p,q,r, and s the expression (p > q) && !(r < s) evaluates to " );
    }
}