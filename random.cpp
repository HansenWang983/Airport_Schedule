#include <cmath>
#include <iostream>
#include <time.h>
#include <limits.h>

#define max_int INT16_MAX

typedef int16_t int_t;

using namespace std;	
class Random{ 
public:
	Random(bool pseudo = true)
	{
		if(pseudo) seed = 1;
		else seed = time(NULL) % max_int ; 
		multiplier = 2743;
		add_on = 5923;
	}
	
	double random_real();

	int_t random_integer(int_t low, int_t high);

	int_t poisson(double mean);

private:
	int_t reseed()// Re-randomize the seed. int seed,
	{
		seed=seed*multiplier+add_on;
		return seed;
	}
	int_t seed,multiplier,add_on; // constants for use in arithmetic operations 

};

double Random::random_real()
/*Post: A random real number between 0 and 1 isreturned.*/ 
{
	double max = max_int + 1.0; 
	double temp = reseed();
	if (temp < 0) temp = temp + max;
	return temp/max;
}

int_t Random::random_integer(int_t low, int_t high)
/*Post: A random integer between low and high (inclusive) isreturned.*/ 
{
	if (low > high) 
		return random_integer(high, low);
	else 
        return ((int_t)((high-low+1)*random_real())) + low;
}


int_t Random::poisson(double mean)
{
	double limit = exp(-mean);
	double product = random_real( ); 
	int_t count = 0;
	while (product > limit) 
	{
		count++;
		product *= random_real( );
	}
	return count;
}


int main(int argc, char const *argv[])
{
	Random r(true);
	int n;
	double mean;
	double sum=0;
	cin>>n;
	cin>>mean;		
	for(int i=0;i<n;i++)
	{
        sum+=r.poisson(mean);
	}
	cout<<sum/n<<endl;
	return 0;
}
