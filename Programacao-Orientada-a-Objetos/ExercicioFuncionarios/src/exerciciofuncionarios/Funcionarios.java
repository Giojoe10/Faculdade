/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exerciciofuncionarios;

/**
 *
 * @author 0040482021002
 */
public abstract class Funcionarios {
    private String nome;
    private String rg;

    public Funcionarios(String nome, String rg) {
        this.nome = nome;
        this.rg = rg;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getRg() {
        return rg;
    }

    public void setRg(String rg) {
        this.rg = rg;
    }
    
    
    
    public void hollerith(){
        System.out.print(
        "Holerite\n" +
        "Nome: " + nome + "\n" +
        "RG: " + rg + "\n"
        );
    }
    
    public abstract double salarioLiquido();
    
}
