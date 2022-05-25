package estacionamento;

/**
 *
 * @author 0040482021002
 */
public class Estacionamento {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Carro c1 = new Carro("AAA1234", "Gol", 2005, 20000.0);
        c1.imprimeDados();
        System.out.println("\n\n");
        c1.venderCarro("Giovanni", 25000);
        c1.imprimeDados();
        
    }
    
}
