import java.io.IOException;
import java.util.Scanner;

/**
 * IMPORTANT:
 * O nome da classe deve ser "Main" para que a sua solução execute
 * Class name must be "Main" for your solution to execute
 * El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
    public static void main(String[] args) throws IOException {

        /**
         * Escreva a sua solução aqui
         * Code your solution here
         * Escriba su solución aquí
         */

        Scanner entrada = new Scanner(System.in);
        int m1, m2;
        m1 = entrada.nextInt();
        m2 = entrada.nextInt();

        if (m2 < m1 && m2 <= 96 && m2 >= 3) {
            System.out.println("minguante");
        } else {
            if (m2 >= 0 && m2 <= 2) {
                System.out.println("nova");
            } else {
                if (m2 >= 3 && m2 <= 96) {
                    System.out.println("crescente");
                } else {
                    if (m2 >= 97 && m2 <= 100) {
                        System.out.println("cheia");
                    }
                }
            }
        }

    }

}