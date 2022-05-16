/*
Autor:          Kevin Orellana
Carnet:         201804569
compilador:     gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:       gcc -o problema_1.out problema_1.c -lm
Fecha:          16 de mayo de 2022
Librerías:      stdio, stdlib
Resumen:        Se resuelve el problema 1 del EXAMENFINAL del Laboratorio de Simulación donde se solicita
                crear un programa que simule el despeje de cohetes.
*/

//librerias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//determino e inicializo constantes
float G = 0.00000000006693; //Constante de Gravitacion Universal
float R_T = 6378000; //Radio de la tierra 
float  M_T = 59736E24; //Masa de la tierra
float R = 287.06; //Constante ideal del gas
float L = 0.006500000000000001; //Constante termica de la atm  ́ osfera
float g_0 = 9.81; // gravedad
float T_0 = 288.15; // Temperatura nivel del mar
float P_0 = 101325; // Presion nivel del mar
float y_t = 0.69; //altura inicial
float h_t = 0; //altura en funcion del tiempo 

//Datos del cohete 1(Ah Mun)
float empujecohete1 = 300000000; 
float TSFC1 = 0.0003248;
float coef_CD1 = 61.27;
float secciontrans_A1 = 201.6;
float masa_01 = 110000.00000000001;
float masa_f01 = 1500000; 


//Datos del cohete 2(Ahua Kin)
float empujecohete2 = 27000000; 
float TSFC2 = 0.0002248;
float coef_CD2 = 61.27;
float secciontrans_A2 = 201.6;
float masa_02 = 110000.00000000001;
float masa_f02 = 1500000; 


//Datos del cohete 3(Chac)
float empujecohete3 = 25000000; 
float TSFC3 = 0.0002248;
float coef_CD3 = 70.25;
float secciontrans_A3 = 215;
float masa_03 = 180000;
float masa_f03 = 2100000; 


//prototipamos las funciones
float velocidadt(float vel, float t);
float alturat(float h_t);
float gravedad(float G, float M_T, float R_T, float y_t);
float densidadAire(float P_0, float R, float T_0, float L, float h_t, float g_0);

void main(){
    puts("---------------------------------------------------------------");
puts("\t\tDescripción del cohete Ah Mun\n");
puts("Características \t\t\t Valor \t\t\t Unidad \n");
puts("Empuje del cohete E_0 \t\t\t 3*10^7 \t\t N \n");
puts("Consumo específico del empuje TSFC \t 3.248*10^-4 \t\t Kg/N*s \n"); 
puts("Coeficiente de forma CD \t\t 61.27 \t\t\t --- \n"); 
puts("Sección transversal del cohete A \t 201.06 \t\t m^2 \n"); 
puts("Masa del propulsor m_0 \t\t\t 1.1*10^5  \t\t Kg n\n"); 
puts("Masa incial de combustible m_f0 \t 1.5*10^6  \t\t Kg \n"); 
puts("---------------------------------------------------------------");

puts("---------------------------------------------------------------");
puts("\t\tDescripción del cohete Ahau Kin\n");
puts("Características \t\t\t Valor \t\t\t Unidad \n");
puts("Empuje del cohete E_0 \t\t\t 2.7*10^7 \t\t N \n");
puts("Consumo específico del empuje TSFC \t 2.248*10^-4 \t\t Kg/N*s \n"); 
puts("Coeficiente de forma CD \t\t 61.27 \t\t\t --- \n"); 
puts("Sección transversal del cohete A \t 201.06 \t\t m^2 \n"); 
puts("Masa del propulsor m_0 \t\t\t 1.1*10^5  \t\t Kg n\n"); 
puts("Masa incial de combustible m_f0 \t 1.5*10^6  \t\t Kg \n"); 
puts("---------------------------------------------------------------");

puts("---------------------------------------------------------------");
puts("\t\tDescripción del cohete Chac\n");
puts("Características \t\t\t Valor \t\t\t Unidad \n");
puts("Empuje del cohete E_0 \t\t\t 2.5*10^7 \t\t N \n");
puts("Consumo específico del empuje TSFC \t 2.248*10^-4 \t\t Kg/N*s \n"); 
puts("Coeficiente de forma CD \t\t 70.25 \t\t\t --- \n"); 
puts("Sección transversal del cohete A \t 215.00 \t\t m^2 \n"); 
puts("Masa del propulsor m_0 \t\t\t 1.8*10^5  \t\t Kg n\n"); 
puts("Masa incial de combustible m_f0 \t 2.1*10^6  \t\t Kg \n"); 
puts("---------------------------------------------------------------");

}


//Aceleracion en función del tiempo
float aceleracion() 
{
    

}
//Definimos la velocidad en funcion del tiempo 
float velocidadt(float vel)
    {
    float resp;
    float vel_0 = 0
    vel = vel_0+vel_0*t
    } 

//Altura en función del tiempo 
float alturat(float h_t)
{
h_t = y_t + 
}
//Consumo del propulsor 

float Cambiodelcombustible()
    {
    float rep;
    rep =-TSFC1*empujecohete1;
    return rep;
    }   

//Gravedad en función del tiempo  
float gravedad(float G, float M_T, float R_T, float y_t)
    {
    float rep;
    rep =(G * M_T)/(R_T + y_t)*(1)/(R_T + y_t); 
    return rep;
    }  

//La densidad del aire esta dada por
float densidaddelaire(float P_0, float T_0, float R, float L, float g_0, float h_t)
    {
    float rep;
    rep =(P_0/(R*T_0))*pow((1-((L*h_t)/T_0)),(g_0/(R*L)));
    return rep;    
    }    