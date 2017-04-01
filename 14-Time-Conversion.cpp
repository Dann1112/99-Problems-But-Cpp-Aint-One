#include <string>
#include <iostream>
using namespace std;

int main(){
    string time;
    cin >> time;
    double hour=00;
    
    string str;
    str = time.substr(8,2); //Ver si es AM o PM
    
    if(str=="AM"){
        
    str = time.substr(0,2); //Obtener la hora    
        
        if(str == "12") //Si es medianoche, lo convierte en 00 por el horario de 24 horas
            str = "00";
    }
    else{ //Es PM
        str = time.substr(0,2);        
        if(str != "12") {//Si es medianoche, lo convierte en 00 por el horario de 24 horas

            str = time.substr(0,2); //Obtener la hora
            hour = atoi(str.c_str()); //Convertirlo a entero
            hour += 12; //Convertirlo a reloj de 24 horas
            str = to_string(hour); //Convertirlo a cadena
        }
        }
    
    cout<<str.substr(0,2)<<time.substr(2,6);
    return 0;
}
