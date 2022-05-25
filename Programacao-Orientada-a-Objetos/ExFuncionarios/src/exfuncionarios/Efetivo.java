/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exfuncionarios;

/**
 *
 * @author 0040482021002
 */
public class Efetivo extends Funcionario{
    private double salarioHora;
    private int horas;

    public Efetivo(String nome, String rg, double salarioHora) {
        super(nome, rg);
        this.salarioHora = salarioHora;
    }

    public double getSalarioHora() {
        return salarioHora;
    }

    public void setSalarioHora(double salarioHora) {
        this.salarioHora = salarioHora;
    }
    
    
    public void registrarHoras(int horas){
        this.horas+=horas;
    }
    
    public double salarioLiquido(){
        if(horas>=180){
            return salarioHora*horas*1.05;
        }
        return salarioHora*horas;
    }

    @Override
    public void relatorioMensal() {
        super.relatorioMensal();
        System.out.println(
        "Salário-Hora: R$" + salarioHora + "\n" + 
        "Horas trabalhadas: " + horas + "\n" +
        "Salário a receber: R$" + salarioLiquido() + "\n"
        );
        horas = 0;
    }
    
    
    
    
}
