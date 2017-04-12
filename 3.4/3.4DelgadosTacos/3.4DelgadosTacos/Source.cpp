//Chance Daily
//3.4 Delgados Tacos done 4-11-2017

#include <iostream> 
#include <string>

int main(){
	const double taxRate = 1.075;

	double tacoPrice = 0.99;
	double steaktacoPrice = 1.99;
	double quesadillaPrice = 3.99;
	double burritoPrice = 2.99;
	double steakburritoPrice = 5.99;
	double beanburritoPrice = 3.99;
	double surprisePrice = 6.99;
	double ricePrice = 1.99;
	double beansPrice = 1.99;
	double sodaPrice = 1.99;

	double tacoOrdered = 0.0, steaktacoOrdered = 0.0, quesadillaOrdered = 0.0, burritoOrdered = 0.0;
	double riceOrdered = 0.0, beansOrdered = 0.0, steakburritoOrdered = 0.0, beanburritoOrdered = 0.0;
	double surpriseOrdered = 0.0, sodaOrdered = 0.0, total = 0.0, totalWithTax = 0.0;

	std::string order, question;

	std::cout << "Welcome to Delgados Tacos!" << std::endl;

	std::cout << "Here's the menu!" << std::endl;
	std::cout << " ________________________________________" << std::endl;
	std::cout << "| #1. Tacos - $0.99 each                 |" << std::endl;
	std::cout << "| #2. Steak Tacos - $1.99 each           |" << std::endl;
	std::cout << "| #3. Quesadilla - $3.99 each            |" << std::endl;
	std::cout << "| #4. Burrito - $2.99 each               |" << std::endl;
	std::cout << "| #5. Steak Burrito - $5.99 each         |" << std::endl;
	std::cout << "| #6. Bean Burrito - $3.99 each          |" << std::endl;
	std::cout << "| #7. Delgado's Surprise - $6.99 each    |" << std::endl;
	std::cout << "| #8. Side of Rice - $1.99 each          |" << std::endl;
	std::cout << "| #9. Side of Beans - $1.99 each         |" << std::endl;
	std::cout << "| #10. Soda - $1.99 each                 |" << std::endl;
	std::cout << "|________________________________________|" << std::endl;
	std::cout << "" << std::endl;

	do {
		std::cout << "What number would you like? ";
		std::cin >> order;
		if (order == "#1" || order == "1"){
			std::cout << "How many orders of that would you like? (Please enter digits) ";
			std::cin >> tacoOrdered;
		}
		if (order == "#2" || order == "2"){
			std::cout << "How many orders of that would you like? (Please enter digits) ";
			std::cin >> steaktacoOrdered;
		}
		if (order == "#3" || order == "3"){
			std::cout << "How many orders of that would you like? (Please enter digits) ";
			std::cin >> quesadillaOrdered;
		}
		if (order == "#4" || order == "4"){
			std::cout << "How many orders of that would you like? (Please enter digits) ";
			std::cin >> burritoOrdered;
		}
		if (order == "#5" || order == "5"){
			std::cout << "How many orders of that would you like? (Please enter digits) ";
			std::cin >> steakburritoOrdered;
		}
		if (order == "#6" || order == "6"){
			std::cout << "How many orders of that would you like? (Please enter digits) ";
			std::cin >> beanburritoOrdered;
		}
		if (order == "#7" || order == "7"){
			std::cout << "How many orders of that would you like? (Please enter digits) ";
			std::cin >> surpriseOrdered;
		}
		if (order == "#8" || order == "8"){
			std::cout << "How many orders of that would you like? (Please enter digits) ";
			std::cin >> riceOrdered;
		}
		if (order == "#9" || order == "9"){
			std::cout << "How many orders of that would you like? (Please enter digits) ";
			std::cin >> beansOrdered;
		}
		if (order == "#10" || order == "10"){
			std::cout << "How many orders of that would you like? (Please enter digits) ";
			std::cin >> sodaOrdered;
		}


		total = (tacoOrdered * tacoPrice) + (steaktacoOrdered * steaktacoPrice) + (quesadillaOrdered * quesadillaPrice) +
			(burritoOrdered * burritoPrice) + (riceOrdered * ricePrice) + (beansOrdered * beansPrice) +
			(steakburritoOrdered * steakburritoPrice) + (beanburritoOrdered * beanburritoPrice) +
			(surpriseOrdered * surprisePrice) + (sodaOrdered * sodaPrice);
		totalWithTax = total * taxRate;

		std::cout << "Would you like anything else? (Yes/No)" << std::endl;
		std::cin >> question;
	} while (question == "yes" || question == "Yes" || question == "Y" || question == "y");


	std::cout << "Your total is $" << total << std::endl;
	std::cout << "With tax it comes to $" << totalWithTax << std::endl;

}