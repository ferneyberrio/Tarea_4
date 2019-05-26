#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>           // incluir libreria para cajas de mensaje

int num1, num2, multiplos = 0, veces, operando = 0, decimal = 0, pos_decimal = 0;
int numero;
int ingreso;
float pos_num[2]={0,0};
int alterna = 0;
int p=0;
float resultado = 0;
int veces_alterna =0;


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


// cout << "ingrese el primer numero a operar" << endl;
// cin >> ingreso;

void MainWindow::principal(){

 if(ingreso==11||ingreso==12||ingreso==13||ingreso==14||ingreso==15||ingreso==16||ingreso==17||ingreso==18){

   if (veces_alterna == 1){

   pos_num[0] =  operar_resultado( operando, pos_num[0],  pos_num[1]);
  // ui-> etiqueta1 ->setText(QString::number(pos_num[p]));
   //veces_alterna = 0;
   //cout << "el numero va en " << pos_num[0] << endl;

   }

    if (alterna == 0){
        p = 1;
        alterna = 1;
        num1=0;
        veces_alterna=1 ;
        veces = 0 ;
        multiplos = 0;}
    else{
       // p = 0;
        //alterna = 0;
        num1=0;
       // veces_alterna++ ;
        veces = 0 ;
        multiplos = 0;
        decimal=0;
    }
     ui-> etiqueta2 ->setText(Resultado);
      ui-> etiqueta1 ->setText(QString::number(pos_num[0]));
       }
}



void MainWindow::on_numero1_clicked()
{
     ingreso = 1;
      principal();

    //ui-> etiqueta1 ->setText(Resultado);
    numero = multiplo (num1, multiplos, veces);
          num1 = numero + 1;
          if(decimal == 0){
           pos_num[p] = num1;}
         if(decimal == 1) {
            pos_num[p] = (num1/ pow(10, (veces-1))); }
          ui-> etiqueta1 ->setText(QString::number(pos_num[p]));
         // cout << "el numero va en " << pos_num[p] << endl;

}

void MainWindow::on_numero2_clicked()
{
     ingreso = 2;
     principal();

    numero = multiplo (num1, multiplos, veces);
          num1 = numero + 2;
          if(decimal == 0){
           pos_num[p] = num1;}
          if(decimal == 1) {
            pos_num[p] = (num1/ pow(10, (veces-1))); }
          ui-> etiqueta1 ->setText(QString::number(pos_num[p]));

}

void MainWindow::on_numero3_clicked()
{
    ingreso = 3;
     principal();
    numero = multiplo (num1, multiplos, veces);
          num1 = numero + 3;
          if(decimal == 0){
           pos_num[p] = num1;}
          if(decimal == 1) {
            pos_num[p] = (num1/ pow(10, (veces-1))); }
          ui-> etiqueta1 ->setText(QString::number(pos_num[p]));
}

void MainWindow::on_numero4_clicked()
{
     ingreso = 4;
      principal();
    numero = multiplo (num1, multiplos, veces);
          num1 = numero + 4;
          if(decimal == 0){
           pos_num[p] = num1;}
         if(decimal == 1) {
            pos_num[p] = (num1/ pow(10, (veces-1))); }
          ui-> etiqueta1 ->setText(QString::number(pos_num[p]));
}

void MainWindow::on_numero5_clicked()
{
     ingreso = 5;
      principal();
    numero = multiplo (num1, multiplos, veces);
          num1 = numero + 5;
          if(decimal == 0){
           pos_num[p] = num1;}
          if(decimal == 1) {
            pos_num[p] = (num1/ pow(10, (veces-1))); }
          ui-> etiqueta1 ->setText(QString::number(pos_num[p]));
}

void MainWindow::on_numero6_clicked()
{
    ingreso = 6;
    principal();
    numero = multiplo (num1, multiplos, veces);
          num1 = numero + 6;
          if(decimal == 0){
           pos_num[p] = num1;}
          if(decimal == 1) {
            pos_num[p] = (num1/ pow(10, (veces-1))); }
          ui-> etiqueta1 ->setText(QString::number(pos_num[p]));
}

void MainWindow::on_numero7_clicked()
{
     ingreso = 7;
      principal();
    numero = multiplo (num1, multiplos, veces);
          num1 = numero + 7;
          if(decimal == 0){
           pos_num[p] = num1;}
         if(decimal == 1) {
            pos_num[p] = (num1/ pow(10, (veces-1))); }
          ui-> etiqueta1 ->setText(QString::number(pos_num[p]));
}

void MainWindow::on_numero8_clicked()
{
     ingreso = 8;
      principal();
    numero = multiplo (num1, multiplos, veces);
          num1 = numero + 8;
          if(decimal == 0){
           pos_num[p] = num1;}
          if(decimal == 1) {
            pos_num[p] = (num1/ pow(10, (veces-1))); }
          ui-> etiqueta1 ->setText(QString::number(pos_num[p]));
}

void MainWindow::on_numero9_clicked()
{
     ingreso = 9;
      principal();
    numero = multiplo (num1, multiplos, veces);
          num1 = numero + 9;
          if(decimal == 0){
           pos_num[p] = num1;}
         if(decimal == 1) {
            pos_num[p] = (num1/ pow(10, (veces-1))); }
          ui-> etiqueta1 ->setText(QString::number(pos_num[p]));
}

void MainWindow::on_numero_cero_clicked()
{
    ingreso = 0;
    principal();
    numero = multiplo (num1, multiplos, veces);
          num1 = numero + 0;
          if(decimal == 0){
           pos_num[p] = num1;}
          if(decimal == 1) {
            pos_num[p] = (num1/ pow(10, (veces-1))); }
          ui-> etiqueta1 ->setText(QString::number(pos_num[p]));

}

void MainWindow::on_numero_decimal_clicked()
{

       ingreso = 10;
            if(decimal == 0){ veces = 0;}
           decimal++ ;
           veces++;
            principal();

}

void MainWindow::on_T_dividir_clicked()
{

    ingreso = 14;
    principal();
     operando = 14;


              //cout << "división"<< endl    ;  // tecla /

}

void MainWindow::on_T_multip_clicked()
{
    ingreso = 13;
    principal();
     operando = 13;


             // cout << "multiplicación"<< endl  ;  // tecla x
}

void MainWindow::on_T_resta_clicked()
{

    ingreso = 12;
    principal();
    operando = 12;


             // cout << "resta"<< endl   ;  // tecla -
}

void MainWindow::on_T_suma_clicked()
{

    ingreso = 11;
      principal();
     operando = 11;


              //cout << "suma"<< endl  ;  // tecla +

}

void MainWindow::on_T_reinicia_clicked()
{
    ingreso = 16;
       num1 = 0 ;
              pos_num[0] = 0  ;
              pos_num[1] = 0 ;
              p = 0;
              num1=0;
              decimal=0;
              veces=0;
              multiplos =0;
              alterna=0;
              veces_alterna=0;
              ingreso=0;
              operando=0;

               ui-> etiqueta1 ->setText(QString::number(pos_num[0]));
             // cout << "el numero va en " << pos_num[0] << endl;
               principal();
}

void MainWindow::on_T_borrar_clicked()
{
   ingreso = 17;

   pos_num[p] = 0 ;
         ui-> etiqueta1 ->setText(QString::number(pos_num[p]));
           //  cout << "el numero va en " << pos_num[p] << endl;
           principal();
}

void MainWindow::on_T_igual_clicked()
{
 ingreso = 15;
if (veces_alterna == 0){pos_num[0] =  operar_resultado( operando, pos_num[0],  pos_num[1]);}
  principal();
}

//funciones

 // funcion para multiplos
int
multiplo (int &num1, int &multiplos, int &veces)
{
  int numFinal;

  if (veces == 1)
    {
      multiplos = 1;
    }

  numFinal = num1 * (multiplos * 10);

  // multiplos *=  10 ;
  veces++;
  return numFinal;

}

float operar_resultado( int oper, float Numero1 , float Numero2 ){
    float Resultado_oper;
    switch (oper){

     case 11: Resultado_oper = Numero1 + Numero2;
         return Resultado_oper;
     case 12: Resultado_oper = Numero1 - Numero2;
        return Resultado_oper;
     case 13: Resultado_oper = Numero1 * Numero2;
        return Resultado_oper;
     case 14: Resultado_oper = Numero1 / Numero2;
        return Resultado_oper;
     default:   ;
                 }


}

