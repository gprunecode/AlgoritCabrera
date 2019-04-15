package semana.pkg1;

import java.util.Scanner;

public class Ejercicio2 {

    public static void main(String[] args) {

        double monto, desembolso;

        System.out.println("Ingrese monto: ");
        Scanner entrada = new Scanner(System.in);
        monto = entrada.nextDouble();

        if (monto > 500000) {

            desembolso = 0.55 * monto + 0.30 * monto + 0.15 * monto * 1.2;

        } else {

            desembolso = 0.70 * monto + 0.30 * monto * 1.2;

        }

        System.out.println("El desembolso total es: " + desembolso );
        
    }

}
