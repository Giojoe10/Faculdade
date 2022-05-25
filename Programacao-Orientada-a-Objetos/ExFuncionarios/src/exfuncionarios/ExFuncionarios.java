package exfuncionarios;
/**
 *
 * @author 0040482021002
 */
public class ExFuncionarios {
    public static void main(String[] args) {
            
        Efetivo e = new Efetivo("Athena", "11111111", 20.0);
        Temporario tmp = new Temporario("Apolo", "22222222", 3000.00);
        Terceirizado t = new Terceirizado("Artemis", "33333333", "Olympus");
        
        e.registrarHoras(180);
        tmp.avaliar(5);
        t.registrarHoras(75);
        
        e.relatorioMensal();
        tmp.relatorioMensal();
        t.relatorioMensal();
        
                
    }
    
}
