/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package game;

/**
 *
 * @author 0040482021002
 */
public class Equipamento {
    
    private int level;
    private String nome;

    public Equipamento(String nome, int level) {
        this.level = level;
        this.nome = nome;
    }

    public int getLevel() {
        return level;
    }

    public String getNome() {
        return nome;
    }
    
    
}
