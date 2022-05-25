/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exfuncionarios;

/**
 *
 * @author 0040482021002
 */
public class Temporario extends Funcionario{
    private double salarioMensal;
    private int avaliacao;

    public Temporario(String nome, String rg, double salarioMensal) {
        super(nome, rg);
        this.salarioMensal = salarioMensal;
    }

    public double getSalarioMensal() {
        return salarioMensal;
    }

    public void setSalarioMensal(double salarioMensal) {
        this.salarioMensal = salarioMensal;
    }
    
    public void avaliar(int avaliacao){
       this.avaliacao = avaliacao;
    }
    
    public double salarioLiquido(){
        if(avaliacao==5){
            return salarioMensal*1.05;
        }
        return salarioMensal;
    }

    @Override
    public void relatorioMensal() {
        super.relatorioMensal();
        System.out.println(
        "Salário Mensal: R$" + salarioMensal + "\n" + 
        "Avaliação: " + avaliacao + "\n" +
        "Salário a receber: R$" + salarioLiquido() + "\n"
        );
        
       avaliacao = 0;
    }
    
    
    
}
