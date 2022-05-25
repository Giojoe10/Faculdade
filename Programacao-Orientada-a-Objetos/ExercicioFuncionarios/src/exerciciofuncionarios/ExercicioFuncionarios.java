/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package exerciciofuncionarios;

/**
 *
 * @author 0040482021002
 */
public class ExercicioFuncionarios {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Admnistracao adm1 = new Admnistracao("Zeus", "460221607",5000);
        Producao prod1 = new Producao("Hefesto", "250534605", 20);
        
 
        adm1.registrarFalta(15);
        prod1.registrarHoras(180);
        
        adm1.hollerith();
        System.out.println();
        prod1.hollerith();
        
    }
    
}
