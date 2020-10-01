/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package polimorfismo;

/**
 *
 * @author Edgar
 */
public class prueba {
    public static void main(String[] args) {
       
        System.out.println("***   PRIMERA PARTE   *********");
        
        Persona persona1 = new Persona();
        persona1.Saludar();
        Persona persona2 = new Empleado();
        persona2.Saludar();
        Persona persona3 = new Estudiante();
        persona3.Saludar();
        
        System.out.println("\n \n *** SEGUNDA PARTE  ********");
        
        Estudiante estudiante1 = new Estudiante();
        Empleado empleado1  = new Empleado();
        
        persona3 = empleado1;
        persona3.Saludar();
    
        System.out.println("\n \n *** TERCERA PARTE  ********");
         
        
        Persona persona4;
        persona4 = estudiante1;
        persona4.Saludar();
        persona4 = empleado1;
        persona4.Saludar();
        persona4 = persona1;
        persona4.Saludar();

        
        //Instrucciones de casting entre objetos
     Persona persona5 = new Estudiante();// = estudiante1;
       Estudiante estudiante2 = (Estudiante)persona5;  
       Estudiante persona6 = new Estudiante();
       Estudiante estudiante3 = (Estudiante)persona6;
        
    }
}
