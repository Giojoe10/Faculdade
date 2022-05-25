/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exestacionamento;

/**
 *
 * @author 0040482021002
 */
public class ListaCarros {
    private Carro lista[];
    private int contador;

    public ListaCarros(int qnt) {
        this.lista = new Carro[qnt];
        this.contador = 0;
    }
    
    public boolean addCarro(Carro c){
        if (contador>=lista.length){
            return false;
        }
        
        lista[contador] = c;
        contador++;
        return true;
    }
    
    void listarTodos(){
        if(contador==0){
            System.out.println("Lista Vazia!");
            return;
        }
        
        for(int i=0;i<lista.length;i++){
            if (lista[i]!=null){
                lista[i].imprimeDados();
                System.out.println();
            }else{
                System.out.println("Posição "+(i+1)+" vazia!" );
            }
        }
        
    
        
    }
    
    void listarProprios(){
        for(int i=0;i<contador;i++){
            if (lista[i] instanceof Proprio){
                lista[i].imprimeDados();
                System.out.println();
            } 
        }
    }
    
    void listarConsignados(){
        for(int i=0;i<contador;i++){
            if (lista[i] instanceof Consignado){
                lista[i].imprimeDados();
                System.out.println();
            } 
        }
    }
    
}
