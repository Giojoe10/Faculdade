package estacionamento;

/**
 *
 * @author 0040482021002
 */
public class Carro {
    
    //**--Atributos--**//
    private String placa, modelo, vendedor;
    private int anoFabricacao;
    private boolean disponivel;
    private double valor;
    
    //**--Construtores--**//
    public Carro(String placa, String modelo, int anoFabricacao, double valor){
        this.placa = placa;
        this.modelo = modelo;
        this.anoFabricacao = anoFabricacao;
        this.valor = valor;
        disponivel = true;
    }
    //**--Getters e Setters--**//
    public String getPlaca() {
        return placa;
    }
    public void setPlaca(String placa) {
        this.placa = placa;
    }
    public String getModelo() {
        return modelo;
    }
    public void setModelo(String modelo) {
        this.modelo = modelo;
    }
    public int getAnoFabricacao() {
        return anoFabricacao;
    }
    public void setAnoFabricacao(int anoFabricacao) {
        this.anoFabricacao = anoFabricacao;
    }
    public double getValor() {
        return valor;
    }
    public void setValor(double valor) {
        this.valor = valor;
    }
    
    
    //**--Métodos--**//
    public boolean disponivel(){
        return disponivel;
    }
    
    public void imprimeDados(){
        System.out.println(
            "Modelo: " + modelo + " ("+anoFabricacao+")" + "\n" +
            "Placa: " + placa + "\n" +
            "Valor de compra:" + valor + "\n" +
            "Status: " + (disponivel?"Disponível":"Vendido\nVendedor: "+vendedor)    
        );
    }
    
    public boolean oferta(double valor){
        return valor>=this.valor*1.1;
    }
    
    public boolean venderCarro(String vendedor, double valorVenda){
        if(disponivel&&oferta(valorVenda)){
            this.vendedor = vendedor;
            disponivel = false;
            return true;
        }
        return false;
    }
}

