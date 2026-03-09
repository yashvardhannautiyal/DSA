//multiple recursion : to check which is the N^th fibonacci 
//logic : f(N) = f(last) + f(secondLast)
// f(i) = f(i-1) + f(i-2)

// EXAMPLE 
// let n = 4 

// f(n){
//     if(n<=1){return n;}
// last = f(n-1); //f(4-1) -> f(3-1) -> f(2-1)
// sLast = f(n-1); // f(4-2) -> f(3-2)

// return last + sLast }


import java.util.Scanner;

public class _07_fibonacci{

public static int func(int n){
    if(n <= 1){return n;}

    int last = func(n-1);
    int sLast = func(n-2);

    return last+sLast;
}

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n = sc.nextInt();

        System.out.println("Fibonacci at position " + n + " = " + func(n));


        sc.close();
    }
}