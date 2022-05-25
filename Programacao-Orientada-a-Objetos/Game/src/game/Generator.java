/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package game;

import java.util.Arrays;
import java.util.List;
import java.util.Random;

/**
 *
 * @author 0040482021002
 */
public class Generator {

    private Random r = new Random();
    
    /*
    private String armas[];

    public Generator() {
        armas = new String[8];
    }
    */
    
       
    /*private List<String> armas = Arrays.asList(
            "Espada",
            "Arco",
            "Cajado",
            "Maça",
            "Martelo",
            "Machado",
            "Besta",
            "Varinha"
    );
    */
    
    private String[] armas = {"Espada", "Arco", "Cajado", "Maça", "Martelo", "Machado", "Besta", "Varinha"};
    private String[] tipos = {"Físico","Fogo","Gelo","Elétrico"};
    /*
    private List<String> tipos = Arrays.asList(
            "Físico",
            "Fogo",
            "Gelo",
            "Elétrico"
    );
    */
    
    
    public Arma gerarArma(int minLevel, int maxLevel){
        int level = r.nextInt(maxLevel-minLevel) + minLevel;
        int nomeIndex = r.nextInt(armas.length);
        int tipoIndex = r.nextInt(tipos.length);
        String nome = armas[nomeIndex];
        String tipo = tipos[tipoIndex];
        int dano = r.nextInt((level+1)*10-(level-1)*10) + (level-1)*10;
       
        
        return new Arma(nome, level, dano, tipo);
        
    }


    
    
    
}
