#include <iostream>
#include <string>
#include <numeric>
#include <vector>


int sales;
std::vector<float> total_daily_sales;
std::vector<float> av_sales;


float getAverage(const std::vector<float>& sales) {
	if (sales.empty()) return 0.0f;
	float sum = std::accumulate(sales.begin(), sales.end(), 0.0f);
	return sum / sales.size();
}


int main() {

	


	std::cout << "Enter total daily sales for 7 days(In Rands):" << std::endl;
	std::cout << "Day 1:";
	std::cin >> sales;
	total_daily_sales.push_back(sales);

	std::cout << "Day 2:";
	std::cin >> sales; 
	total_daily_sales.push_back(sales);



	std::cout << "Day 3:";
	std::cin >> sales; 
	total_daily_sales.push_back(sales);



	std::cout << "Day 4:";
	std::cin >> sales;
	total_daily_sales.push_back(sales);



	std::cout << "Day 5:";
	std::cin >> sales; 
	total_daily_sales.push_back(sales);



	std::cout << "Day 6:";
	std::cin >> sales;
	total_daily_sales.push_back(sales);



	std::cout << "Day 7:";
	std::cin >> sales;
	total_daily_sales.push_back(sales);

	std::cout << std::endl;

	int final_average = getAverage(total_daily_sales);

	int max = *std::max_element(total_daily_sales.begin(), total_daily_sales.end());
	int min = *std::min_element(total_daily_sales.begin(), total_daily_sales.end());




	std::cout << "Average weekly sales :" << final_average << std::endl;
	std::cout << "Highesst daily sales :" << max << std::endl;
	std::cout << "Lowest daily sales :" << min << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Sales figures in the order entered: " << std::endl;
	std::cout << std::endl;
	for (int y = 0; y < total_daily_sales.size(); y++) {

		std::cout << "Day " << y+1 << ":" << "R" << total_daily_sales[y]<<".00" << std::endl;


	}



	return 0;
}





