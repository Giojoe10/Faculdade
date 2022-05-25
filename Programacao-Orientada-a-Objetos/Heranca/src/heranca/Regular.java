/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package heranca;

/**
 *
 * @author 0040482021002
 */
public class Regular extends Aluno{
    private double nota1,nota2;
    
    public Regular(String nome, String rg, String ra, int codigo){
        super(nome,rg,ra, codigo);
        this.nota1=0;
        this.nota2=0;
    }

    public double getNota1() {
        return nota1;
    }

    public void setNota1(double nota1) {
        this.nota1 = nota1;
    }

    public double getNota2() {
        return nota2;
    }

    public void setNota2(double nota2) {
        this.nota2 = nota2;
    }
    
    public void setNotas(double nota1,double nota2){
        this.nota1 = nota1;
        this.nota2 = nota2;
    }
    
    public double media(){
        return (this.nota1+this.nota2)/2;
    }
    
    @Override
    public void print(){
        super.print();
        System.out.println(
                "Nota 1: " + nota1 + "\n" +
                "Nota 2: " + nota2 + "\n" +
                "Média: " + this.media()

        );
    }
}
