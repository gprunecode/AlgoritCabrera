package semana.pkg1;

import java.util.Scanner;

public class Ejercicio5 {

    public static void main(String[] args) {

        int numero;

        System.out.println("Ingrese numero: ");
        Scanner scanner = new Scanner(System.in);
        numero = scanner.nextInt();

        if (numero % 2 == 0) {
            System.out.println("El numero es divisible por 2: ");
        }
        if (numero % 3 == 0) {
            System.out.println("El numero es divisible por 3: ");
        }
        if (numero % 5 == 0) {
            System.out.println("El numero es divisible por 5: ");
        }

        if (numero % 5 != 0 && numero % 3 != 0 && numero % 2 != 0) {
            System.out.println("El numero no es divisible ni por 2, ni por 3 ni por 5");
        }

    }

}
