#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <conio.h>
#include <ctime>
#include <cstdlib>
#include <random>


int main() {

    std::string que[] = {"1. Which pes called buda? ",
		                 "2. What a berta real name? ",
				         "3. Psi psu psa? ",
						 "4. Who is the best dog? ",
						 "5. When is berta deathday? "};
						

	std::string opt[][5] = { { "A. buda psa", "B. buda bez psa", "C. psi pes pus", "D. berta loch" },
							 { "A. pes", "B. shlucha", "C. berta", "D. berta pes" },
							 { "A. pes pus pus", "B. psi pes pus", "C. psowi psu psa", "D. pes psu psa" },
							 { "A. berta", "B. berta pes", "C. argon", "D. kaluch" },
							 { "A. siome sichnia", "B. vosme veresnia", "C. tretie travnia", "D. druge kvitnia" } };
	

	char ans[] = { 'B', 'D', 'A', 'B', 'D' };


	int size = sizeof(que) / sizeof(que[0]);
	char guess;
	int score = 0;


	for(int i = 0; i < size; i++)
	{
		std::cout << que[i] << '\n';
		std::cout << "__________________" << '\n';

		
		for(int j = 0; j < sizeof(opt[1]) / sizeof(opt[i][0]); j++)
		{
			std::cout << opt[i][j] << '\n';
		}


		std::cin >> guess;
		guess = toupper(guess);


		if (guess == ans[i])
		{
			std::cout << "\ntopchyk\n\n";
			score++;
		}
		else
		{
			std::cout << "\nloch\n";
			std::cout << "correct answer: " << ans[i] << '\n' << '\n';
		}
	}

	std::cout << "------------------" << '\n';
	std::cout << "results: " << score << " / " << size << '\n';
	std::cout << "percent: " << (score / (double)size)*100 << "%" << '\n';
	std::cout << "------------------" << '\n';

	return 0;
}