#ifndef CONFIGURACION_H
#define CONFIGURACION_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Configuracion; }
QT_END_NAMESPACE

class Configuracion : public QDialog
{
    Q_OBJECT

public:
    Configuracion(QWidget *parent = nullptr);
    ~Configuracion();
    void guardarCfg();
    void abrirCfg();

private slots:
    void on_btnGuardar_clicked();

    void on_btnAbrir_clicked();

private:
    Ui::Configuracion *ui;
};
#endif // CONFIGURACION_H
