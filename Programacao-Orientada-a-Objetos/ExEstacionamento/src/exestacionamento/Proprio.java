/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exestacionamento;

/**
 *
 * @author 040069
 */
public class Proprio extends Carro
{
    private double valorCompra;
    private String dataCompra;
    
    public Proprio(String placa, int ano, String modelo, double valorCompra, String dataCompra)
    {
        super(placa, ano, modelo);
        this.valorCompra= valorCompra;
        this.dataCompra= dataCompra;
    }

    public double getValorCompra() {
        return valorCompra;
    }

    public void setValorCompra(double valorCompra) {
        this.valorCompra = valorCompra;
    }

    public String getDataCompra() {
        return dataCompra;
    }

    public void setDataCompra(String dataCompra) {
        this.dataCompra = dataCompra;
    }
    
    
    
    public boolean oferta(double valor)
    {
        return valor >= valorCompra*1.1;
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
        System.out.println("Valor de compra: " + valorCompra + "\n" +
                "Data de compra: " + dataCompra);
        if(!disp)
            System.out.println("Vendedor: " + vendedor);
    }
    
}
