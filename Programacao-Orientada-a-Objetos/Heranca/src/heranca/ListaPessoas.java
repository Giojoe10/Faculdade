/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package heranca;

/**
 *
 * @author 0040482021002
 */
public class ListaPessoas {
    
    private Pessoa lista[];
    private int contador;
    
    public ListaPessoas(int qnt){
        lista = new Pessoa[qnt];
        contador=0;
    }
    
    public boolean add(Pessoa p){
        if (contador>=lista.length){
            return false;
        }
        for(int i=0;i<contador;i++){
            if(p.getCodigo()==lista[i].getCodigo()){
                System.out.println("[ERRO] Codigo de Aluno já cadastrado");
                return false;
            }
        }
        lista[contador] = p;
        contador++;
        return true;                
    }
    
    public void listagemResumo(){
        for(int i=0;i<contador;i++){
            System.out.println("Nome: " + lista[i].getNome());
            if(lista[i] instanceof Regular){
                Regular r = (Regular)lista[i];
                System.out.println("Media: " + r.media());
            }else if(lista[i] instanceof Assistente){
                Assistente a = (Assistente)lista[i];
                System.out.println("Frequência: " + a.frequencia());
            }else{
                System.out.println("ERRO: Aluno não pertence às classes descendentes;");
            }
            System.out.println("Codigo do Aluno: " + lista[i].getCodigo() + "\n");
        }
    }
    
    public int buscarCodigo(int codigo){
        for(int i =0;i<contador;i++){
            if (codigo == this.lista[i].getCodigo()){
                return i;
            }
        
        
         }
        return -1;
    }
}