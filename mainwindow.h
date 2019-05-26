#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QString>               // incluir libreria para texto
#include<math.h>

// declaracion de funciones

int multiplo (int &, int &multiplos, int &veces);

 float operar_resultado( int, float ,  float );

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    void on_numero1_clicked();

    void on_numero2_clicked();

    void on_numero3_clicked();

    void on_numero4_clicked();

    void on_numero5_clicked();

    void on_numero6_clicked();

    void on_numero7_clicked();

    void on_numero8_clicked();

    void on_numero9_clicked();

    void on_numero_cero_clicked();

    void on_numero_decimal_clicked();

    void on_T_dividir_clicked();

    void on_T_multip_clicked();

    void on_T_resta_clicked();

    void on_T_suma_clicked();

    void on_T_reinicia_clicked();

    void on_T_borrar_clicked();

    void on_T_igual_clicked();

    void principal ();

private:
    Ui::MainWindow *ui;

    QString Resultado = "resultado";            // texto para mostrar el resultado
   // QString Operacion = operando ;              // texto para indicar la operacion realizada
    float Resultado_final =0;                   // almacena el resultado de la operacion

};

#endif // MAINWINDOW_H
