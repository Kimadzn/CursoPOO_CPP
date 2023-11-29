/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



/**
 * <br>Document   : ConteudoA.java
 * <br>Created on : 17/08/2021, 17:45:48
 * <br>Author     : Marcio Feitosa
 */
public class ConteudoA {

    
    public static void main(String[] args) {
	
	Classe1 obj1 = new Classe1();
	
	obj1.nome = "Marcio Feitosa";
	obj1.numero = 1;
	
	int i = obj1.calculo(5);
	
	System.out.println("O calculo é " + i);
	System.out.println("Nome = " + obj1.nome);
	System.out.println("Numero = " + obj1.numero);
	
	
	
    }

}
