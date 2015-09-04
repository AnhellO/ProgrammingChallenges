#include <bits/stdc++.h>
using namespace std;

int N, i, j;
double v, sum;

class comma_numpunct : public std::numpunct<char>
{
  	protected:
	    virtual char do_thousands_sep() const
	    {
	        return ',';
	    }
	
	    virtual std::string do_grouping() const
	    {
	        return "\03";
	    }
};

int main()
{
	scanf("%d", &N);
	locale comma_locale(std::locale(), new comma_numpunct());
	cout.imbue(comma_locale);
	for(i = 1 ; i <= N ; i++)
	{
		sum = 0.0;
		for(j = 0 ; j < 12 ; j++)
		{
			scanf("%lf", &v);
			sum += v;
		}
		sum /= 12.0;
		cout << i << " $" << setprecision(2) << fixed << sum << endl;;
	}
	return 0;
}