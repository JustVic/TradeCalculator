#include "include/mmcalc3.h"

void lpr_print(char *the_text)
{
  printf("%s", "Hello there.");
}

//return -1 if data is wrong
int calculate_bets_quantity_futures(double price, double balance, double initialMargin, double sizeOfTrade, double percentOfLoose, int multiplication, const double step, const double price_of_step, std::vector<std::vector<double> >* trades)
{
	bool data_check = check_data_futures(price, balance, initialMargin, 0, 0, percentOfLoose, step, price_of_step, multiplication);

	if(!data_check)
		return -1;

	//need to be implemented?
	double temp_summ = 0;
	int tradesQuantity = 2;
	int i = 0;
	//int distance = 0;
	double distance_x = 1;
	double prev_summ = 0;
	double distance_of_loose = (price/100)*percentOfLoose;
	std::vector<std::vector<double> > prev_trades;

	while(temp_summ < balance)
	{
		double distance = 0;
		distance_x = 1;

		double Trades[tradesQuantity][2];
		Trades[tradesQuantity-1][0] = 0;

		while(distance_of_loose >= distance)
		{
			distance = calculate_summ_for_certain_distance_futures(price, tradesQuantity, distance_x, initialMargin, multiplication, step, price_of_step, Trades);
			distance_x += 1;
		}

		temp_summ = Trades[tradesQuantity-1][0];
		//printf("\t=---=%lf %lf==\n", temp_summ, balance);
		
		if(temp_summ < balance)
		{

			if(!prev_trades.empty())
				prev_trades.clear();

			for(int i=0; i < tradesQuantity; i++)
			{
				std::vector<double> inner;

				inner.push_back(Trades[i][0]);
				inner.push_back(Trades[i][1]);

				//printf("\t=+-----------=%lf %lf==\n", Trades[i][0], Trades[i][1]);
				prev_trades.push_back(inner);
			}

			tradesQuantity += 1;

		}
		else
		{

			for(int i=0; i < tradesQuantity-1; i++)
			{
				if(!prev_trades.empty())
				{
					std::vector<double> inner;
					//printf("\t=+++=%lf %lf==\n", prev_trades[i][0], prev_trades[i][1]);

					inner.push_back(prev_trades[i][0]);
					inner.push_back(prev_trades[i][1]);
					trades->push_back(inner);

				}
				else
				{
					return -1;
				}
			}

			//tradesQuantity += 1;
		}
	}

	return tradesQuantity-1;
}

bool calculate_percent_of_loose_futures(const double price, const double initialMargin, const int trades_quantity, const double balance, const int multiplication, const double step, const double price_of_step, double trades[][2])
{
	bool data_check = check_data_futures(price, balance, initialMargin, 0, trades_quantity, 0, step, price_of_step, multiplication);
	
	if(!data_check)
		return false;

	double distance_x = 1;//distance between bets
	double summ = 0;
	double prevSumm = 0;
	double distance = 0;

	trades[trades_quantity-1][0] = 0;	
	while((trades[trades_quantity-1][0] < balance)&&(price > distance))
	{
		distance = calculate_summ_for_certain_distance_futures(price, trades_quantity, distance_x, initialMargin, multiplication, step, price_of_step, trades);   //functionname may be wrong
		distance_x += 1;
	}

	return true;
}

//=========================================================

bool calculate_size_of_loss_shares(const double price, const double size_of_trade, const int trades_quantity, const double percent_of_loose, const int multiplication, const double step, const double price_of_step, double trades[][2])
{
	bool data_check = calculate_size_of_loss_currency(price, size_of_trade, trades_quantity, percent_of_loose, multiplication, step, price_of_step, trades);
	if(!data_check)
		return false;

	return true;
}

bool calculate_bets_quantity_shares(const double price, const double balance, const double size_of_trade, const double percentOfLoose, const int multiplication, const double step, const double price_of_step, std::vector<std::vector<double> >* trades)
{
	bool data_check = calculate_bets_quantity_currency(price, balance, size_of_trade, percentOfLoose, multiplication, step, price_of_step, trades);

	if(!data_check)
		return false;

	return true;
}

bool calculate_percent_of_loose_shares(const double price, const double size_of_trade, const int trades_quantity, const double sum, const int multiplication, const double step, const double price_of_step, double trades[][2])
{
	bool data_check = calculate_percent_of_loose_currency(price, size_of_trade, trades_quantity, sum, multiplication, step, price_of_step, trades);	
	if(!data_check)
		return false;

	return true;
}

//=========================================================

bool calculate_size_of_loss_currency(const double price, const double size_of_trade, const int trades_quantity, const double percent_of_loose, const int multiplication, const double step, const double price_of_step, double trades[][2])
{
	bool data_check = check_data_currency(price, 0, size_of_trade,
					      trades_quantity, percent_of_loose, multiplication, step, price_of_step);

	if(!data_check)
		return false;

	double distance_x = 1;//distance between bets
	double summ = 0;
	double prevSumm = 0;
	double distance = 0;// think for what?
	double distanceOfLoose = (price/100)*percent_of_loose;//change naming, not for currency.

	while(distanceOfLoose > distance)
	{
		prevSumm = summ;

		distance = calculate_summ_for_certain_distance_currency(price, size_of_trade, trades_quantity,  distance_x, multiplication, step, price_of_step, trades);  //functionname may be wrong
		distance_x += 1;

	}

	return true;
}

int calculate_bets_quantity_currency(const int price, const float balance, const int size_of_trade, const int percentOfLoose, const int multiplication, const double step, const double price_of_step, std::vector<std::vector<double> >* trades)
{
	bool data_check = check_data_currency(price, balance, size_of_trade, 0, percentOfLoose, multiplication, step, price_of_step);
	
	if(!data_check)
		return -1;

	//need to be implemented?
	double temp_summ = 0;
	int tradesQuantity = 2;
	//int distance = 0;
	double distance_x = 1;
	double prev_summ = 0;
	const double distance_of_loose = (price/100)*percentOfLoose;
	std::vector<std::vector<double> > prev_trades;


	//printf("Data initialized\n");
	while(temp_summ < balance)
	{
		double distance = 0;
		distance_x = 1;
		double Trades[tradesQuantity][2];
		Trades[tradesQuantity-1][0] = 0;

		while(distance_of_loose >= distance)
		{
			distance = calculate_summ_for_certain_distance_currency(price, size_of_trade, tradesQuantity, distance_x, multiplication, step, price_of_step, Trades);

			distance_x += 1;

		}

		temp_summ = (int)Trades[tradesQuantity-1][0];


		if(temp_summ < balance)
		{
			//printf("inside if\n");
			fflush(stdout);

			if(!prev_trades.empty())
				prev_trades.clear();

			//printf("trades Quantity %d\n", tradesQuantity);


			for(int i=0; i < tradesQuantity; i++)
			{
				std::vector<double> inner;

				inner.push_back(Trades[i][0]);
				inner.push_back(Trades[i][1]);

				//printf("\t=+-----------=%lf %lf==\n", Trades[i][0], Trades[i][1]);

				//printf("number:%d\n", i);

				prev_trades.push_back(inner);

			}

			//printf("After for inside if\n");
			fflush(stdout);

			tradesQuantity += 1;


		}
		else
		{
			//printf("trades Quantity %d\n", tradesQuantity);
			for(int i=0; i < tradesQuantity-1; i++)
			{		
				//printf("for inside else\n");
				fflush(stdout);
				if(!prev_trades.empty())
				{
					std::vector<double> inner;
					//printf("\t=+++=%lf %lf==\n", prev_trades[i][0], prev_trades[i][1]);
					//printf("number:%d\n", i);
					fflush(stdout);

					inner.push_back(prev_trades[i][0]);
					inner.push_back(prev_trades[i][1]);
					trades->push_back(inner);

					//printf("number:%d\n", i);
					fflush(stdout);

				}
				else
				{
					return -1;
				}
				fflush(stdout);
			}
				fflush(stdout);
		}
		fflush(stdout);

	}

	//printf("end of function\n");
	//printf("trades Quantity %d\n", tradesQuantity);

	return tradesQuantity-1;

}

bool calculate_percent_of_loose_currency(const double price, const double size_of_trade, const int trades_quantity, const double sum, const int multiplication, const double step, const double price_of_step, double trades[][2])
{
	bool data_check = check_data_currency(price, sum, size_of_trade, trades_quantity, 0, multiplication, step, price_of_step);
	
	if(!data_check)
		return false;

	double distance_x = 1;//distance between bets
	double prevSumm = 0;
	double distance = 0;

	trades[trades_quantity-1][0] = 0;	
	while((trades[trades_quantity-1][0]+1 < sum)&&(price > distance+1))
	{
		distance = calculate_summ_for_certain_distance_currency(price, size_of_trade, trades_quantity, distance_x,  multiplication, step, price_of_step, trades);   //functionname may be wrong
		distance_x += 1;

	}

	return true;
}

//=========================================================
//=========================================================

double calculate_summ_for_certain_distance_currency(const double price, const double size_of_trade, const int trades_quantity, const double distance, const int multiplication, const double step, const double price_of_step, double trades[][2])
{
	//
	double summ_of_loss = 0;
	double old_summ_of_loss = 0;
	double temp_price = price;
	double one_percent_price = 0;
	double one_percent_size_of_trade = 0;
	double loss_in_percents = 0;
	double real_loss = 0;
	double summ_on_bet = 0;//naming?

	//printf("data initialised for certain distance currency\n");

	for(int i = 0; i <= (trades_quantity-1); i++)
	{
		//printf("loop for certain distance currency\n");

		one_percent_price = ((temp_price))/100;//update on every new bet
		summ_on_bet += (size_of_trade)*multiplication;
		one_percent_size_of_trade = summ_on_bet/100;//?

		loss_in_percents = ((distance/step)*price_of_step)/one_percent_price;

		real_loss = loss_in_percents*one_percent_size_of_trade;//*quantity_of_bets(or i-+1)
		//summ_on_bet += size_of_trade;
		summ_on_bet -= real_loss;//size_of_trade

		trades[i][0] = summ_of_loss;
		summ_of_loss += real_loss;//*(i+1);
		//printf("end for certain distance currency\n");

		trades[i][1] = temp_price;
		temp_price -= distance;
	}
	//printf("end for certain distance currency\n");

	double temp_distance = price-(temp_price+distance);
	//printf("real end for certain distance currency\n");


	return temp_distance;
}


double calculate_summ_for_certain_distance_futures(const double price, const int trades_quantity, const double distance, const double initialMargin, const int multiplication, const double step, const double price_of_step, double trades[][2])
{
	double summ = 0;//balance
	double old_summ = 0;//prev balance
	double temp_price = price;

	for(int i = 0; i <= (trades_quantity-1); i++)
	{
		summ += initialMargin;
		trades[i][0] = summ;
		summ += ((distance/step)*price_of_step)*(i+1)*multiplication;//*a

		trades[i][1] = temp_price;
		temp_price -= distance;
	}

	double temp_distance = price-(temp_price+distance);

	return temp_distance;
}

void calculate_summ_for_certain_distance_shares()
{
	//
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//
bool calculate_balance_futures(double price, double initialMargin, double sizeOfTrade, int tradesQuantity, double percentOfLoose, double const step, const double price_of_step, double trades[][2])
{
	int multiplication = 1;
	bool data_check = check_data_futures(price, 0, initialMargin, sizeOfTrade, tradesQuantity, percentOfLoose, step, price_of_step, multiplication);

	if(!data_check)
		return false;

	//double price_step = 1;
	double distance_x = step;//distance between bets
	double summ = 0;
	double prevSumm = 0;
	double distance = 0;
	double distanceOfLoose = (price/100)*percentOfLoose;

	while(distanceOfLoose > distance)
	{

		prevSumm = summ;
		distance = calculate_summ_for_certain_distance_futures(price, tradesQuantity, distance_x, initialMargin, multiplication, step, price_of_step, trades);  //functionname may be wrong
		distance_x += step;
	}

	return true;
}

//--------------------------------------------------------
//
bool check_data_futures(const double price, const double balance, const double initialMargin, const double sizeOfTrade, const int tradesQuantity, const double percentOfLoose, const double step, const double price_of_step, const double multiplication)
{
	if(initialMargin>price)
		return false;
	if((price<0)||(balance<0)||(initialMargin<0)||(sizeOfTrade<0)||(tradesQuantity<0)||(percentOfLoose<0)||(step<0)||(price_of_step<0)||(multiplication<0))
		return false;
	if(percentOfLoose>100)
		return false;
	if(tradesQuantity>(price/step))
		return false;

	return true;
}

bool check_data_currency(const double price, const double balance,  const double size_of_trade, const int tradesQuantity, const double percentOfLoose, const double multiplication, const double step, const double price_of_step)
{
	if((price<0)||(balance<0)||(size_of_trade<0)||(tradesQuantity<0)||(percentOfLoose<0)||(step<0)||(price_of_step<0)||(multiplication<0))
		return false;
	if(percentOfLoose>100)
		return false;
	if(tradesQuantity>(price/step))
		return false;

	return true;
}
