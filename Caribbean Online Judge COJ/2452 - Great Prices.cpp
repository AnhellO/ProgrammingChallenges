#include <cstdio>
#include <map>
#include <utility>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
#define W(t) while(t--)
using namespace std;

int t, n, i, id;
double price, amount;
map<int, double> products;

int main() 
{
	scanf("%d", &t);
	W(t)
	{
		products.clear();
		amount = 0.0;
		scanf("%d", &n);
		FOR(i, 0, n, 1)
		{
			scanf("%d %lf", &id, &price);
			if(products.find(id) == products.end())
				products.insert(std::pair<int, double> (id, price));
			else
			{
				if(products.at(id) > price)
					products.at(id) = price;
			}
		}
		for(map<int, double >::const_iterator it = products.begin(); it != products.end(); ++it)
		{
		    amount += it->second;
		}
		printf("%.2lf\n", amount);
	}
	return 0;
}