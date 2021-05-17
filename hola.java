import java.util.Scanner;

public class hola {
public static void  main(String[] args) {
	Scanner teclado = new Scanner(System.in);
	String nombre;
	System.out.print("Dime tu nombre: ");
	nombre = teclado.next();
	System.out.println("Tu nombre es: "+nombre);
}

}