import java.util.Scanner;

public class gcd {

    int gcd(int a, int b){
        if(a == 0){
            return b;
        }

        if(b == 0){
            return a;
        }   

    return gcd(b % a, a);
}


    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        gcd obj = new gcd();
        int result = obj.gcd(a, b);
        System.out.println(result);

    }
    

}
