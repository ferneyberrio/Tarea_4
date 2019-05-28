

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>           // incluir libreria para cajas de mensaje

// declaracion de variables
  int num1, num2, multiplos = 0, veces, operando = 0, decimal = 0, pos_decimal = 0;
  int numero, ingreso, alterna=0,veces_alterna=0,p=0,q=0;
  float pos_num[2]={0,0};
  int validacion[2]={0,0};
  float resultado = 0;
  //QString operacion;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

 void MainWindow::principal(){
       q = !q;                                      // alterna la posicion del vector
       validacion[q]= ingreso;                      // valor ingresado al vector

 /******* validacion si ingresa un operador metematico *******************************/

    if(ingreso>10 && ingreso <18 && ( (validacion[0]<=10 && validacion[1]>=11)||(validacion[1]<=10 && validacion[0]>=11)) ){
    if (veces_alterna == 1){
        pos_num[0] =  operar_resultado( operando, pos_num[0],  pos_num[1]);  // llevar el resultado de la operacion
                           }
    if (alterna == 0){                              // si es la primera vez que se oprime un operador
        p = 1;
        alterna = 1;                                // alternar para siguiente operacion
        num1=0;                                     // reiniciar el numero ingresado
        veces_alterna=1 ;                           // veces que se realiza una operacion
        veces = 0 ;                                 // poner veces en cero
        multiplos = 0;}                             // decenas del numero
    else{
        num1=0;                                     //reiniciar numero ingresado
        veces = 0 ;
        multiplos = 0;                              // decenas del numero en cero
        decimal=0;
        }
    ui->LCD_calc->display(pos_num[0]);              // mostrar en display el numero actual
        }}
void MainWindow::on_numero1_clicked(){              // tecla del numero 1
        ingreso = 1;                                // almacenar el nuemero presionado
       principal();                                 // invocar la funcion principal
       multiplo (num1, multiplos, veces,ingreso);   // invocar la funcion
       ui->LCD_calc->display(pos_num[p]);           // mostrar
}
void MainWindow::on_numero2_clicked(){              // tecla del numero 1 presionada
       ingreso = 2;                                 // almacenar numero presionado
       principal();                                 // invocar funcion principal
       multiplo (num1, multiplos, veces,ingreso);   // invocar funcion
       ui->LCD_calc->display(pos_num[p]);           // mostrar en LCD
}
void MainWindow::on_numero3_clicked(){              // nuemero 3 presionado
       ingreso = 3;                                 // almacenar numero presionado
       principal();                                 // invocar funcion
       multiplo (num1, multiplos, veces,ingreso);   // invocar funcion
       ui->LCD_calc->display(pos_num[p]);           // mostrar en lcd
}
void MainWindow::on_numero4_clicked(){              // numero 4 presionado
       ingreso = 4;                                 // almacenar numero presionado
       principal();
       multiplo (num1, multiplos, veces,ingreso);
       ui->LCD_calc->display(pos_num[p]);
}
void MainWindow::on_numero5_clicked(){              // nuemero 5 presionado
       ingreso = 5;                                 // almacennar numero presionado
       principal();
       multiplo (num1, multiplos, veces,ingreso);
       ui->LCD_calc->display(pos_num[p]);
}
void MainWindow::on_numero6_clicked(){              // nuemero 6 presionado
       ingreso = 6;                                 // almacenar numero presionado
       principal();                                 // invocar funcion
       multiplo (num1, multiplos, veces,ingreso);   // invocar funcion
       ui->LCD_calc->display(pos_num[p]);           // mostrar en LCD
}
void MainWindow::on_numero7_clicked(){              // nuemero 7 presionado
       ingreso = 7;                                 //almacenar numero presionado
       principal();
       multiplo (num1, multiplos, veces,ingreso);
       ui->LCD_calc->display(pos_num[p]);
}
void MainWindow::on_numero8_clicked(){              // nuemero 8 presionado
       ingreso = 8;
       principal();
       multiplo (num1, multiplos, veces,ingreso);
       ui->LCD_calc->display(pos_num[p]);
}
void MainWindow::on_numero9_clicked(){              // nuemero 9 presionado
       ingreso = 9;
       principal();
       multiplo (num1, multiplos, veces,ingreso);
       ui->LCD_calc->display(pos_num[p]);
}
void MainWindow::on_numero_cero_clicked(){          // numero cero presionado
       ingreso = 0;
       principal();
       multiplo (num1, multiplos, veces,ingreso);
       ui->LCD_calc->display(pos_num[p]);
}
void MainWindow::on_numero_decimal_clicked(){       // tecla decimal presionada
       ingreso = 10;                                // almacenar valor presionado
   if( validacion[0] >10 ||validacion[1] >10){        // si tecla presionada es un operador
       decimal = 0;                                 // reiniciar proceso para decimal
       veces =0;}                                   // reinicia veces q es la que corre cifra decima una posicion
       if(decimal == 0){ veces = 0;}                // si se reinicia el proceso de decimal
       decimal++ ;                                  // el numero ingresado empieza a ser en posicion decimal
       veces++;                                     // aumentar veces que se corre la posicion decimal
       principal();                                 // invoca funcion para realizar la operaciones matematicas
}
void MainWindow::on_T_dividir_clicked(){            // tecla division presionada
       ingreso = 14;                                // almacena valor ingresado
       principal();
       operando = 14;                               // identificador del operando presionado
}
void MainWindow::on_T_multip_clicked(){             // tecla multiplicacipn presionada
       ingreso = 13;                                // almacena valor ingresado
       principal();                                 // invoca funcion para realizar operaciones
       operando = 13;                               // identificador del operando presionado
}
void MainWindow::on_T_resta_clicked(){              // tecla de resta presionada
       ingreso = 12;                                // almacena valor ingresado
       principal();
       operando = 12;                               // identificador del operando presionado
 }
void MainWindow::on_T_suma_clicked(){               // tecla de suma presionado
       ingreso = 11;                                // almacena el valor presionado
       principal();
       operando = 11;                               // identificador del operando presionado
}
void MainWindow::on_T_reinicia_clicked(){           // tecla reiniciar presionada "CE"
       ingreso = 16;                                // almacenar valor ingresado
       num1 = 0 ;                                   // reiniciar la cuenta que lleva el numero
       pos_num[0] = 0  ;                            // primer nuemero ingresado
       pos_num[1] = 0 ;                             // segundo numero ingresado
       p = 0;                                       // posicion de vector de los numneros ingresados
       num1=0;
       decimal=0;
       veces=0;
       multiplos =0;
       alterna=0;
       veces_alterna=0;
       ingreso=0;                                   //almacenador del numero ingresado
       operando=0;
       validacion[0]=0;                             // validacion si se presiono un operando pos 0
       validacion[1]=0;                             // validacion si se presiono un operando pos 1
       ui->LCD_calc->display(pos_num[0]);           // mostrar en LCD
       principal();                                 // invocar funcion para ejecutar las operaciones
        operacion = "";                            // borrar texto de la etiqueta
       ui -> etiqueta2 -> setText(operacion);        // mostrar vacio
}
void MainWindow::on_T_borrar_clicked(){             // Tecla borrar numero recien ingresado
       ingreso = 17;                                // almcena el valor ingresado
       pos_num[p] = 0 ;
       ui->LCD_calc->display(pos_num[p]);           // muestra en LCD
       principal();                                 // invoca funcion
}
void MainWindow::on_T_igual_clicked(){              // tecla igual presionada
       ingreso = 15;                                // almcena el valor presionado
       if (veces_alterna == 0){                     // si se presiona la tecla igual antes que otro operando

    /*** invocar el funcion que realiza la operacion y almacenarlo en lugar del 1Er nuemro ingresado***/
       pos_num[0] =  operar_resultado( operando, pos_num[0],  pos_num[1]);}
       else{ principal();}
       ui->LCD_calc->display(pos_num[0]);            //mostrar en LCD valor actual
}

/***************funciones******************************************/

 /************ funcion para multiplos*************/

void multiplo (int &num1, int &multiplos, int &veces, int ingreso){
        int numFinal;                                // variable provicional
        if (veces == 1){                             // si ya se ha oprimido un numero
        multiplos = 1;                               // habilita corre cifras decimales
                        }
        numFinal = num1 * (multiplos * 10);          // numero ingresado correlo una cifra decimal a la derecha
        // multiplos *=  10 ;                        // opcional para mover cacilla decimal
        veces++;                                     // aumentar veces de numero ingresado
        num1 = numFinal + ingreso;                   // al numero que va aumentarle el recien precionado
        if(decimal == 0){                            // si no se presiona tecla punto decimal
        pos_num[p] = num1;}                          // almacenar numero ingresado
        if(decimal == 1) {                           // si se presiono tecla punto decimal
        pos_num[p] = (num1/ pow(10, (veces-1))); }   // operacion para almacenar numero presionado despues de punto decimal
                                                                    }

/*******funcion para operar nuemros con la operacion seleccionada********/

float MainWindow::operar_resultado( int oper, float Numero1 , float Numero2 ){
         float Resultado_oper;                        // variable provicional
    switch (oper){                                    // casos segun operador oprimido
         case 11: Resultado_oper = Numero1 + Numero2; // operar la suma entre los dos numeros
         operacion = "la SUMA da como resultado";     // texto para la operacion
          ui -> etiqueta2 -> setText(operacion);      // mostrar la operación realizada
         return Resultado_oper;                       // retornar el resultado de la operacion
         case 12: Resultado_oper = Numero1 - Numero2; // operar la resta entre los dos numeros
        operacion = "la RESTA da como resultado";
        ui -> etiqueta2 -> setText(operacion);        // mostrar la operación realizada
         return Resultado_oper;                       // retornar el resultado de la operacion
         case 13: Resultado_oper = Numero1 * Numero2; // operar la multip entre los dos numeros
        operacion = "la MULTIPLICACION da como resultado";
        ui -> etiqueta2 -> setText(operacion);        // mostrar la operación realizada
         return Resultado_oper;                       // retornar el resultado de la operacion
         case 14: Resultado_oper = Numero1 / Numero2; // operar la division entre los dos numeros
        operacion = "la DIVISIÓN da como resultado";  //
        ui -> etiqueta2 -> setText(operacion);        // mostrar la operación realizada
         return Resultado_oper;                       // retornar el resultado de la operacion
         default:   ;                                 // si no es ninguno de los casos
                 }
                 }

