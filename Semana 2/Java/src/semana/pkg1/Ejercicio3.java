package semana.pkg1;

import java.util.Scanner;

public class Ejercicio3 {

    public static void main(String[] args) {

        double sueldoNeto, sueldoBase;
        double bonificacion = 0, descuento = 0;
        String categoria;

        System.out.println("Ingrese sueldo base: ");
        Scanner scaner = new Scanner(System.in);
        sueldoBase = scaner.nextDouble();

        System.out.println("Ingrese categoria: ");
        Scanner scaner2 = new Scanner(System.in);
        categoria = scaner2.nextLine();

        System.out.println("Ingrese descuento(%): ");
        Scanner scaner3 = new Scanner(System.in);
        descuento = scaner3.nextDouble();

        if (categoria.equals("1")) {
            bonificacion = sueldoBase * 0.1;
        }

        if (categoria.equals("2")) {
            bonificacion = sueldoBase * 0.2;
        }

        if (categoria.equals("3")) {
            bonificacion = sueldoBase * 0.3;
        }

        sueldoNeto = (sueldoBase + bonificacion) * (1 - (descuento / 100));
        
        
        System.out.println("El sueldo neto es: " + sueldoNeto);
       
    }

}
