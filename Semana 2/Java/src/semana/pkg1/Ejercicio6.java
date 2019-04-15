package semana.pkg1;

import java.util.Scanner;

public class Ejercicio6 {

    public static void main(String[] args) {

        String tipoEnfermedad;
        int edad;
        double costoPaciente = 0;

        System.out.println("Ingrese tipo de enfermedad (0/1/2/3)");
        Scanner scanner = new Scanner(System.in);
        tipoEnfermedad = scanner.nextLine();

        System.out.println("Ingrese edad del paciente: ");
        Scanner scanner1 = new Scanner(System.in);
        edad = scanner1.nextInt();

        switch (tipoEnfermedad) {

            case "0":
                costoPaciente = 25;
                break;
            case "1":
                costoPaciente = 16;
                break;
            case "2":
                costoPaciente = 20;
                break;
            case "3":
                costoPaciente = 32;
                break;
            default:
                System.out.println("Entrada invalida");
        }

        if (edad >= 14 && edad <= 22) {
            costoPaciente = costoPaciente * 1.1;
        }
        
        System.out.println("El costo del paciente es: " + costoPaciente);
    }

}
