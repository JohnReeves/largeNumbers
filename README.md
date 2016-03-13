# Large Numbers
demonstrate getting past 20 digit limit of c++ large numbers

# Using `long long` ints
## copy & paste into yet another codepen

This code snippet outputs a list of factorials, as it gets past factorial(20) it makes a huge error!

```
#include <iostream>

using namespace std;

long long factorial(long long N) {
	long long temp;

	if (N <= 1) return 1;
	temp = N * factorial(N - 1);
	return temp;
}

int main()
{

    int t;
	long long int n,m;
	
	n=1234567890123456789;
	m=12345678901234567890;
    cout << n << m << endl;
    
    for(t=1; t <= 21; t++)
        cout << factorial(t) << endl;

    return 0;
}
```

Here's mine: https://ideone.com/7AOT8G

When you press run, it should give:

```
1234567890123456789-6101065172474983726
1
2
6
24
120
720
5040
40320
362880
3628800
39916800
479001600
6227020800
87178291200
1307674368000
20922789888000
355687428096000
6402373705728000
121645100408832000
2432902008176640000
-4249290049419214848

```

Illustrating the rollover at 21-digits.

# Using `double` and `setprecision` 

```
#include <iostream>
#include <iomanip>

using namespace std;

double factorial(long long N) {
	double temp;

	if (N <= 1) return 1;
	temp = N * factorial(N - 1);
	return temp;
}

int main()
{

    int t;
	long long int n,m;
	
	n=1234567890123456789;
	m=12345678901234567890;
    cout << n << m << endl;
    
    for(t=1; t <= 30; t++)
        cout << setprecision(42) << factorial(t) << endl;

    return 0;
}
```

Here's mine: https://ideone.com/7AOT8G

When you press run, it should give:

```
1234567890123456789-6101065172474983726
1
2
6
24
120
720
5040
40320
362880
3628800
39916800
479001600
6227020800
87178291200
1307674368000
20922789888000
355687428096000
6402373705728000
121645100408832000
2432902008176640000
51090942171709440000
1124000727777607680000
25852016738884978212864
620448401733239409999872
15511210043330986055303168
403291461126605650322784256
10888869450418351940239884288
304888344611713871918902804480
8841761993739701898620088352768
265252859812191068217601719009280

```

Illustrating something strange at the 22nd factorial but the difference is less understandable. 

## 4 topics in computer science

### internal representation of numbers

- Why is there a 20 digit limit for integers?
- Why does something strange happen in the middle for floats?

### representing numbers as strings

- How can you represent long numbers as string?
- Writing a full class is *hard*, maybe 1000 lines.
- The `gmp` library is this sort of thing - so functions not operators.

### progressive approximations of pi

- How *can* you calculate pi?
- There are lot's of series solutions
- What about a randomised algorithm?

### dynamic memory

How can you grow your datatype?




