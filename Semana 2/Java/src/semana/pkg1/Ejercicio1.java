package semana.pkg1;

import java.util.Scanner;

public class Ejercicio1 {
    
    public static void main(String[] args) {
    
        double tarifa, montoConyuge, montoTotal, donacionSolidaria;
        int nroHijos;
        String conyuge;
        
        tarifa = 150;
        
        System.out.println("Tiene esposa? (SI/NO)");
        Scanner entrada1 = new Scanner(System.in);
        conyuge = entrada1.nextLine();
        
        System.out.println("Cuantos hijos tiene:");
        Scanner entrada2 = new Scanner(System.in);
        nroHijos = entrada2.nextInt();
       
        if (conyuge.equals("SI")){
            montoConyuge = tarifa * 0.85;
        }else{
            montoConyuge = 0;
        }
        
        montoTotal = tarifa + montoConyuge + nroHijos*50;
        donacionSolidaria = montoTotal * 0.1;
       
        System.out.println("El monto total es de: " + montoTotal);
        System.out.println("La donacion solidaria es de: " + donacionSolidaria);   
                
    } 
}
