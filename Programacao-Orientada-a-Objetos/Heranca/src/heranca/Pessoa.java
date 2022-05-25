/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package heranca;

/**
 *
 * @author 0040482021002
 */
public class Pessoa {
    
    private String nome, rg;
    private int codigo;

    public Pessoa(String nome, String rg, int codigo) {
        this.nome = nome;
        this.rg = rg;
        this.codigo = codigo;
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
    
    public void print(){
        System.out.println(
            "Nome: " + getNome() + "\n" +
            "RG: " + getRg()
        );
    }

    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }
}
