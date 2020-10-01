package polimorfismo;


public class Estudiante extends Persona{
    
     String nivelEstudios;

   
     public Estudiante(){
         //System.out.println("Se ha creado un estudiante");
     }
     
     public Estudiante(String nivelEstudios){
         this.nivelEstudios=nivelEstudios;
     }
    

    public void setNivelEstudios(String nivelEstudios) {
        this.nivelEstudios = nivelEstudios;
    }
    
  
     @Override
    public void Saludar(){
        System.out.println("Que tranza carnal");
    }


 



    

    
    
	
        
        
}