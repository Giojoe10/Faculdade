/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exfuncionarios;

/**
 *
 * @author 0040482021002
 */
public class Terceirizado extends Funcionario{
    private String empresa;
    private int horas;

    public Terceirizado(String nome, String rg, String empresa) {
        super(nome, rg);
        this.empresa = empresa;
    }

    public String getEmpresa() {
        return empresa;
    }

    public void setEmpresa(String empresa) {
        this.empresa = empresa;
    }
    
    public void registrarHoras(int horas){
        this.horas+=horas;
    }

    @Override
    public void relatorioMensal() {
        super.relatorioMensal();
        System.out.println(
        "Empresa: " + empresa + "\n" + 
        "Horas Trabalhadas: " + horas + "\n"
        );
        horas=0;
        
    }
    
   
    
}
