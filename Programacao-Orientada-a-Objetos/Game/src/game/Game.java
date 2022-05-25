/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package game;

/**
 *
 * @author 0040482021002
 */
public class Game {
    /**
    * @param args
    */
    public static void main(String[] args) {
        Generator g = new Generator();
        Arma a1 = g.gerarArma(1, 5);
        a1.toString();
       
    }
    
}
