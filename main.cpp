#include <iostream>

using namespace std;

int a=0, b=0, residuo=0, N;
char cont= 0;
int num_n= 0;



int main()
{
     cout << "\n Que le gustaria buscar ?" << endl;
     cout << "\n 1) Ejercicios\n 2) Problemas\n" << endl;
     cout << "--> "; cin >> cont;cout << "\n\n";

     if (cont == char (49)){
         cout << "Que ejercicio desea realizar\n\n --> ";cin >> num_n;
         switch (num_n) {
         case 1:{
             /* Escriba un programa que pida dos números A y B e imprima en pantalla el residuo
              de la división A/B.*/
             cout<<"ingrese un numero: ";
             cin>>a;
             cout<<"ingrese otro numero: ";
             cin>>b;
             residuo=a%b;
             cout<<"el residuo de la division es: " <<residuo<<endl;

             break;
         }

         case 2:{
             /*Escriba un programa que pida un número N e imprima
               en pantalla si es par o impar.*/

             cout <<"Ingrese el numero que desee saber si es par o impar: " ;
             cin >>N;
             a=N%2;
             if (a==0){
                 cout<<"El numero que ingreso es par"<< endl;
             }
             else {
                 cout<<"El numero que ingreso es impar"<< endl;
             }

             break;
         }

         case 3:{
             /*Escriba un programa que pida dos números A y B e imprima
              en pantalla el mayor.*/
             cout <<"ingrese un numero: ";
             cin>>a;
             cout <<"ingrese otro numero: ";
             cin>>b;

             if(a>b){;
                 cout<<"el mayor es: "<<a<<endl;
                 }
             else if (b>a){;
                 cout<<"el mayor es: "<<b<<endl;
                 }
             break;
         }

         case 4:{
             /*Escriba un programa que pida dos números A y B e imprima
              en pantalla el menor.*/
             cout <<"ingrese un numero: ";
             cin>>a;
             cout <<"ingrese otro numero: ";
             cin>>b;

             if(a>b){;
                 cout<<"el menor es: "<<b<<endl;
                 }
             else if (b>a){;
                 cout<<"el menor es: "<<a<<endl;
                 }
             break;
         }

         case 5:{
             /*Escriba un programa que pida dos números A y B e imprima
              en pantalla la división A/B con redondeo.*/
             cout<<"ingrese un numero: ";
             cin>>a;
             cout<<"ingrese otro numero: ";
             cin>>b;
             residuo= a/b;
             cout<<"la division entera es: "<<residuo<<endl;

             break;
         }

         case 6:{
             /*Escriba un programa que pida dos números A y B e imprima en pantalla
              la potencia A^B, sin hacer uso de librerías matemáticas.*/
             cout<<"ingrese el nuemro base: ";
             cin>>a;
             cout<<"ingrese el numero de potencia: ";
             cin>>b;
             int resultado=1;
             for (int cont=1; cont<=b;cont++){

                resultado=resultado*a;



             }
              cout <<"El resultado de la potencia es: " << resultado << endl;


             break;
         }

         case 7:{
             /*Escriba un programa que pida un número N e imprima en pantalla
              la suma de todos los números entre 0 y N (incluyéndose el mismo).*/
             int suma=0;
             cout << "ingrese un numero N: ";
             cin>>N;
             for (int i=0; i<=N; i++) {
                 suma +=i;
             }
             cout<<"la suma es: "<<suma<<endl;
             break;
         }

         case 8:{
             /*Escriba un programa que pida un número N e imprima en pantalla su factorial.*/
             cout << "Ingrese un numero para calcular el factorial: ";
             cin >> N;
             a=1;
             while(1<N){
                 a=a*N;
                 N=N-1;
             }
             cout << "El factorial es: " << a << endl ;

             break;
         }

         case 9:{
             /*Escriba un programa que pida un número N e imprima el perímetro y área de un círculo
              con radio N. Nota: use 3.1416 como una aproximación de pi.*/           
             float P, X;
             cout <<"ingrese un numero N: ";
             cin>>N;
             P=2*3.1416*N;
             X=3.1416*N*N;
             cout<<"el perimetro del circulo con radio N es:"<<P<<endl;
             cout<<"el area del circulo con radio N es: "<<X<<endl;

             break;
         }

         case 10:{
             /*Escriba un programa que pida un número N e imprima en pantalla todos
              los múltiplos de dicho número entre 1 y 100.*/
             cout <<"ingrese un numero N: ";
             cin>>N;
             cout << "los multiplos menores que 100 son: "<< endl;
             while (b<=100){
                 if (b==0){
                     a=a+1;
                     b=N*a;
                 }

                 else{
                 cout << b << endl;
                 a=a+1;
                 b=N*a;
                }
             }
             break;
         }

         case 11:{
             /*Escriba un programa que pida un número N e imprima en pantalla
              su tabla de multiplicar hasta 10xN.*/
             int resultado=0;
             cout<<"ingrese un numero N: ";
             cin>>N;
             for(int i=0; i=N; N--){;
                 resultado=10*i;
                 cout<<"10"<<"X"<<N<<"="<<resultado<<endl;
             }
             break;
         }

         case 12:{
             /*Escriba un programa que pida un número N e imprima todas
              las potencias desde N^1 hasta N^5*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 13:{
             /*Escriba un programa que pida un número N e imprima
              todos los divisores de N.*/

             cout << "ingrese un numero N: ";
             cin>>N;
             for(int i=1; i<=N; i++){
                 if(N%i==0){;
                     cout<<"sus divisores son: "<<i<<" "<<endl;
                 }
             }

             break;
         }

         case 14:{
             /*Escriba un programa que imprima dos columnas paralelas,
              una con los números del 1 al 50 y otra con los números del 50 al 1.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 15:{
             /*Escriba un programa que pida constantemente números hasta que se
              ingrese el número cero e imprima en pantalla la suma de todos los
              números ingresados.*/
             int x=0, suma=0;
             do {
                 cout<<"ingrese un numero: ";
                 cin>>x;
                 suma=suma+x;
             } while (x!=0);
             cout<<"la sumatoria es igual a: "<<suma<<endl;
             break;
         }

         case 16:{
             /*Escriba un programa que pida constantemente números hasta que se ingrese
              el número cero e imprima en pantalla el promedio de los números ingresados
              (excluyendo el cero).*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 17:{
             /*Escriba un programa que pida constantemente números hasta que se
              ingrese el número cero e imprima en pantalla el mayor de todos los
              números ingresados.*/
             int mayor=0;
             do{
                 cout<<"ingrese un numero: ";
                 cin>>N;
                 if(N>mayor)
                     mayor=N;
             }while (N!=0);
             cout<<"el mayor es: "<<mayor<<endl;

             break;
         }

         case 18:{
             /*Escriba un programa que pida un número N e imprima
              si es o no un cuadrado perfecto.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 19:{
             /*Escriba un programa que pida un número N e imprima si es
             o no un número primo.*/
             cout << "Ingrese un valor N: ";


             break;
         }

         case 20:{
             /*Escriba un programa que pida un número N e imprima si es
              o no un palíndromo (igual de derecha a izquierda que de izquierda a derecha).*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 21:{
             /*Escriba un programa que pida un carácter C, si es una letra la
              debe convertir de mayúscula a minúscula y viceversa e imprimirla.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 22:{
             /*Escriba un programa que pida una cantidad entera de segundos
              y la imprima en formato horas:minutos:segundos.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 23:{
             /*Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo
              común múltiplo entre los dos.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 24:{
             /*Escriba un programa que pida una número entero e imprima un
              cuadrado de dicho tamaño, los bordes del cuadrado deben estar
              hechos con el carácter `+' y el interior debe estar vacío.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 25:{
             /*Escriba un programa que pida un número N e imprima en
              pantalla la cantidad de dígitos de N.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 26:{
             /*Escriba un programa que pida tres números e imprima el
              tipo de triangulo (isósceles, equilátero, escaleno) que se
              formaría, si sus lados tienen la longitud denida por los números
              ingresados. Tenga en cuenta el caso en que los números ingresados
              no forman un triángulo.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 27:{
             /*Escriba un programa que actúe como una calculadora con
              operaciones de suma, resta, multiplicación y división,
              el usuario debe ingresar los operandos y la operación a realizar.*/
             cout << "";
             break;
         }

         case 28:{
             /*Escriba un programa que encuentre el valor aproximado de pi
              en base a la siguiente suma innita:

              El usuario debe ingresar el número de elementos usados en la aproximación.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 29:{
             /*Escriba un programa que adivine un número A (entre 0 y 100) seleccionado por el
             usuario (el número NO se ingresa al programa), el programa imprimirá en pantalla un número B y
             el usuario usará los símbolos `>', `<' y `=' para indicarle al programa si B es mayor, menor o igual
             que A. El programa imprimira un nuevo número B, con base en simbolo ingresado por el usuario, y
             repetira el proceso hasta acertar el número seleccionado por usuario.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 30:{
             /*Escriba un programa que genere un número aleatorio A (entre 0 y 100) y le pida al
             usuario que lo adivine, el usuario ingresa un número B y el programa le dirá si B
             es mayor o menor que A, esto se repetirá hasta que el usuario adivine el número,
             en ese momento el programa le dirá el número de intentos que tardo el usuario en
             adivinar el número.*/
             cout << "Valor sin sentido \n";
             break;
         }

         default:{
             cout << "\n\nValor fuera de rango \n\n";
             break;
         }

         }
     }
    else if (cont == char (50) ){

         cout << "Que problema desea realizar\n\n --> ";cin >> num_n;
         switch (num_n) {
         case 1:{
             /*Escriba un programa que identique si un carácter ingresado es una vocal,
             una consonante o ninguna de las 2 e imprima un mensaje según el caso.*/
             cout << "Como estas \n";
             break;
         }

         case 2:{
             /*Se necesita un programa que permita determinar la mínima combinación de billetes
             y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
             $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
             Hacer un programa que entregue el número de billetes y monedas de cada denominación para com-
             pletar la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la
             cantidad deseada, el sistema deberá decir lo que resta para lograrla.*/
             cout << "Que haces \n ";
             break;
         }

         case 3:{
             /*Escriba un programa que debe leer un mes y un día de dicho mes para luego decir
             si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero,
             en dicho caso imprimir posiblemente año bisiesto.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 4:{
             /*Escriba un programa para leer dos números enteros con el siguiente signicado: el
             valor del primer número representa una hora del día en un reloj de 24 horas, de modo que 1245
             representa las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo de du-
             ración de la misma manera, por lo que 345 representa tres horas y 45 minutos. El programa debe
             sumar esta duración primer número, y el resultado será impreso en la misma notación, en este caso
             1630, que es el tiempo de 3 horas y 45 minutos después de 12:45.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 5:{
             /*Escriba un programa que muestre el siguiente patrón en la pantalla:

                                                 *
                                                ***
                                               *****
                                              *******
                                               *****
                                                ***
                                                 *

             El tamaño del patrón estará determinado un número entero impar que
             ingrese el usuario. En el ejemplo mostrado, el tamaño de la gura es 7.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 6:{
             /*Escriba un programa que encuentre el valor aproximado del número de euler en base
             a la siguiente suma innita:

             El usuario debe ingresar el número de elementos usados en la aproximación.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 7:{
             /*En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y 1.
             Ej: 1, 1, 2, 3, 5, 8, ....
             Escriba un programa que reciba un número n y halle la suma de todos los números pares
             en la serie de Fibonacci menores a n.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 8:{
             /*Escriba un programa que reciba 3 números a, b, c, y calcule la suma
             de todos los múltiplos de a y b que sean menores a c. Tenga en cuenta
             no sumar 2 veces los múltiplos comunes.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 9:{
             /*Escriba un programa que pida un número entero N e imprima el resultado
             de la suma de todos sus dígitos elevados a sí mismos.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 10:{
             /*Escriba un programa que reciba un número n e imprima el enésimo número primo.*/

               int A,contador2,contador,N, contador3=0, acumulador;
                   cout << "Ingrese un numero: "; cin >> N;

                   contador2 = 0;

                   for(int B=1;B<=1000;B++){
                       contador=0;
                       for(int A=1;A<=B;A++){
                           if(B%A==0){
                             // contador para saber cuando el numero es primo
                             contador += 1;

                           }
                       }
                   if (contador==2){
                      // para contar la cantidad de numeros primos de 0 a 1000 de uno en uno
                      contador2++;

                   if (contador2==N){
                      // cuando la cantidad de primos es igual a N
                      cout <<"El enesimo numero primo es "<< B<< endl;
                  }

                  }
              }
             break;
         }

         case 11:{
             /*Escriba un programa que reciba un número y calcule el mínimo común
             múltiplo de todos los números enteros entre 1 y el número ingresado.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 12:{
             /*Escriba un programa que calcula el máximo factor primo de un número.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 13:{
             /*Escriba un programa que reciba un número y calcule la suma
             de todos los primos menores que el número ingresado.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 14:{
             /*Un número palíndromo es igual de derecha a izquierda y de izquierda a derecha
             Ej: 969. escriba un programa que calcule el número palíndromo más grande que se puede obtener
             como una multiplicación de números de 3 dígitos.
             Ej: una de las posibles respuestas es: 143*777=111111.
             Nota: la salida del programa debe ser: 143*777=111111*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 15:{
             /*Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario
             se genera una espiral de números como la siguiente:

                 21 22 23 24 25
                 20  7  8  9 10
                 19  6  1  2 11
                 18  5  4  3 12
                 17 16 15 14 13

             En el caso de esta espiral de 5x5, la suma de los números en la diagonal es 101.
             Escriba un programa que reciba un número impar n y calcule la suma de los números en la diagonal
             de una espiral de nxn.
             Nota: la salida del programa debe ser:
             En una espiral de 5x5, la suma es: 101.
             Otra nota: se le dará una bonicación si imprime la espiral.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 16:{
             /*La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie,
             si n es par, el siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1.
             Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor
             que k, que produce la serie más larga y diga cuantos términos m tiene la serie.
             Tip: la serie termina al llegar a un elemento cuyo valor sea 1.
             Ej: para la semilla 13: 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
             Nota: la salida del programa debe ser:
             La serie mas larga es con la semilla: j, teniendo m terminos.
             Otra nota: se le dará una bonicación si imprime la serie.*/
             cout << "Valor sin sentido \n";
             break;
         }

         case 17:{
             /*La secuencia de números triangulares se forma al sumar su posición en el arreglo
             con el valor del número anterior: 1, 1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28...
             Si listamos los números triangulares y sus divisores tenemos:

             1: 1
             3: 1,3
             6: 1,2,3,6
             10: 1,2,5,10
             15: 1,3,5,15
             21: 1,3,7,21
             28: 1,2,4,7,14,28

             Se observa que 28 es el primer número triangular que tiene más de 5 divisores. Escriba un programa
             que reciba un número k y calcule cual es el primer número triangular que tiene más de k divisores.
             Tip: el enésimo número triangular se puede representar como n*(n+1)/2.
             Nota: la salida del programa debe ser: El numero es: 28 que tiene 6 divisores.*/
             cout << "Valor sin sentido \n";
             break;
         }

     }
     }
    else {
         cout << "Valor fuera del rango\n\n";
     }

     system ("pause");
     return 0;
 }

