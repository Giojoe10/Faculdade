/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exerciciofuncionarios;

/**
 *
 * @author 0040482021002
 */
public class Admnistracao extends Funcionarios{
    private double salMensal;
    private int faltas;

    public Admnistracao(String nome, String rg,double salMensal) {
        super(nome, rg);
        this.salMensal = salMensal;
    }

    public double getSalMensal() {
        return salMensal;
    }

    public void setSalMensal(double salMensal) {
        this.salMensal = salMensal;
    }

    
    
    
    @Override
    public void hollerith() {
        super.hollerith();
        System.out.println(
        "Salário Mensal: R$" + salMensal + "\n" +
        "Faltas: " + faltas + "\n" +
        "Salário Liquido: R$" + salarioLiquido()
        );
        
        faltas = 0;
    }

    public void registrarFalta(){
        faltas +=1;
    }
    
    public void registrarFalta(int faltas){
        this.faltas+=faltas;
    }
    
    
    @Override
    public double salarioLiquido() {
        return salMensal - ((((float)faltas)/30)*salMensal);
    }
    
    
    
}
