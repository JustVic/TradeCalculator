/*
   liblprprint.h:
   routines in liblprprint.a
   and liblprprint.so
*/
#include <stdio.h>
#include <vector>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//extern void lpr_print ();

extern "C" {
	void lpr_print ();

//extern std::vector<std::string> calculate_balance_futures(int price, int initialMargin, int sizeOfTrade, int tradesQuantity, int percentOfLoose);

int calculate_bets_quantity_futures(double price, double balance, double initialMargin, double sizeOfTrade, double percentOfLoose, int multiplication, const double step, const double price_of_step, std::vector<std::vector<double> >* trades);

bool calculate_percent_of_loose_futures(const double price, const double initialMargin, const int trades_quantity, const double balance, const int multiplication, const double step, const double price_of_step, double trades[][2]);

//=========================================================

bool calculate_size_of_loss_shares(const double price, const double size_of_trade, const int trades_quantity, const double percent_of_loose, const int multiplication, const double step, const double price_of_step, double trades[][2]);

bool calculate_bets_quantity_shares(const double price, const double balance, const double size_of_trade, const double percentOfLoose, const int multiplication, const double step, const double price_of_step, std::vector<std::vector<double> >* trades);

bool calculate_percent_of_loose_shares(const double price, const double size_of_trade, const int trades_quantity, const double summ, const int multiplication, const double step, const double price_of_step, double trades[][2]);

//=========================================================


bool calculate_size_of_loss_currency(const double price, const double size_of_trade, const int trades_quantity, const double percent_of_loose, const int multiplication, const double step, const double price_of_step, double trades[][2]);

int calculate_bets_quantity_currency(const int price, const float balance, const int size_of_trade, const int percentOfLoose, const int multiplication,const double step, const double price_of_step, std::vector<std::vector<double> >* trades);

bool calculate_percent_of_loose_currency(const double price, const double size_of_trade, const int trades_quantity, const double lost, const int multiplication, const double step, const double price_of_step, double trades[][2]);

//=========================================================
//=========================================================

double calculate_summ_for_certain_distance_currency(const double price, const double size_of_trade, const int trades_quantity, const double distance, const int multiplication, const double step, const double price_of_step, double trades[][2]);

double calculate_summ_for_certain_distance_futures(const double price, const int trades_quantity, const double distance, const double initialMargin, const int multiplication, const double step, const double price_of_step, double trades[][2]);

void calculate_summ_for_certain_distance_shares();

bool calculate_balance_futures(double price, double initialMargin, double sizeOfTrade/*multiplication*/, int tradesQuantity, double percentOfLoose, const double step, const double price_of_step,  double trades[][2]);

}
//=========================================================

bool check_data_futures(const double price, const double balance, const double initialMargin, const double sizeOfTrade, const int tradesQuantity, const double percentOfLoose, const double step, const double price_of_step, const double multiplication);

bool check_data_currency(const double price, const double balance, const double size_of_trade, const int tradesQuantity, const double percentOfLoose, const double multiplication, const double step, const double price_of_step);


