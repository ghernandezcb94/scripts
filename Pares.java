import java.util.Scanner;

public class Pares {
    public static void main(String[] args) {
        System.out.println("Ingresa el numero a evaluar: ");
        Scanner leer= new Scanner(System.in);
        int numero;
        numero= leer.nextInt();
        
        if(numero%2==0){ 
            System.out.println("Es par!");
        }else{
            System.out.println("Es impar!");
        }
    }
}