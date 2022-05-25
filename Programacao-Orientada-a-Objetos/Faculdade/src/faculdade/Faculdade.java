/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package faculdade;

/**
 *
 * @author 0040482021002
 */
public class Faculdade {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Aluno a1 = new Aluno("Giovanni","0040482021002");
        
        a1.prova1(7.5);
        a1.prova2(0.1);
        a1.faltou(5);
        //a1.exame(10);
        a1.relatorio();
    
    }
    
}
