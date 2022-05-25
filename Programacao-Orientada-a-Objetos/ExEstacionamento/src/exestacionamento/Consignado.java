/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exestacionamento;

/**
 *
 * @author 040069
 */
public class Consignado extends Carro
{
    private String nomeProp;
    private double valorProp;

    public Consignado(String placa, int ano, String modelo, String nomeProp, double valorProp) 
    {
        super(placa, ano, modelo);
        this.nomeProp = nomeProp;
        this.valorProp = valorProp;
    }

    public String getNomeProp() {
        return nomeProp;
    }

    public void setNomeProp(String nomeProp) {
        this.nomeProp = nomeProp;
    }

    public double getValorProp() {
        return valorProp;
    }

    public void setValorProp(double valorProp) {
        this.valorProp = valorProp;
    }
    
    public boolean oferta(double valor)
    {
        return valor >= valorProp*1.05;
    }    
    
    public boolean venderCarro(String vendedor, double ValorVenda)
    {
        if(!disp) return false;
        if(!oferta(ValorVenda)) return false;
        
        this.vendedor= vendedor;
        disp= false;
        
        return true;
    }
    
    @Override
    public void imprimeDados()
    {
        super.imprimeDados();
        System.out.println("Valor para o proprietário: " + valorProp + "\n" +
                "Nome do proprietário: " + nomeProp);
        if(!disp)
            System.out.println("Vendedor: " + vendedor);
    }
    
}
