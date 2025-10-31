
import java.util.*;

public class factorial {

    int factor(int n){
        if(n ==0){
        return 1;
        }
        
        int a = factor(n-1);
        int b = n * factor(n-1);
        return b;
        }
    
public static void main(String []args){
    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();

    factorial obj = new factorial();    // 
    int result = obj.factor(n);
    System.out.println(result);    
}

    
}


