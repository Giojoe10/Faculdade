/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exerciciofuncionarios;

/**
 *
 * @author 0040482021002
 */
public class Producao extends Funcionarios{
    private double salHora;
    private double horasTrabalhadas;

    public Producao(String nome, String rg, double salHora) {
        super(nome, rg);
        this.salHora = salHora;
    }

    public double getSalHora() {
        return salHora;
    }

    public void setSalHora(double salHora) {
        this.salHora = salHora;
    }
    

    
    public void registrarHoras(int qtd){
        horasTrabalhadas+=qtd;
    }
    
    @Override
    public double salarioLiquido() {
        if (horasTrabalhadas>=180){
           return (salHora*horasTrabalhadas)*1.05;
        }
        return salHora*horasTrabalhadas;
    }
    
    @Override
    public void hollerith() {
        super.hollerith();
        System.out.println(
        "Salário por Hora: R$" + salHora + "\n" +
        "Horas trabalhadas " + horasTrabalhadas + "\n" +
        "Salário Liquido: R$" + salarioLiquido()
        );
        
        horasTrabalhadas = 0;
    }
    
}
