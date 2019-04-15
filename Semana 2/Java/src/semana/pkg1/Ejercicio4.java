package semana.pkg1;

import java.util.Scanner;

public class Ejercicio4 {

    public static void main(String[] args) {

        double herencia, reparto, plus1, plus2, plus3,a;
        int edad1, edad2, edad3;
        String con1, con2, con3;
        

        System.out.println("Ingrese el monto de la herencia: ");
        Scanner scanner = new Scanner(System.in);
        herencia = scanner.nextDouble();

        System.out.println("Ingrese edad de la persona 1: ");
        Scanner scanner2 = new Scanner(System.in);
        edad1 = scanner2.nextInt();

        System.out.println("Ingrese consangueneidad de la persona 1 (1/2): ");
        Scanner scanner3 = new Scanner(System.in);
        con1 = scanner3.nextLine();

        System.out.println("Ingrese edad de la persona 2: ");
        Scanner scanner4 = new Scanner(System.in);
        edad2 = scanner4.nextInt();

        System.out.println("Ingrese consangueneidad de la persona 2 (1/2): ");
        Scanner scanner5 = new Scanner(System.in);
        con2 = scanner5.nextLine();

        System.out.println("Ingrese edad de la persona 3: ");
        Scanner scanner6 = new Scanner(System.in);
        edad3 = scanner6.nextInt();

        System.out.println("Ingrese consangueneidad de la persona 3 (1/2): ");
        Scanner scanner7 = new Scanner(System.in);
        con3 = scanner7.nextLine();

        if (con1.equals("1")) {
            plus1 = 0.5 * edad1;
        } else {
            plus1 = 0.6 * edad1;
        }

        if (con2.equals("1")) {
            plus2 = 0.5 * edad2;
        } else {
            plus2 = 0.6 * edad2;
        }

        if (con3.equals("1")) {
            plus3 = 0.5 * edad3;
        } else {
            plus3 = 0.6 * edad3;
        }

        reparto = herencia - (plus1 + plus2 + plus3);
        
        a = ((reparto / 3) + plus1);
                System.out.println(a);
                System.out.println(plus1);
                System.out.println(plus2);
                System.out.println(plus3);
                

        System.out.println("Persona 1 recibe: " + ((reparto / 3) + plus1));
        System.out.println("Persona 2 recibe: " + ((reparto / 3) + plus2));
        System.out.println("Persona 3 recibe: " + ((reparto / 3) + plus3));
    }

}
