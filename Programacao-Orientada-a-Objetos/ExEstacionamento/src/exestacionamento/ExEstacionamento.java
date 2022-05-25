/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package exestacionamento;

/**
 *
 * @author 040069
 */
public class ExEstacionamento {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        ListaCarros lista = new ListaCarros(4);
        
        Proprio p = new Proprio("AAA1111", 2000, "Gol", 15000, "01/05/2022");
        lista.addCarro(p);
        
        p = new Proprio("BBB2222", 2001, "Civic", 17500, "02/05/2022");
        lista.addCarro(p);
        
        Consignado c = new Consignado("CCC3333", 2002, "Fiesta", "Apolo", 20000);
        lista.addCarro(c);
        
        /*
        c = new Consignado("DDD4444", 2003, "Uno", "Artemis", 22500);
        lista.addCarro(c);
        */
        System.out.println("-----TODOS-----");
        lista.listarTodos();
        System.out.println("-----PROPRIOS-----");
        lista.listarProprios();
        System.out.println("-----CONSIGNADOS-----");
        lista.listarConsignados();
    }
    
    
}
