/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package heranca;

/**
 *
 * @author 0040482021002
 */
public class Assistente extends Aluno{
    private int faltas;
    private final int totalAulas = 80;
    
    public Assistente(String nome, String rg, String ra, int codigo){
        super(nome,rg,ra,codigo);
        this.faltas = 0;
    }

    public int getFaltas() {
        return faltas;
    }

    public void setFaltas(int faltas) {
        this.faltas = faltas;
    }
    
    public double frequencia(){
        return (((double)totalAulas-faltas)/totalAulas)*100;
    }
    
    @Override
    public void print(){
        super.print();
        System.out.println(
                "Faltas: " + faltas + "\n" +
                "Frequência: " + this.frequencia() + "%"
        );
        
    }
    
}
