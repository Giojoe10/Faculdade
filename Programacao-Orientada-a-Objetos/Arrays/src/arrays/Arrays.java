/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package arrays;

/**
 *
 * @author 0040482021002
 */
public class Arrays {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        double ex01[][] = new double[10][15];
        
        for(int i=0;i<ex01.length;i++){
            for(int j=0;j<ex01[0].length;j++){
                ex01[i][j] = (i*i)+(2*j);
            }
        }
        
        
        for(int i=0;i<ex01.length;i++){
            for(int j=0;j<ex01[0].length;j++){
                System.out.print(ex01[i][j] + "\t");
            }
            System.out.print("\n");
        }
         
    }
    
}
