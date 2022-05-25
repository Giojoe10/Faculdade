/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exestacionamento;

/**
 *
 * @author 040069
 */
public class Carro 
{
    private String placa;
    private int ano;
    private String modelo;
    protected boolean disp;
    protected String vendedor;

    public Carro(String placa, int ano, String modelo) 
    {
        this.placa = placa;
        this.ano = ano;
        this.modelo = modelo;
        disp= true;
        vendedor= "";
    }
    
    public boolean disponivel()
    {
        return disp;
    }

    public String getPlaca() 
    {
        return placa;
    }

    public void setPlaca(String placa) 
    {
        this.placa = placa;
    }

    public int getAno() 
    {
        return ano;
    }

    public void setAno(int ano) 
    {
        this.ano = ano;
    }

    public String getModelo() 
    {
        return modelo;
    }

    public void setModelo(String modelo) 
    {
        this.modelo = modelo;
    }
    
    public void imprimeDados()
    {
        System.out.println("Placa: " + placa + "\n" +
                "Modelo: " + modelo + "\n" + 
                "Ano: " + ano + "\n" +
                "Disponivel para venda: " + disp);
    }
}
