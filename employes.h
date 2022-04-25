#ifndef EMPLOYES_H
#define EMPLOYES_H

#include <QDialog>
#include "employe.h"
#include "transaction.h"
#include"popup.h"
#include <QListWidget>

namespace Ui {
class employes;
}

class employes : public QDialog
{
    Q_OBJECT

public:
    explicit employes(QWidget *parent = nullptr);
    ~employes();

private slots :
    void on_pushButton_ajouter_clicked();
     void on_pushButton_supprimer_clicked();
     void on_pushButton_modifier_clicked();

     void on_tri_nom_clicked();

     void on_tri_id_clicked();

     void on_lineEdit_rech_textEdited(const QString &arg1);

     void on_pushButton_clicked();

     void on_pushButton_2_clicked();

     void on_buttonafficher_clicked();

     void on_pushButton_3_clicked();



     void on_tri_prenom_clicked();
     void on_listWidget_itemClicked(QListWidgetItem *item);

     void on_pushButton_4_clicked();

     void on_pushButton_12_clicked();

     void on_pushButton_15_clicked();

     void on_pushButton_14_clicked();

     void on_pushButton_8_clicked();

     void on_pushButton_6_clicked();

     void on_pushButton_5_clicked();

     void on_pushButton_32_clicked();

     void on_pushButton_34_clicked();

     void on_pushButton_16_clicked();

     void on_pushButton_38_clicked();

     void on_pushButton_29_clicked();

     void on_pushButton_31_clicked();

     void on_pushButton_7_clicked();

     void on_pushButton_9_clicked();

     void on_pushButton_10_clicked();

private:
    Ui::employes *ui;
    employe Etmp;
    PopUp *popUp;
    transactions t;

};

#endif // EMPLOYES_H
