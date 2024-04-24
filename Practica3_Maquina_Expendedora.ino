#define	escribir	Serial.print	
#define escribir_s	Serial.println


int BotonA = 6;	//configuracion del boton de avance
int BotonR = 7;	//configuracion del boton de retroceso
int Escoger = 0;

struct productos	//estructura de la maquina expendedora
{
  char producto[50]; //variable donde estaran los productos
  byte cantidad;     //variable de la cantidad de productos
};

productos producto1 = {"Snickers", 24};	//asigno valores a cada variable
productos producto2 = {"Coca Cola", 18};
productos producto3 = {"Tortrix", 34};
productos producto4 = {"Botonetas", 10}; 

void setup() {
 pinMode (BotonA, INPUT);
 pinMode (BotonR, INPUT);
 pinMode (BotonA, OUTPUT);
 Serial.begin(9600);
  escribir_s("Maquina de Dulces");
  
}

void loop(){
  if(digitalRead(BotonA) == HIGH){
    Escoger ++;
    
    if(Escoger > 4){
      escribir_s("Haz llegado al Maximo");
      Escoger=5;
    }
      if(Escoger == 1){
        escribir_s("..............................");
        escribir_s("Datos del Producto 1:");
        escribir("Nombre:");
        escribir_s(producto1.producto);
        escribir("Cantidad disponible:");
        escribir_s(producto1.cantidad);
        escribir_s("..............................");
      }
  
  	if(Escoger == 2){
        escribir_s("..............................");
        escribir_s("Datos del Producto 2:");
        escribir("Nombre:");
        escribir_s(producto2.producto);
        escribir("Cantidad disponible:");
        escribir_s(producto2.cantidad);
        escribir_s("..............................");
    }
  	if(Escoger == 3){
        escribir_s("..............................");
        escribir_s("Datos del Producto 3:");
        escribir("Nombre:");
        escribir_s(producto3.producto);
        escribir("Cantidad disponible:");
        escribir_s(producto3.cantidad);
        escribir_s("..............................");
    }
      if(Escoger == 4){
        escribir_s("..............................");
        escribir_s("Datos del Producto 4:");
        escribir("Nombre:");
        escribir_s(producto4.producto);
        escribir("Cantidad disponible:");
        escribir_s(producto4.cantidad);
        escribir_s("...............................");
        
      }
    
    
   
    
   delay(200);
    
   
  }

 //----------------------------------------------
    

    if(digitalRead(BotonR) == HIGH){
    Escoger--;
    if(Escoger < 1){
      escribir_s("Haz llegado al Minimo");
      Escoger=0;
    }
     if(Escoger == 1){
        escribir_s("..............................");
        escribir_s("Datos del Producto 1:");
        escribir("Nombre:");
        escribir_s(producto1.producto);
        escribir("Cantidad disponible:");
        escribir_s(producto1.cantidad);
        escribir_s("..............................");
      }
  
  	if(Escoger == 2){
        escribir_s("..............................");
        escribir_s("Datos del Producto 2:");
        escribir("Nombre:");
        escribir_s(producto2.producto);
        escribir("Cantidad disponible:");
        escribir_s(producto2.cantidad);
        escribir_s("..............................");
    }
  	if(Escoger == 3){
        escribir_s("..............................");
        escribir_s("Datos del Producto 3:");
        escribir("Nombre:");
        escribir_s(producto3.producto);
        escribir("Cantidad disponible:");
        escribir_s(producto3.cantidad);
        escribir_s("..............................");
    }
      if(Escoger == 4){
        escribir_s("..............................");
        escribir_s("Datos del Producto 4:");
        escribir("Nombre:");
        escribir_s(producto4.producto);
        escribir("Cantidad disponible:");
        escribir_s(producto4.cantidad);
        escribir_s("...............................");
        
      }
      
      
      delay(200);
  }
    



               

}


               





