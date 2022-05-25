/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package faculdade;

/**
 *
 * @author 0040482021002
 */
public class Aluno {
    private String nome, ra;
    private int faltas;
    private double nota1, nota2, notaExame;

    public Aluno(String nome, String ra) {
        this.nome = nome;
        this.ra = ra;
        nota1=0;
        nota2=0;
        faltas=0;
        notaExame=0;
    }

    //**--Getters and Setters--**//
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getRa() {
        return ra;
    }

    public void setRa(String ra) {
        this.ra = ra;
    }

    public int getFaltas() {
        return faltas;
    }

    public double getNota1() {
        return nota1;
    }

    public double getNota2() {
        return nota2;
    }
    
    //**--Métodos--**//
    public void faltou(){
        faltas++;
    }
    
    public void faltou(int faltas){
        this.faltas += faltas;
    }
    
    public void prova1(double nota1){
        if (nota1>=0 && nota1<=10){
            this.nota1 = nota1;
        }
    }
    
    public void prova2(double nota2){
        if (nota2>=0 && nota2<=10){
            this.nota2 = nota2;
        }
    }
    
    public double media(){
        return (nota1 + nota2)/2;
    }
    
    public boolean aprovado(){
        return (media() >= 6) && (faltas <= 20);
    }

    public void relatorio(){
        System.out.println(
        "Nome: " + nome + "\n" +
        "RA: " + ra + "\n" + 
        "Faltas: " + faltas + "\n" +
        "Média: " + media() + " ("+nota1+", "+nota2+")" + "\n" +
        (notaExame>0?"Exame: "+notaExame+"\n":"") + 
        "Situação: " + (aprovado()?"Aprovado":(notaExame>=6?"Aprovado":"Reprovado")) + "\n"
        
        );
    }
    public void exame(double notaExame){
        if ((media()<6) && !(faltas>=20) && (nota1!=0) && (nota2!=0)){
            if (notaExame>=0&&notaExame<=10){
                this.notaExame = notaExame;
            }
        }else{
            System.out.println("Aluno não pode realizar o exame.");
        }
    }

}

