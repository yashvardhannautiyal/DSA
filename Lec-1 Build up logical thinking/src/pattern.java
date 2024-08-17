//import java.util.Scanner;
//        Pattern 1
//     ****
//     ****
//     ****
//     ****
//class pattern1{
//    pattern1(int n){
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j <n; j++) {
//                System.out.print("* ");
//            }
//        System.out.println(" ");
//        }
//    }
//}



//        Pattern 2
//        *
//        * *
//        * * *
//        * * * *
//class pattern2{
//    pattern2(int n){
//        for(int i=0;i<n;i++){
//            for(int j=0; j<=i; j++){
//                System.out.print("* ");
//            }
//            System.out.println(" ");
//        }
//    }
//}



//  pattern 3
//    1
//    1 2
//    1 2 3
//    1 2 3 4
//    class pattern3{
//        pattern3(int n){
//            for(int i=1; i<=n; i++){
//                for(int j=1; j<=i; j++){
//                    System.out.print(j + " ");
//                }
//                System.out.println(" ");
//            }
//        }
//}



//pattern 4
//1
//2 2
//3 3 3
//4 4 4 4
//5 5 5 5 5
//class pattern4{
//    pattern4(int n){
//        for(int i=1; i<=n; i++){
//            for(int j=1; j<=i; j++){
//                System.out.print(i+" ");
//            }
//            System.out.println(" ");
//        }}}




//pattern 5
//* * * *
//* * *
//* *
//class pattern5{
//    pattern5(int n){
//        for(int i=1; i<=n; i++){
//            for(int j=0; j<n-i+1 ;j++){
//                System.out.print("* ");
//            }
//            System.out.println(" ");
//        }
//    }
//}



//pattern 6
//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1
//class pattern6{
//    pattern6(int n){
//        for(int i=1; i<=n; i++){
//            for(int j =1; j<=n-i+1; j++ ){
//                System.out.print(j + " ");
//            }
//            System.out.println(" ");
//        }
//    }
//}


//pattern 7
//                *
//              * * *
//            * * * * *
//          * * * * * * *
//class pattern7{
//    pattern7(int n){
//        for (int i=0; i<n; i++) {
////            space
//            for (int j = 0; j < n - i - 1; j++) {
//                System.out.print(" ");
//            }
////                stars
//            for (int k = 0; k < 2 * i + 1; k++) {
//                System.out.print("* ");
//            }
////                    space
//            for (int l = 0; l < n - i - 1; l++) {
//                System.out.print(" ");
//            }
//
//            System.out.println(" ");
//
//        }
//}}


//pattern 8
//* * * * * * * * *
//  * * * * * * *
//    * * * * *
//      * * *
//        *
//class pattern8{
//    pattern8(int n){
//        for (int i = 0; i < n; i++) {
////            space
//            for (int j = 0; j <i; j++) {
//                System.out.print(" ");
//            }
//            stars
//            for (int j = 0; j <2*n - (2*i+1); j++) {
//                System.out.print("*");
//            }
////            space
//            for (int j = 0; j <i; j++) {
//                System.out.print(" ");
//            }
//            System.out.println(" ");
//        }
//    }
//}



//pattern 9
//            *             space = n-i-1; stars = 2*n+1; space = n-i-1
//          * * *
//        * * * * *
//      * * * * * * *
//        * * * * *
//          * * *
//            *
//class pattern9{
//    pattern9(int n){
////        upper part
//        for (int i =0; i<n; i++){
//            for (int j=0; j< n-i-1; j++){
//                System.out.print(" ");//space
//            }
//            for (int j = 0; j <2*i+1; j++) {
//                System.out.print("*");//stars
//            }
//            for (int j = 0; j <n-i-1; j++) {
//                System.out.print(" ");//space
//            }
//            System.out.println(" ");
//        }
//
////        lower part
//        for (int i = 0; i <n; i++) {
//            for (int j = 0; j <i; j++) {//space
//                System.out.print(" ");
//            }
//            for (int j = 0; j <2*n-(2*i+1); j++) {
//                System.out.print("*");//stars
//            }
//            for (int j = 0; j <i; j++) {
//                System.out.print(" ");//space
//            }
//            System.out.println(" ");
//
//        }
//    }
//}



//pattern 10
//*
//* *
//* * *
//* * * *
//* * *
//* *
//*
class pattern10{
    pattern10(int n){
//        upper part
        for (int i = 0; i <n; i++) {
            for (int j = 0; j <=i; j++) {
                System.out.print("* ");
            }
            System.out.println(" ");
        }
//        lower part
        for (int i = 1; i <n; i++) {
            for (int j = i; j <n; j++) {
                System.out.print("* ");
            }
            System.out.println(" ");

        }
    }
}


public class pattern {
    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in); //input
//        System.out.print("Enter num : ");
//        int n = sc.nextInt();
//        pattern1 a = new pattern1(4);
//        pattern2 b = new pattern2(4);
//        pattern3 c = new pattern3(5);
//        pattern4 d = new pattern4(5);
//        pattern5 e = new pattern5(5);
//        pattern6 f = new pattern6(5);
//        pattern7 g = new pattern7(5);
//        pattern8 h = new pattern8(5);
//        pattern9 i = new pattern9(4);
        pattern10 j = new pattern10(7);


    }
}
