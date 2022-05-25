/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package game;

/**
 *
 * @author 0040482021002
 */
public class Arma extends Equipamento{
    
    private int dano;
    private String tipo;

    public Arma(String nome, int level, int dano, String tipo) {
        super(nome, level);
        this.dano = dano;
        this.tipo = tipo;
    }

    public String getTipo() {
        return tipo;
    }

    public int getDano() {
        return dano;
    }
    
    @Override
    public String toString() {
        return (
        "Nome: " + super.getNome() + " ("+super.getLevel()+")" + "\n" +
        "   Causa " + dano + " de dano " + tipo
        );
    }
    
    
}
