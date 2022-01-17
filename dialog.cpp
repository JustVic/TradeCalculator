#include "dialog.h"
#include "ui_TradeCalculator.h"

#include "mmcalc3.h"

#include "stdio.h"
#include <iostream>

#include <vector>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    //ui->stackedWidget->setStyleSheet("background-color: gold");
    ui->stackedWidget->setCurrentIndex(0); // set default page (green color)
    //connect(page1Widget->getUi().btnViewData, SIGNAL(clicked()), this, SLOT(viewData));

    int w = ui->label_3->width();
    int h = ui->label_3->height();

    QPixmap pic("./businessmaninarmchair2.png");

    ui->label_3->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio));
    ui->label_3->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    ui->lineEdit->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_2->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_3->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_4->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_5->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_6->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_7->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_8->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_9->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_10->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_11->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_12->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_13->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_14->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_15->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_16->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_17->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_18->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_19->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_20->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_21->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_22->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_23->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_24->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_25->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_26->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_27->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_28->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_29->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_30->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_31->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_32->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_33->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_34->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_35->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_36->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_37->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_38->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_39->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_40->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_41->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_42->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_43->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_44->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_45->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_46->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_47->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_48->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_49->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_50->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_51->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_52->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_53->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_54->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_55->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_56->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_57->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_58->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_59->setValidator( new QDoubleValidator(0, 1000000, 6, this) );
    ui->lineEdit_60->setValidator( new QDoubleValidator(0, 1000000, 6, this) );


    connect(ui->pushButton_4,SIGNAL(released()),SLOT(About_clicked()));
    connect(ui->pushButton,SIGNAL(released()),SLOT(Shares_clicked()));
    connect(ui->pushButton_2,SIGNAL(released()),SLOT(Futures_clicked()));
    connect(ui->pushButton_3,SIGNAL(released()),SLOT(Forex_clicked()));


    connect(ui->pushButton_5,SIGNAL(released()),SLOT(AboutBack_clicked()));

    connect(ui->pushButton_6,SIGNAL(released()),SLOT(SharesCalculation1_clicked()));
    connect(ui->pushButton_7,SIGNAL(released()),SLOT(SharesCalculation2_clicked()));
    connect(ui->pushButton_8,SIGNAL(released()),SLOT(SharesCalculation3_clicked()));
    connect(ui->pushButton_10,SIGNAL(released()),SLOT(FuturesCalculation1_clicked()));
    connect(ui->pushButton_11,SIGNAL(released()),SLOT(FuturesCalculation2_clicked()));
    connect(ui->pushButton_9,SIGNAL(released()),SLOT(FuturesCalculation3_clicked()));
    connect(ui->pushButton_12,SIGNAL(released()),SLOT(ForexCalculation1_clicked()));
    connect(ui->pushButton_13,SIGNAL(released()),SLOT(ForexCalculation2_clicked()));
    connect(ui->pushButton_14,SIGNAL(released()),SLOT(ForexCalculation3_clicked()));

    connect(ui->pushButton_15,SIGNAL(released()),SLOT(SharesCalculate1_clicked()));
    connect(ui->pushButton_18,SIGNAL(released()),SLOT(SharesCalculate2_clicked()));
    connect(ui->pushButton_22,SIGNAL(released()),SLOT(SharesCalculate3_clicked()));
    connect(ui->pushButton_21,SIGNAL(released()),SLOT(FuturesCalculate1_clicked()));
    connect(ui->pushButton_20,SIGNAL(released()),SLOT(FuturesCalculate2_clicked()));
    connect(ui->pushButton_19,SIGNAL(released()),SLOT(FuturesCalculate3_clicked()));
    connect(ui->pushButton_23,SIGNAL(released()),SLOT(ForexCalculate1_clicked()));
    connect(ui->pushButton_24,SIGNAL(released()),SLOT(ForexCalculate2_clicked()));
    connect(ui->pushButton_25,SIGNAL(released()),SLOT(ForexCalculate3_clicked()));

    connect(ui->pushButton_17,SIGNAL(released()),SLOT(BackToMenu_clicked()));

}

void Dialog::Shares_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Dialog::Futures_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void Dialog::Forex_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void Dialog::About_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void Dialog::AboutBack_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Dialog::SharesCalculation1_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void Dialog::SharesCalculation2_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void Dialog::SharesCalculation3_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void Dialog::FuturesCalculation1_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void Dialog::FuturesCalculation2_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void Dialog::FuturesCalculation3_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}


void Dialog::ForexCalculation1_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}

void Dialog::ForexCalculation2_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}

void Dialog::ForexCalculation3_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);
}

void Dialog::SharesCalculate1_clicked()
{
    if((ui->lineEdit->text().isEmpty())or(ui->lineEdit_2->text().isEmpty())or(ui->lineEdit_3->text().isEmpty())or(ui->lineEdit_4->text().isEmpty())or(ui->lineEdit_5->text().isEmpty())or(ui->lineEdit_6->text().isEmpty())or(ui->lineEdit_7->text().isEmpty()))
    {
    }
    else{
        this->SharesCalculate1();
    }

}
void Dialog::SharesCalculate2_clicked()
{
    if((ui->lineEdit_8->text().isEmpty())or(ui->lineEdit_9->text().isEmpty())or(ui->lineEdit_10->text().isEmpty())or(ui->lineEdit_11->text().isEmpty())or(ui->lineEdit_12->text().isEmpty())or(ui->lineEdit_56->text().isEmpty())or(ui->lineEdit_57->text().isEmpty()))
    {
    }
    else{
        this->SharesCalculate2();
    }

}
void Dialog::SharesCalculate3_clicked()
{
    if((ui->lineEdit_13->text().isEmpty())or(ui->lineEdit_14->text().isEmpty())or(ui->lineEdit_15->text().isEmpty())or(ui->lineEdit_16->text().isEmpty())or(ui->lineEdit_17->text().isEmpty())or(ui->lineEdit_18->text().isEmpty())or(ui->lineEdit_57->text().isEmpty()))
    {
    }
    else{
        this->SharesCalculate3();
    }

}
void Dialog::FuturesCalculate1_clicked()
{
    if((ui->lineEdit_19->text().isEmpty())or(ui->lineEdit_20->text().isEmpty())or(ui->lineEdit_21->text().isEmpty())or(ui->lineEdit_22->text().isEmpty())or(ui->lineEdit_23->text().isEmpty())or(ui->lineEdit_24->text().isEmpty()))
    {
    }
    else{
        this->FuturesCalculate1();
    }

}
void Dialog::FuturesCalculate2_clicked()
{
    if((ui->lineEdit_25->text().isEmpty())or(ui->lineEdit_26->text().isEmpty())or(ui->lineEdit_27->text().isEmpty())or(ui->lineEdit_28->text().isEmpty())or(ui->lineEdit_29->text().isEmpty())or(ui->lineEdit_30->text().isEmpty()))
    {
    }
    else{
        this->FuturesCalculate2();
    }

}
void Dialog::FuturesCalculate3_clicked()
{
    if((ui->lineEdit_31->text().isEmpty())or(ui->lineEdit_32->text().isEmpty())or(ui->lineEdit_33->text().isEmpty())or(ui->lineEdit_34->text().isEmpty())or(ui->lineEdit_35->text().isEmpty())or(ui->lineEdit_36->text().isEmpty()))
    {
    }
    else{
        this->FuturesCalculate3();
    }

}
void Dialog::ForexCalculate1_clicked()
{
    if((ui->lineEdit_37->text().isEmpty())or(ui->lineEdit_38->text().isEmpty())or(ui->lineEdit_39->text().isEmpty())or(ui->lineEdit_40->text().isEmpty())or(ui->lineEdit_41->text().isEmpty())or(ui->lineEdit_42->text().isEmpty())or(ui->lineEdit_58->text().isEmpty()))
    {
    }
    else{
        this->ForexCalculate1();
    }

}
void Dialog::ForexCalculate2_clicked()
{
    if((ui->lineEdit_43->text().isEmpty())or(ui->lineEdit_44->text().isEmpty())or(ui->lineEdit_45->text().isEmpty())or(ui->lineEdit_46->text().isEmpty())or(ui->lineEdit_47->text().isEmpty())or(ui->lineEdit_48->text().isEmpty())or(ui->lineEdit_59->text().isEmpty()))
    {
    }
    else{
        this->ForexCalculate2();
    }

}
void Dialog::ForexCalculate3_clicked()
{
    if((ui->lineEdit_49->text().isEmpty())or(ui->lineEdit_50->text().isEmpty())or(ui->lineEdit_51->text().isEmpty())or(ui->lineEdit_52->text().isEmpty())or(ui->lineEdit_53->text().isEmpty())or(ui->lineEdit_54->text().isEmpty())or(ui->lineEdit_60->text().isEmpty()))
    {
    }
    else{
        this->ForexCalculate3();
    }

}


//-----------------------------------------------------------------
void Dialog::SharesCalculate1()
{
    ui->ResultTableWidget2->setRowCount(0);

    //==============================================
    QStringList verHeaderList({"Size Of Loss", "Distance beetwen trades", "Balance to make trades"});
    ui->ResultTableWidget->setRowCount(verHeaderList.size());
    ui->ResultTableWidget->setVerticalHeaderLabels(verHeaderList);
    ui->ResultTableWidget->horizontalHeader()->hide();


    QStringList verHeaderList3({"Price", "QuantityOfTrades", "SizeOfSingleTrade", "PercentOfLoose", "Multiplication", "Step", "PriceStep"});
    ui->ResultTableWidget3->setRowCount(verHeaderList3.size());
    ui->ResultTableWidget3->setVerticalHeaderLabels(verHeaderList3);
    ui->ResultTableWidget3->horizontalHeader()->hide();

    //===============================================================
    //SetupResultedData
    double Price = ui->lineEdit->text().toDouble();
    int QuantityOfTrades = ui->lineEdit_2->text().toInt();
    double SizeOfSingleTrade = ui->lineEdit_3->text().toDouble();
    double PercentOfLoose = ui->lineEdit_4->text().toDouble();
    int Multiplication = ui->lineEdit_5->text().toInt();
    double Step = ui->lineEdit_6->text().toDouble();
    double PriceOfStep = ui->lineEdit_7->text().toDouble();

    double Trades[QuantityOfTrades][2];

    bool flag = calculate_size_of_loss_shares(Price, SizeOfSingleTrade, QuantityOfTrades, PercentOfLoose, Multiplication, Step, PriceOfStep, Trades);

    if(!flag)
    {
        QMessageBox Msgbox;
        Msgbox.setText("Entered Data is Incorrect");
        Msgbox.exec();
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(14);

        ui->ResultTableWidget->setItem(0, 0, new QTableWidgetItem(QString::number(Trades[QuantityOfTrades-1][0])));
        ui->ResultTableWidget->setItem(1, 0, new QTableWidgetItem(QString::number(Trades[0][1]-Trades[1][1])));
        ui->ResultTableWidget->setItem(2, 0, new QTableWidgetItem(QString::number(QuantityOfTrades*SizeOfSingleTrade))); ///FIX - WRONG DATA

        for(int i=0; i < QuantityOfTrades; i++)
        {
            ui->ResultTableWidget2->insertRow(ui->ResultTableWidget2->rowCount());

            ui->ResultTableWidget2->setItem(i, 0, new QTableWidgetItem(QString::number(Trades[i][0])));
            ui->ResultTableWidget2->setItem(i, 1, new QTableWidgetItem(QString::number( Trades[i][1] )));
        }

        //InitialData Setup
        ui->ResultTableWidget3->setItem(0, 0, new QTableWidgetItem(ui->lineEdit->text()));
        ui->ResultTableWidget3->setItem(1, 0, new QTableWidgetItem(ui->lineEdit_2->text()));
        ui->ResultTableWidget3->setItem(2, 0, new QTableWidgetItem(ui->lineEdit_3->text()));
        ui->ResultTableWidget3->setItem(3, 0, new QTableWidgetItem(ui->lineEdit_4->text()));
        ui->ResultTableWidget3->setItem(4, 0, new QTableWidgetItem(ui->lineEdit_5->text()));
        ui->ResultTableWidget3->setItem(5, 0, new QTableWidgetItem(ui->lineEdit_6->text()));
        ui->ResultTableWidget3->setItem(6, 0, new QTableWidgetItem(ui->lineEdit_7->text()));


        //=============================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget, Qt::AlignHCenter);

        ui->ResultTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        for(int i=0; i<1; i++)
            ui->ResultTableWidget->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);


        ui->ResultTableWidget->resizeColumnsToContents();
        ui->ResultTableWidget->resizeRowsToContents();
        ui->ResultTableWidget->setFixedSize(ui->ResultTableWidget->horizontalHeader()->length() +
                       ui->ResultTableWidget->verticalHeader()->width(),
                       ui->ResultTableWidget->verticalHeader()->length() +
                       ui->ResultTableWidget->horizontalHeader()->height());

        //-=========================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget2, Qt::AlignHCenter);


        ui->ResultTableWidget2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        for(int i=0; i<2; i++)
            ui->ResultTableWidget2->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);



        ui->ResultTableWidget2->resizeColumnsToContents();
        ui->ResultTableWidget2->resizeRowsToContents();
        ui->ResultTableWidget2->setFixedSize(ui->ResultTableWidget2->horizontalHeader()->length() +
                       ui->ResultTableWidget2->verticalHeader()->width(),
                       ui->ResultTableWidget2->verticalHeader()->length() +
                       ui->ResultTableWidget2->horizontalHeader()->height());

        //=====================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget3, Qt::AlignHCenter);


        ui->ResultTableWidget3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        ui->ResultTableWidget3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        for(int i=0; i<1; i++)
            ui->ResultTableWidget3->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);


        ui->ResultTableWidget3->resizeColumnsToContents();
        ui->ResultTableWidget3->resizeRowsToContents();
        ui->ResultTableWidget3->setFixedSize(ui->ResultTableWidget3->horizontalHeader()->length() +
                       ui->ResultTableWidget3->verticalHeader()->width(),
                       ui->ResultTableWidget3->verticalHeader()->length() +
                       ui->ResultTableWidget3->horizontalHeader()->height());

        ui->ResultTableWidget3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    }


    //================================================================== 
    //Cleanup
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();

}

void Dialog::SharesCalculate2()
{
    ui->ResultTableWidget2->setRowCount(0);

    //==============================================

    QStringList verHeaderList({"Quantity Of Trades", "Distance beetwen trades", "Size Of Loss"});
    ui->ResultTableWidget->setRowCount(verHeaderList.size());
    ui->ResultTableWidget->setVerticalHeaderLabels(verHeaderList);
    ui->ResultTableWidget->horizontalHeader()->hide();

    QStringList verHeaderList3({"Price", "SizeOfLoss", "SizeOfSingleTrade", "PercentOfLoose", "Multiplication", "Step", "PriceStep"});
    ui->ResultTableWidget3->setRowCount(verHeaderList3.size());
    ui->ResultTableWidget3->setVerticalHeaderLabels(verHeaderList3);
    ui->ResultTableWidget3->horizontalHeader()->hide();

    //===============================================================
    //SetupResultedData

    double Price = ui->lineEdit_8->text().toDouble();
    double SumOfLoss = ui->lineEdit_9->text().toDouble();
    double SizeOfSingleTrade = ui->lineEdit_10->text().toDouble();
    double PercentOfLoose = ui->lineEdit_11->text().toDouble();
    int Multiplication = ui->lineEdit_12->text().toInt();
    double Step = ui->lineEdit_55->text().toDouble();
    double PriceOfStep = ui->lineEdit_56->text().toDouble();


    std::vector<std::vector<double>>* Trades;
    Trades = new std::vector<std::vector<double>>;

    int n = calculate_bets_quantity_currency(Price, SumOfLoss, SizeOfSingleTrade, PercentOfLoose, Multiplication, Step, PriceOfStep, Trades);

    if(n==-1)
    {
        QMessageBox Msgbox;
        Msgbox.setText("Entered Data is Incorrect");
        Msgbox.exec();
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(14);

        ui->ResultTableWidget->setItem(0, 0, new QTableWidgetItem(QString::number(n)));
        ui->ResultTableWidget->setItem(1, 0, new QTableWidgetItem(QString::number((*Trades)[0][1]-(*Trades)[1][1])));
        ui->ResultTableWidget->setItem(2, 0, new QTableWidgetItem(QString::number((*Trades)[n-1][0])));


        for(int i=0; i < n; i++)
        {
            ui->ResultTableWidget2->insertRow(ui->ResultTableWidget2->rowCount());

            ui->ResultTableWidget2->setItem(i, 0, new QTableWidgetItem(QString::number((*Trades)[i][0])));
            ui->ResultTableWidget2->setItem(i, 1, new QTableWidgetItem(QString::number( (*Trades)[i][1] )));
        }

        //InitialData Setup
        ui->ResultTableWidget3->setItem(0, 0, new QTableWidgetItem(ui->lineEdit_8->text()));
        ui->ResultTableWidget3->setItem(1, 0, new QTableWidgetItem(ui->lineEdit_9->text()));
        ui->ResultTableWidget3->setItem(2, 0, new QTableWidgetItem(ui->lineEdit_10->text()));
        ui->ResultTableWidget3->setItem(3, 0, new QTableWidgetItem(ui->lineEdit_11->text()));
        ui->ResultTableWidget3->setItem(4, 0, new QTableWidgetItem(ui->lineEdit_12->text()));
        ui->ResultTableWidget3->setItem(5, 0, new QTableWidgetItem(ui->lineEdit_55->text()));
        ui->ResultTableWidget3->setItem(6, 0, new QTableWidgetItem(ui->lineEdit_56->text()));

        //=============================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget, Qt::AlignHCenter);

        ui->ResultTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        for(int i=0; i<1; i++)
            ui->ResultTableWidget->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);


        ui->ResultTableWidget->resizeColumnsToContents();
        ui->ResultTableWidget->resizeRowsToContents();
        ui->ResultTableWidget->setFixedSize(ui->ResultTableWidget->horizontalHeader()->length() +
                       ui->ResultTableWidget->verticalHeader()->width(),
                       ui->ResultTableWidget->verticalHeader()->length() +
                       ui->ResultTableWidget->horizontalHeader()->height());

        //-=========================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget2, Qt::AlignHCenter);


        ui->ResultTableWidget2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        for(int i=0; i<2; i++)
            ui->ResultTableWidget2->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);



        ui->ResultTableWidget2->resizeColumnsToContents();
        ui->ResultTableWidget2->resizeRowsToContents();
        ui->ResultTableWidget2->setFixedSize(ui->ResultTableWidget2->horizontalHeader()->length() +
                       ui->ResultTableWidget2->verticalHeader()->width(),
                       ui->ResultTableWidget2->verticalHeader()->length() +
                       ui->ResultTableWidget2->horizontalHeader()->height());

        //=====================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget3, Qt::AlignHCenter);


        ui->ResultTableWidget3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        ui->ResultTableWidget3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        for(int i=0; i<1; i++)
            ui->ResultTableWidget3->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);


        ui->ResultTableWidget3->resizeColumnsToContents();
        ui->ResultTableWidget3->resizeRowsToContents();
        ui->ResultTableWidget3->setFixedSize(ui->ResultTableWidget3->horizontalHeader()->length() +
                       ui->ResultTableWidget3->verticalHeader()->width(),
                       ui->ResultTableWidget3->verticalHeader()->length() +
                       ui->ResultTableWidget3->horizontalHeader()->height());

        ui->ResultTableWidget3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    }


    //==================================================================
    //Cleanup
    delete(Trades);

    ui->lineEdit_8->clear();
    ui->lineEdit_9->clear();
    ui->lineEdit_10->clear();
    ui->lineEdit_11->clear();
}

void Dialog::SharesCalculate3()
{
    ui->ResultTableWidget2->setRowCount(0);

    //==============================================

    QStringList verHeaderList({"Percentage Loss", "Distance beetwen trades", "Size Of Loss"});
    ui->ResultTableWidget->setRowCount(verHeaderList.size());
    ui->ResultTableWidget->setVerticalHeaderLabels(verHeaderList);
    ui->ResultTableWidget->horizontalHeader()->hide();

    QStringList verHeaderList3({"Price", "SizeOfLoss", "SizeOfSingleTrade", "Quantity", "Multiplication", "Step", "PriceStep"});
    ui->ResultTableWidget3->setRowCount(verHeaderList3.size());
    ui->ResultTableWidget3->setVerticalHeaderLabels(verHeaderList3);
    ui->ResultTableWidget3->horizontalHeader()->hide();

    //===============================================================
    //SetupResultedData

    double Price = ui->lineEdit_13->text().toDouble();
    double Balance = ui->lineEdit_14->text().toDouble();
    double SizeOfSingleTrade = ui->lineEdit_15->text().toDouble();
    int QuantityOfTrades = ui->lineEdit_16->text().toInt();
    int Multiplication = ui->lineEdit_17->text().toInt();
    double Step = ui->lineEdit_18->text().toDouble();
    double PriceOfStep = ui->lineEdit_57->text().toDouble();

    double Trades[QuantityOfTrades][2];

    bool flag = calculate_percent_of_loose_shares(Price, SizeOfSingleTrade, QuantityOfTrades, Balance,  Multiplication, Step, PriceOfStep, Trades);

    if(!flag)
    {
        QMessageBox Msgbox;
        Msgbox.setText("Entered Data is Incorrect");
        Msgbox.exec();
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(14);

        double OnePercent = Trades[0][1]/100;
        double finalPercent = (Trades[0][1]-Trades[QuantityOfTrades-1][1]) / OnePercent;

        ui->ResultTableWidget->setItem(0, 0, new QTableWidgetItem(QString::number(finalPercent)));
        ui->ResultTableWidget->setItem(1, 0, new QTableWidgetItem(QString::number(Trades[0][1]-Trades[1][1])));
        ui->ResultTableWidget->setItem(2, 0, new QTableWidgetItem(QString::number(Trades[QuantityOfTrades-1][0])));

        for(int i=0; i < QuantityOfTrades; i++)
        {
            ui->ResultTableWidget2->insertRow(ui->ResultTableWidget2->rowCount());

            ui->ResultTableWidget2->setItem(i, 0, new QTableWidgetItem(QString::number(Trades[i][0])));
            ui->ResultTableWidget2->setItem(i, 1, new QTableWidgetItem(QString::number( Trades[i][1] )));
        }

        //InitialData Setup
        ui->ResultTableWidget3->setItem(0, 0, new QTableWidgetItem(ui->lineEdit_13->text()));
        ui->ResultTableWidget3->setItem(1, 0, new QTableWidgetItem(ui->lineEdit_14->text()));
        ui->ResultTableWidget3->setItem(2, 0, new QTableWidgetItem(ui->lineEdit_15->text()));
        ui->ResultTableWidget3->setItem(3, 0, new QTableWidgetItem(ui->lineEdit_16->text()));
        ui->ResultTableWidget3->setItem(4, 0, new QTableWidgetItem(ui->lineEdit_17->text()));
        ui->ResultTableWidget3->setItem(5, 0, new QTableWidgetItem(ui->lineEdit_18->text()));
        ui->ResultTableWidget3->setItem(6, 0, new QTableWidgetItem(ui->lineEdit_57->text()));

        //=============================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget, Qt::AlignHCenter);

        ui->ResultTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        for(int i=0; i<1; i++)
            ui->ResultTableWidget->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);


        ui->ResultTableWidget->resizeColumnsToContents();
        ui->ResultTableWidget->resizeRowsToContents();
        ui->ResultTableWidget->setFixedSize(ui->ResultTableWidget->horizontalHeader()->length() +
                       ui->ResultTableWidget->verticalHeader()->width(),
                       ui->ResultTableWidget->verticalHeader()->length() +
                       ui->ResultTableWidget->horizontalHeader()->height());

        //-=========================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget2, Qt::AlignHCenter);


        ui->ResultTableWidget2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        for(int i=0; i<2; i++)
            ui->ResultTableWidget2->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);



        ui->ResultTableWidget2->resizeColumnsToContents();
        ui->ResultTableWidget2->resizeRowsToContents();
        ui->ResultTableWidget2->setFixedSize(ui->ResultTableWidget2->horizontalHeader()->length() +
                       ui->ResultTableWidget2->verticalHeader()->width(),
                       ui->ResultTableWidget2->verticalHeader()->length() +
                       ui->ResultTableWidget2->horizontalHeader()->height());

        //=====================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget3, Qt::AlignHCenter);


        ui->ResultTableWidget3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        ui->ResultTableWidget3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        for(int i=0; i<1; i++)
            ui->ResultTableWidget3->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);


        ui->ResultTableWidget3->resizeColumnsToContents();
        ui->ResultTableWidget3->resizeRowsToContents();
        ui->ResultTableWidget3->setFixedSize(ui->ResultTableWidget3->horizontalHeader()->length() +
                       ui->ResultTableWidget3->verticalHeader()->width(),
                       ui->ResultTableWidget3->verticalHeader()->length() +
                       ui->ResultTableWidget3->horizontalHeader()->height());

        ui->ResultTableWidget3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    }

    //==================================================================
    //Cleanup
    ui->lineEdit_13->clear();
    ui->lineEdit_14->clear();
    ui->lineEdit_15->clear();
    ui->lineEdit_16->clear();
}

void Dialog::FuturesCalculate1()
{

    ui->ResultTableWidget2->setRowCount(0);

    //==============================================
    QStringList verHeaderList({"Required balance"});
    ui->ResultTableWidget->setRowCount(verHeaderList.size());
    ui->ResultTableWidget->setVerticalHeaderLabels(verHeaderList);
    ui->ResultTableWidget->horizontalHeader()->hide();

    QStringList verHeaderList3({"Price", "InitialMargin", "Quantity", "PercentOfLoose", "Step", "PriceStep"});
    ui->ResultTableWidget3->setRowCount(verHeaderList3.size());
    ui->ResultTableWidget3->setVerticalHeaderLabels(verHeaderList3);
    ui->ResultTableWidget3->horizontalHeader()->hide();

    //===============================================================
    //SetupResultedData
    double Price = ui->lineEdit_19->text().toDouble();
    double InitialMargin = ui->lineEdit_20->text().toDouble();
    double QuantityOfTrades = ui->lineEdit_21->text().toDouble();
    double PercentOfLoose = ui->lineEdit_22->text().toDouble();
    //double Multiplication = 1;
    double Step = ui->lineEdit_23->text().toDouble();
    double PriceOfStep = ui->lineEdit_24->text().toDouble();

    int n = QuantityOfTrades;
    double Trades[n][2];

    bool flag = true; calculate_balance_futures(Price, InitialMargin, InitialMargin, n, PercentOfLoose, Step, PriceOfStep, Trades);

    if(!flag)
    {
        QMessageBox Msgbox;
        Msgbox.setText("Entered Data is Incorrect");
        Msgbox.exec();
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(14);

        ui->ResultTableWidget->setItem(0, 0, new QTableWidgetItem(QString::number(Trades[n-1][0])));

        for(int i=0; i < n; i++)
        {
            ui->ResultTableWidget2->insertRow(ui->ResultTableWidget2->rowCount());
            ui->ResultTableWidget2->setItem(i, 0, new QTableWidgetItem(QString::number(Trades[i][0])));
            ui->ResultTableWidget2->setItem(i, 1, new QTableWidgetItem(QString::number( Trades[i][1] )));
        }

        while(ui->ResultTableWidget2->rowCount()>n)
            ui->ResultTableWidget2->removeRow(ui->ResultTableWidget2->rowCount()-1);

        //InitialData Setup
        ui->ResultTableWidget3->setItem(0, 0, new QTableWidgetItem(ui->lineEdit_19->text()));
        ui->ResultTableWidget3->setItem(1, 0, new QTableWidgetItem(ui->lineEdit_20->text()));
        ui->ResultTableWidget3->setItem(2, 0, new QTableWidgetItem(ui->lineEdit_21->text()));
        ui->ResultTableWidget3->setItem(3, 0, new QTableWidgetItem(ui->lineEdit_22->text()));
        ui->ResultTableWidget3->setItem(4, 0, new QTableWidgetItem(ui->lineEdit_23->text()));
        ui->ResultTableWidget3->setItem(5, 0, new QTableWidgetItem(ui->lineEdit_24->text()));
        ui->ResultTableWidget3->horizontalHeader()->hide();

        //=============================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget, Qt::AlignHCenter);

        ui->ResultTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        for(int i=0; i<1; i++)
            ui->ResultTableWidget->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);

        ui->ResultTableWidget->resizeColumnsToContents();
        ui->ResultTableWidget->resizeRowsToContents();
        ui->ResultTableWidget->setFixedSize(ui->ResultTableWidget->horizontalHeader()->length() +
                       ui->ResultTableWidget->verticalHeader()->width(),
                       ui->ResultTableWidget->verticalHeader()->length() +
                       ui->ResultTableWidget->horizontalHeader()->height());



        //-=========================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget2, Qt::AlignHCenter);


        ui->ResultTableWidget2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        for(int i=0; i<2; i++)
            ui->ResultTableWidget2->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);



        ui->ResultTableWidget2->resizeColumnsToContents();
        ui->ResultTableWidget2->resizeRowsToContents();
        ui->ResultTableWidget2->setFixedSize(ui->ResultTableWidget2->horizontalHeader()->length() +
                       ui->ResultTableWidget2->verticalHeader()->width(),
                       ui->ResultTableWidget2->verticalHeader()->length() +
                       ui->ResultTableWidget2->horizontalHeader()->height());

        //=====================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget3, Qt::AlignHCenter);


        ui->ResultTableWidget3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        ui->ResultTableWidget3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        for(int i=0; i<1; i++)
            ui->ResultTableWidget3->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);


        ui->ResultTableWidget3->resizeColumnsToContents();
        ui->ResultTableWidget3->resizeRowsToContents();

        ui->ResultTableWidget3->setFixedSize(ui->ResultTableWidget3->horizontalHeader()->length() +
                                         ui->ResultTableWidget3->verticalHeader()->width(),
                       ui->ResultTableWidget3->verticalHeader()->length() +
                       ui->ResultTableWidget3->horizontalHeader()->height());

        ui->ResultTableWidget3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    }

    //==================================================================
    //Cleanup
    ui->lineEdit_19->clear();
    ui->lineEdit_20->clear();
    ui->lineEdit_21->clear();
    ui->lineEdit_22->clear();
}

void Dialog::FuturesCalculate2()
{
    ui->ResultTableWidget2->setRowCount(0);

    //==============================================
    QStringList verHeaderList({"Quantity Of Trades", "Distance beetwen trades"});
    ui->ResultTableWidget->setRowCount(verHeaderList.size());
    ui->ResultTableWidget->setVerticalHeaderLabels(verHeaderList);
    ui->ResultTableWidget->horizontalHeader()->hide();

    QStringList verHeaderList3({"Price", "Balance", "InitialMargin", "Lost Percent", "Step", "PriceStep"});
    ui->ResultTableWidget3->setRowCount(verHeaderList3.size());
    ui->ResultTableWidget3->setVerticalHeaderLabels(verHeaderList3);
    ui->ResultTableWidget3->horizontalHeader()->hide();

    //===============================================================
    //SetupResultedData

    double Price = ui->lineEdit_25->text().toDouble();
    double Balance = ui->lineEdit_26->text().toDouble();
    double InitialMargin = ui->lineEdit_27->text().toDouble();
    double PercentOfLoose = ui->lineEdit_28->text().toDouble();
    double Multiplication = 1;
    double Step = ui->lineEdit_29->text().toDouble();
    double PriceOfStep = ui->lineEdit_30->text().toDouble();


    std::vector<std::vector<double>>* Trades;
    Trades = new std::vector<std::vector<double>>;

    int n = calculate_bets_quantity_futures(Price, Balance, InitialMargin, InitialMargin, PercentOfLoose, Multiplication, Step, PriceOfStep, Trades);

    if(n==-1)
    {
        QMessageBox Msgbox;
        Msgbox.setText("Entered Data is Incorrect");
        Msgbox.exec();
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(14);

        ui->ResultTableWidget->setItem(0, 0, new QTableWidgetItem(QString::number(n)));
        ui->ResultTableWidget->setItem(1, 0, new QTableWidgetItem(QString::number((*Trades)[0][1]-(*Trades)[1][1])));

        for(int i=0; i < n; i++)
        {
            ui->ResultTableWidget2->insertRow(ui->ResultTableWidget2->rowCount());
            ui->ResultTableWidget2->setItem(i, 0, new QTableWidgetItem(QString::number(Trades->at(i).at(0))));
            ui->ResultTableWidget2->setItem(i, 1, new QTableWidgetItem(QString::number( (*Trades)[i][1] )));
        }

        while(ui->ResultTableWidget2->rowCount()>n)
            ui->ResultTableWidget2->removeRow(ui->ResultTableWidget2->rowCount()-1);

        //delete(Trades);

        //InitialData Setup
        ui->ResultTableWidget3->setItem(0, 0, new QTableWidgetItem(ui->lineEdit_25->text()));
        ui->ResultTableWidget3->setItem(1, 0, new QTableWidgetItem(ui->lineEdit_26->text()));
        ui->ResultTableWidget3->setItem(2, 0, new QTableWidgetItem(ui->lineEdit_27->text()));
        ui->ResultTableWidget3->setItem(3, 0, new QTableWidgetItem(ui->lineEdit_28->text()));
        ui->ResultTableWidget3->setItem(4, 0, new QTableWidgetItem(ui->lineEdit_29->text()));
        ui->ResultTableWidget3->setItem(5, 0, new QTableWidgetItem(ui->lineEdit_30->text()));

        while(ui->ResultTableWidget3->rowCount()>6)
            ui->ResultTableWidget3->removeRow(ui->ResultTableWidget3->rowCount()-1);

        //=============================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget, Qt::AlignHCenter);

        ui->ResultTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        for(int i=0; i<1; i++)
            ui->ResultTableWidget->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);


        ui->ResultTableWidget->resizeColumnsToContents();
        ui->ResultTableWidget->resizeRowsToContents();
        ui->ResultTableWidget->setFixedSize(ui->ResultTableWidget->horizontalHeader()->length() +
                       ui->ResultTableWidget->verticalHeader()->width(),
                       ui->ResultTableWidget->verticalHeader()->length() +
                       ui->ResultTableWidget->horizontalHeader()->height());

        //-=========================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget2, Qt::AlignHCenter);


        ui->ResultTableWidget2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        for(int i=0; i<2; i++)
            ui->ResultTableWidget2->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);


        ui->ResultTableWidget2->resizeColumnsToContents();
        ui->ResultTableWidget2->resizeRowsToContents();

        ui->ResultTableWidget2->setMinimumHeight(ui->ResultTableWidget2->verticalHeader()->length() +
                                ui->ResultTableWidget2->horizontalHeader()->height());

        ui->ResultTableWidget2->setMaximumHeight(ui->ResultTableWidget2->verticalHeader()->length() +
                                ui->ResultTableWidget2->horizontalHeader()->height());

        //=====================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget3, Qt::AlignHCenter);


        ui->ResultTableWidget3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        ui->ResultTableWidget3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        for(int i=0; i<1; i++)
            ui->ResultTableWidget3->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);


        ui->ResultTableWidget3->resizeColumnsToContents();
        ui->ResultTableWidget3->resizeRowsToContents();
        ui->ResultTableWidget3->setFixedSize(ui->ResultTableWidget3->horizontalHeader()->length() +
                       ui->ResultTableWidget3->verticalHeader()->width(),
                       ui->ResultTableWidget3->verticalHeader()->length() +
                       ui->ResultTableWidget3->horizontalHeader()->height());

        ui->ResultTableWidget3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    }


    //==================================================================
    //Cleanup
    delete(Trades);

    ui->lineEdit_25->clear();
    ui->lineEdit_26->clear();
    ui->lineEdit_27->clear();
    ui->lineEdit_28->clear();
}

void Dialog::FuturesCalculate3()
{
    ui->ResultTableWidget2->setRowCount(0);

    //==============================================

    QStringList verHeaderList({"Percentage Loss"});
    ui->ResultTableWidget->setRowCount(verHeaderList.size());
    ui->ResultTableWidget->setVerticalHeaderLabels(verHeaderList);
    ui->ResultTableWidget->horizontalHeader()->hide();

    QStringList verHeaderList3({"Price", "Balance", "InitialMargin", "QuantityOfTrades", "Multiplication", "Step", "PriceStep"});
    ui->ResultTableWidget3->setRowCount(verHeaderList3.size());
    ui->ResultTableWidget3->setVerticalHeaderLabels(verHeaderList3);
    ui->ResultTableWidget3->horizontalHeader()->hide();

    //===============================================================
    //SetupResultedData
    double Price = ui->lineEdit_31->text().toDouble();
    double Balance = ui->lineEdit_32->text().toDouble();
    double InitialMargin = ui->lineEdit_33->text().toDouble();
    int QuantityOfTrades = ui->lineEdit_34->text().toInt();
    double Multiplication = 1;
    double Step = ui->lineEdit_35->text().toDouble();
    double PriceOfStep = ui->lineEdit_36->text().toDouble();

    double Trades[QuantityOfTrades][2];

    bool flag = calculate_percent_of_loose_futures(Price, InitialMargin, QuantityOfTrades, Balance, Multiplication, Step, PriceOfStep, Trades);

    if(!flag)
    {
        QMessageBox Msgbox;
        Msgbox.setText("Entered Data is Incorrect");
        Msgbox.exec();
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(14);

        double OnePercent = Trades[0][1]/100;
        double finalPercent = (Trades[0][1]-Trades[QuantityOfTrades-1][1]) / OnePercent;

        ui->ResultTableWidget->setItem(0, 0, new QTableWidgetItem(QString::number(finalPercent)));

        for(int i=0; i < QuantityOfTrades; i++)
        {
            ui->ResultTableWidget2->insertRow(ui->ResultTableWidget2->rowCount());

            ui->ResultTableWidget2->setItem(i, 0, new QTableWidgetItem(QString::number(Trades[i][0])));
            ui->ResultTableWidget2->setItem(i, 1, new QTableWidgetItem(QString::number( Trades[i][1] )));
        }

        //InitialData Setup
        ui->ResultTableWidget3->setItem(0, 0, new QTableWidgetItem(ui->lineEdit_31->text()));
        ui->ResultTableWidget3->setItem(1, 0, new QTableWidgetItem(ui->lineEdit_32->text()));
        ui->ResultTableWidget3->setItem(2, 0, new QTableWidgetItem(ui->lineEdit_33->text()));
        ui->ResultTableWidget3->setItem(3, 0, new QTableWidgetItem(ui->lineEdit_34->text()));
        ui->ResultTableWidget3->setItem(4, 0, new QTableWidgetItem(ui->lineEdit_35->text()));
        ui->ResultTableWidget3->setItem(5, 0, new QTableWidgetItem(ui->lineEdit_36->text()));

        //=============================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget, Qt::AlignHCenter);

        ui->ResultTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        for(int i=0; i<1; i++)
            ui->ResultTableWidget->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);


        ui->ResultTableWidget->resizeColumnsToContents();
        ui->ResultTableWidget->resizeRowsToContents();
        ui->ResultTableWidget->setFixedSize(ui->ResultTableWidget->horizontalHeader()->length() +
                       ui->ResultTableWidget->verticalHeader()->width(),
                       ui->ResultTableWidget->verticalHeader()->length() +
                       ui->ResultTableWidget->horizontalHeader()->height());

        //-=========================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget2, Qt::AlignHCenter);


        ui->ResultTableWidget2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        for(int i=0; i<2; i++)
            ui->ResultTableWidget2->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);



        ui->ResultTableWidget2->resizeColumnsToContents();
        ui->ResultTableWidget2->resizeRowsToContents();
        ui->ResultTableWidget2->setFixedSize(ui->ResultTableWidget2->horizontalHeader()->length() +
                       ui->ResultTableWidget2->verticalHeader()->width(),
                       ui->ResultTableWidget2->verticalHeader()->length() +
                       ui->ResultTableWidget2->horizontalHeader()->height());

        //=====================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget3, Qt::AlignHCenter);


        ui->ResultTableWidget3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        ui->ResultTableWidget3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        for(int i=0; i<1; i++)
            ui->ResultTableWidget3->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);


        ui->ResultTableWidget3->resizeColumnsToContents();
        ui->ResultTableWidget3->resizeRowsToContents();
        ui->ResultTableWidget3->setFixedSize(ui->ResultTableWidget3->horizontalHeader()->length() +
                       ui->ResultTableWidget3->verticalHeader()->width(),
                       ui->ResultTableWidget3->verticalHeader()->length() +
                       ui->ResultTableWidget3->horizontalHeader()->height());

        ui->ResultTableWidget3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    }

    //==================================================================
    //Cleanup
    ui->lineEdit_31->clear();
    ui->lineEdit_32->clear();
    ui->lineEdit_33->clear();
    ui->lineEdit_34->clear();
}

void Dialog::ForexCalculate1()
{
    ui->ResultTableWidget2->setRowCount(0);

    //==============================================
    QStringList verHeaderList({"Size Of Loss", "Distance beetwen trades", "Balance to make trades"});
    ui->ResultTableWidget->setRowCount(verHeaderList.size());
    ui->ResultTableWidget->setVerticalHeaderLabels(verHeaderList);
    ui->ResultTableWidget->horizontalHeader()->hide();

    QStringList verHeaderList3({"Price", "QuantityOfTrades", "SizeOfSingleTrade", "PercentOfLoose", "Multiplication", "Step", "PriceStep"});
    ui->ResultTableWidget3->setRowCount(verHeaderList3.size());
    ui->ResultTableWidget3->setVerticalHeaderLabels(verHeaderList3);
    ui->ResultTableWidget3->horizontalHeader()->hide();

    //===============================================================
    //SetupResultedData
    double Price = ui->lineEdit_37->text().toDouble();
    int QuantityOfTrades = ui->lineEdit_38->text().toInt();
    double SizeOfSingleTrade = ui->lineEdit_39->text().toDouble();
    double PercentOfLoose = ui->lineEdit_40->text().toDouble();
    int Multiplication = ui->lineEdit_41->text().toInt();
    double Step = ui->lineEdit_42->text().toDouble();
    double PriceOfStep = ui->lineEdit_58->text().toDouble();

    double Trades[QuantityOfTrades][2];

    bool flag = calculate_size_of_loss_currency(Price, SizeOfSingleTrade, QuantityOfTrades, PercentOfLoose, Multiplication, Step, PriceOfStep, Trades);

    if(!flag)
    {
        QMessageBox Msgbox;
        Msgbox.setText("Entered Data is Incorrect");
        Msgbox.exec();
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(14);

        ui->ResultTableWidget->setItem(0, 0, new QTableWidgetItem(QString::number(Trades[QuantityOfTrades-1][0])));
        ui->ResultTableWidget->setItem(1, 0, new QTableWidgetItem(QString::number(Trades[0][1]-Trades[1][1])));
        ui->ResultTableWidget->setItem(2, 0, new QTableWidgetItem(QString::number(QuantityOfTrades*SizeOfSingleTrade)));

        for(int i=0; i < QuantityOfTrades; i++)
        {
            ui->ResultTableWidget2->insertRow(ui->ResultTableWidget2->rowCount());

            ui->ResultTableWidget2->setItem(i, 0, new QTableWidgetItem(QString::number(Trades[i][0])));
            ui->ResultTableWidget2->setItem(i, 1, new QTableWidgetItem(QString::number( Trades[i][1] )));
        }

        //InitialData Setup
        ui->ResultTableWidget3->setItem(0, 0, new QTableWidgetItem(ui->lineEdit_37->text()));
        ui->ResultTableWidget3->setItem(1, 0, new QTableWidgetItem(ui->lineEdit_38->text()));
        ui->ResultTableWidget3->setItem(2, 0, new QTableWidgetItem(ui->lineEdit_39->text()));
        ui->ResultTableWidget3->setItem(3, 0, new QTableWidgetItem(ui->lineEdit_40->text()));
        ui->ResultTableWidget3->setItem(4, 0, new QTableWidgetItem(ui->lineEdit_41->text()));
        ui->ResultTableWidget3->setItem(5, 0, new QTableWidgetItem(ui->lineEdit_42->text()));
        ui->ResultTableWidget3->setItem(6, 0, new QTableWidgetItem(ui->lineEdit_58->text()));



        //=============================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget, Qt::AlignHCenter);

        ui->ResultTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        for(int i=0; i<1; i++)
            ui->ResultTableWidget->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);


        ui->ResultTableWidget->resizeColumnsToContents();
        ui->ResultTableWidget->resizeRowsToContents();
        ui->ResultTableWidget->setFixedSize(ui->ResultTableWidget->horizontalHeader()->length() +
                       ui->ResultTableWidget->verticalHeader()->width(),
                       ui->ResultTableWidget->verticalHeader()->length() +
                       ui->ResultTableWidget->horizontalHeader()->height());

        //-=========================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget2, Qt::AlignHCenter);


        ui->ResultTableWidget2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        for(int i=0; i<2; i++)
            ui->ResultTableWidget2->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);



        ui->ResultTableWidget2->resizeColumnsToContents();
        ui->ResultTableWidget2->resizeRowsToContents();
        ui->ResultTableWidget2->setFixedSize(ui->ResultTableWidget2->horizontalHeader()->length() +
                       ui->ResultTableWidget2->verticalHeader()->width(),
                       ui->ResultTableWidget2->verticalHeader()->length() +
                       ui->ResultTableWidget2->horizontalHeader()->height());

        //=====================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget3, Qt::AlignHCenter);


        ui->ResultTableWidget3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        ui->ResultTableWidget3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        for(int i=0; i<1; i++)
            ui->ResultTableWidget3->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);


        ui->ResultTableWidget3->resizeColumnsToContents();
        ui->ResultTableWidget3->resizeRowsToContents();
        ui->ResultTableWidget3->setFixedSize(ui->ResultTableWidget3->horizontalHeader()->length() +
                       ui->ResultTableWidget3->verticalHeader()->width(),
                       ui->ResultTableWidget3->verticalHeader()->length() +
                       ui->ResultTableWidget3->horizontalHeader()->height());

        ui->ResultTableWidget3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    }


    //==================================================================
    //Cleanup
    ui->lineEdit_37->clear();
    ui->lineEdit_38->clear();
    ui->lineEdit_39->clear();
    ui->lineEdit_40->clear();

}

void Dialog::ForexCalculate2()
{
    ui->ResultTableWidget2->setRowCount(0);

    //==============================================
    QStringList verHeaderList({"Quantity Of Trades", "Distance beetwen trades", "Size Of Loss"});
    ui->ResultTableWidget->setRowCount(verHeaderList.size());
    ui->ResultTableWidget->setVerticalHeaderLabels(verHeaderList);
     ui->ResultTableWidget->horizontalHeader()->hide();

    QStringList verHeaderList3({"Price", "SumOfLoss", "SizeOfSingleTrade", "PercentOfLoose", "Multiplication", "Step", "PriceStep"});
    ui->ResultTableWidget3->setRowCount(verHeaderList3.size());
    ui->ResultTableWidget3->setVerticalHeaderLabels(verHeaderList3);
    ui->ResultTableWidget3->horizontalHeader()->hide();

    //===============================================================
    //SetupResultedData

    double Price = ui->lineEdit_43->text().toDouble();
    double SumOfLoss = ui->lineEdit_44->text().toDouble();
    double SizeOfSingleTrade = ui->lineEdit_45->text().toDouble();
    double PercentOfLoose = ui->lineEdit_46->text().toDouble();
    int Multiplication = ui->lineEdit_47->text().toInt();
    double Step = ui->lineEdit_48->text().toDouble();
    double PriceOfStep = ui->lineEdit_59->text().toDouble();


    std::vector<std::vector<double>>* Trades;
    Trades = new std::vector<std::vector<double>>;

    int n = calculate_bets_quantity_currency(Price, SumOfLoss, SizeOfSingleTrade, PercentOfLoose, Multiplication, Step, PriceOfStep, Trades);

    if(n==-1)
    {
        QMessageBox Msgbox;
        Msgbox.setText("Entered Data is Incorrect");
        Msgbox.exec();
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(14);

        ui->ResultTableWidget->setItem(0, 0, new QTableWidgetItem(QString::number(n)));
        ui->ResultTableWidget->setItem(1, 0, new QTableWidgetItem(QString::number((*Trades)[0][1]-(*Trades)[1][1])));
        ui->ResultTableWidget->setItem(2, 0, new QTableWidgetItem(QString::number((*Trades)[n-1][0])));

        for(int i=0; i < n; i++)
        {
            ui->ResultTableWidget2->insertRow(ui->ResultTableWidget2->rowCount());

            ui->ResultTableWidget2->setItem(i, 0, new QTableWidgetItem(QString::number((*Trades)[i][0])));
            ui->ResultTableWidget2->setItem(i, 1, new QTableWidgetItem(QString::number( (*Trades)[i][1] )));
        }

        //delete(Trades);

        //InitialData Setup
        ui->ResultTableWidget3->setItem(0, 0, new QTableWidgetItem(ui->lineEdit_43->text()));
        ui->ResultTableWidget3->setItem(1, 0, new QTableWidgetItem(ui->lineEdit_44->text()));
        ui->ResultTableWidget3->setItem(2, 0, new QTableWidgetItem(ui->lineEdit_45->text()));
        ui->ResultTableWidget3->setItem(3, 0, new QTableWidgetItem(ui->lineEdit_46->text()));
        ui->ResultTableWidget3->setItem(4, 0, new QTableWidgetItem(ui->lineEdit_47->text()));
        ui->ResultTableWidget3->setItem(5, 0, new QTableWidgetItem(ui->lineEdit_48->text()));
        ui->ResultTableWidget3->setItem(6, 0, new QTableWidgetItem(ui->lineEdit_59->text()));


        //=============================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget, Qt::AlignHCenter);

        ui->ResultTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        for(int i=0; i<1; i++)
                ui->ResultTableWidget->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);


        ui->ResultTableWidget->resizeColumnsToContents();
        ui->ResultTableWidget->resizeRowsToContents();
        ui->ResultTableWidget->setFixedSize(ui->ResultTableWidget->horizontalHeader()->length() +
                       ui->ResultTableWidget->verticalHeader()->width(),
                       ui->ResultTableWidget->verticalHeader()->length() +
                       ui->ResultTableWidget->horizontalHeader()->height());

        //-=========================================


        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget2, Qt::AlignHCenter);


        ui->ResultTableWidget2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


        ui->ResultTableWidget2->resizeColumnsToContents();
        ui->ResultTableWidget2->resizeRowsToContents();

        ui->ResultTableWidget2->setMinimumHeight(ui->ResultTableWidget2->verticalHeader()->length() +
                                ui->ResultTableWidget2->horizontalHeader()->height());

        ui->ResultTableWidget2->setMaximumHeight(ui->ResultTableWidget2->verticalHeader()->length() +
                                ui->ResultTableWidget2->horizontalHeader()->height());


        for(int i=0; i<2; i++)
            ui->ResultTableWidget2->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);

        ui->ResultTableWidget2->resizeColumnsToContents();

        //=====================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget3, Qt::AlignHCenter);


        ui->ResultTableWidget3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        ui->ResultTableWidget3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        for(int i=0; i<1; i++)
            ui->ResultTableWidget3->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);


        ui->ResultTableWidget3->resizeColumnsToContents();
        ui->ResultTableWidget3->resizeRowsToContents();
        ui->ResultTableWidget3->setFixedSize(ui->ResultTableWidget3->horizontalHeader()->length() +
                       ui->ResultTableWidget3->verticalHeader()->width(),
                       ui->ResultTableWidget3->verticalHeader()->length() +
                       ui->ResultTableWidget3->horizontalHeader()->height());

        ui->ResultTableWidget3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    }

    //==================================================================
    //Cleanup
    delete(Trades);

    ui->lineEdit_43->clear();
    ui->lineEdit_44->clear();
    ui->lineEdit_45->clear();
    ui->lineEdit_46->clear();

}

void Dialog::ForexCalculate3()
{
    ui->ResultTableWidget2->setRowCount(0);

    //==============================================

    QStringList verHeaderList({"Percentage Loss", "Distance beetwen trades", "Sum of loss"});
    ui->ResultTableWidget->setRowCount(verHeaderList.size());
    ui->ResultTableWidget->setVerticalHeaderLabels(verHeaderList);
    ui->ResultTableWidget->horizontalHeader()->hide();

    QStringList verHeaderList3({"Price", "SizeOfLoss", "SizeOfSingleTrade", "Quantity", "Multiplication", "Step", "PriceStep"});
    ui->ResultTableWidget3->setRowCount(verHeaderList3.size());
    ui->ResultTableWidget3->setVerticalHeaderLabels(verHeaderList3);
    ui->ResultTableWidget3->horizontalHeader()->hide();

    //===============================================================
    //SetupResultedData

    double Price = ui->lineEdit_49->text().toDouble();
    double Balance = ui->lineEdit_50->text().toDouble();
    double SizeOfSingleTrade = ui->lineEdit_51->text().toDouble();
    int QuantityOfTrades = ui->lineEdit_52->text().toInt();
    int Multiplication = ui->lineEdit_53->text().toInt();
    double Step = ui->lineEdit_54->text().toDouble();
    double PriceOfStep = ui->lineEdit_60->text().toDouble();

    double Trades[QuantityOfTrades][2];

    bool flag = calculate_percent_of_loose_currency(Price, SizeOfSingleTrade, QuantityOfTrades, Balance,  Multiplication, Step, PriceOfStep, Trades);

    if(!flag)
    {
        QMessageBox Msgbox;
        Msgbox.setText("Entered Data is Incorrect");
        Msgbox.exec();
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(14);

        double OnePercent = Trades[0][1]/100;
        double finalPercent = (Trades[0][1]-Trades[QuantityOfTrades-1][1]) / OnePercent;

        ui->ResultTableWidget->setItem(0, 0, new QTableWidgetItem(QString::number(finalPercent)));
        ui->ResultTableWidget->setItem(1, 0, new QTableWidgetItem(QString::number(Trades[0][1]-Trades[1][1])));
        ui->ResultTableWidget->setItem(2, 0, new QTableWidgetItem(QString::number(Trades[QuantityOfTrades-1][0])));

        for(int i=0; i < QuantityOfTrades; i++)
        {
            ui->ResultTableWidget2->insertRow(ui->ResultTableWidget2->rowCount());

            ui->ResultTableWidget2->setItem(i, 0, new QTableWidgetItem(QString::number(Trades[i][0])));
            ui->ResultTableWidget2->setItem(i, 1, new QTableWidgetItem(QString::number( Trades[i][1] )));
        }

        //InitialData Setup
        ui->ResultTableWidget3->setItem(0, 0, new QTableWidgetItem(ui->lineEdit_49->text()));
        ui->ResultTableWidget3->setItem(1, 0, new QTableWidgetItem(ui->lineEdit_50->text()));
        ui->ResultTableWidget3->setItem(2, 0, new QTableWidgetItem(ui->lineEdit_51->text()));
        ui->ResultTableWidget3->setItem(3, 0, new QTableWidgetItem(ui->lineEdit_52->text()));
        ui->ResultTableWidget3->setItem(4, 0, new QTableWidgetItem(ui->lineEdit_53->text()));
        ui->ResultTableWidget3->setItem(5, 0, new QTableWidgetItem(ui->lineEdit_54->text()));
        ui->ResultTableWidget3->setItem(6, 0, new QTableWidgetItem(ui->lineEdit_60->text()));

        //====================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget, Qt::AlignHCenter);

        ui->ResultTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        for(int i=0; i<1; i++)
            ui->ResultTableWidget->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);


        ui->ResultTableWidget->resizeColumnsToContents();
        ui->ResultTableWidget->resizeRowsToContents();
        ui->ResultTableWidget->setFixedSize(ui->ResultTableWidget->horizontalHeader()->length() +
                       ui->ResultTableWidget->verticalHeader()->width(),
                       ui->ResultTableWidget->verticalHeader()->length() +
                       ui->ResultTableWidget->horizontalHeader()->height());

        //-==================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget2, Qt::AlignHCenter);


        ui->ResultTableWidget2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


        ui->ResultTableWidget2->resizeColumnsToContents();
        ui->ResultTableWidget2->resizeRowsToContents();

        ui->ResultTableWidget2->setMinimumHeight(ui->ResultTableWidget2->verticalHeader()->length() +
                                ui->ResultTableWidget2->horizontalHeader()->height());

        ui->ResultTableWidget2->setMaximumHeight(ui->ResultTableWidget2->verticalHeader()->length() +
                                ui->ResultTableWidget2->horizontalHeader()->height());


        for(int i=0; i<2; i++)
            ui->ResultTableWidget2->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);

        ui->ResultTableWidget2->resizeColumnsToContents();

        //=====================================================

        ui->verticalLayout_24->setAlignment(ui->ResultTableWidget3, Qt::AlignHCenter);


        ui->ResultTableWidget3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        ui->ResultTableWidget3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        for(int i=0; i<1; i++)
            ui->ResultTableWidget3->horizontalHeader()->setSectionResizeMode(i, QHeaderView::ResizeToContents);


        ui->ResultTableWidget3->resizeColumnsToContents();
        ui->ResultTableWidget3->resizeRowsToContents();
        ui->ResultTableWidget3->setFixedSize(ui->ResultTableWidget3->horizontalHeader()->length() +
                       ui->ResultTableWidget3->verticalHeader()->width(),
                       ui->ResultTableWidget3->verticalHeader()->length() +
                       ui->ResultTableWidget3->horizontalHeader()->height());

        ui->ResultTableWidget3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->ResultTableWidget3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    }

    //======================================================
    //Cleanup
    ui->lineEdit_49->clear();
    ui->lineEdit_50->clear();
    ui->lineEdit_51->clear();
    ui->lineEdit_52->clear();
}


void Dialog::BackToMenu_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

Dialog::~Dialog()
{
    delete ui;
}
