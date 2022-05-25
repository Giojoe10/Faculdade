/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package heranca;

/**
 *
 * @author 0040482021002
 */
public class Heranca {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        /*
        Regular r1 =  new Regular("Giovanni","111111111","0040482021002");
        Assistente a1 = new Assistente("João","222222222","0040482021003");
        
        r1.setNotas(9.0,7.5);
        r1.print();
        
        System.out.println("");
        
        a1.setFaltas(20);
        a1.print();
        */
        
        /*
        Pessoa lista[] = new Pessoa[8];
        lista[0] = new Pessoa("Zeus", "000001");
        lista[1] = new Pessoa("Hera", "000002");
        lista[2] = new Aluno("Ares", "000003", "2022001");
        lista[3] = new Aluno("Athena", "000004","2022002");
        lista[4] = new Assistente("Hermes", "000005", "2022003");
        lista[5] = new Assistente("Afrodite", "000006", "2022004");
        lista[6] = new Regular("Artemis", "000007", "2022005");
        lista[7] = new Regular("Apolo", "000008", "2022006");
        
        for(int i=0; i<lista.length;i++){
            lista[i].print();
            System.out.println();
        }
       */
        
        
        ListaPessoas lista = new ListaPessoas(6);
        lista.add(new Aluno("Ares", "000003", "2022001",5));
        lista.add(new Aluno("Athena", "000004","2022002",16));
        lista.add(new Assistente("Hermes", "000005", "2022003",17));
        lista.add(new Assistente("Afrodite", "000006", "2022004",21));
        lista.add(new Regular("Artemis", "000007", "2022005",3));
        lista.add(new Regular("Apolo", "000008", "2022006",1));
        
        lista.listagemResumo();
        System.out.println(lista.buscarCodigo(3));
        
    }
    
}
