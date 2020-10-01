package polimorfismo;
public class Persona {
    public int id;
    public String Nombre;
    public String Apellido;

    public Persona(){

    }
        
    public Persona(int id, String Nombre, String Apellido){
        this.id=id;
        this.Nombre=Nombre;
        this.Apellido=Apellido;

    }

    public void Saludar(){
            System.out.println("Hola Genérico");

    }

    public void setId(int id){
        this.id = id;
    }

 


        
        
        

}