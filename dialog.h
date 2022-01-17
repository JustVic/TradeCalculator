#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void Shares_clicked();
    void Futures_clicked();
    void Forex_clicked();
    void About_clicked();

    void AboutBack_clicked();

    void SharesCalculation1_clicked();
    void SharesCalculation2_clicked();
    void SharesCalculation3_clicked();
    void FuturesCalculation1_clicked();
    void FuturesCalculation2_clicked();
    void FuturesCalculation3_clicked();
    void ForexCalculation1_clicked();
    void ForexCalculation2_clicked();
    void ForexCalculation3_clicked();

    void SharesCalculate1_clicked();
    void SharesCalculate2_clicked();
    void SharesCalculate3_clicked();
    void FuturesCalculate1_clicked();
    void FuturesCalculate2_clicked();
    void FuturesCalculate3_clicked();
    void ForexCalculate1_clicked();
    void ForexCalculate2_clicked();
    void ForexCalculate3_clicked();

    void BackToMenu_clicked();

    void SharesCalculate1();
    void SharesCalculate2();
    void SharesCalculate3();
    void FuturesCalculate1();
    void FuturesCalculate2();
    void FuturesCalculate3();
    void ForexCalculate1();
    void ForexCalculate2();
    void ForexCalculate3();
/*  void Shares_clicked();
    void Futures_clicked();
    void Forex_clicked();

    void Shares_clicked();
    void Futures_clicked();
    void Forex_clicked();

    void Shares_clicked();
    void Futures_clicked();
    void Forex_clicked();*/
private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
