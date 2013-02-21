#include "../include/project.h"
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <stdio.h>

using namespace std;
project::project()
{
    //ctor
}

project::~project()
{
    //dtor
}

void project::multiples_3_and_5()
{
    int summation=0;
    for (int i=0; i<1000; i++)
    {
        if(i%3==0 || i%5==0)
        {
            summation=summation+i;
        }
    }
    cout << "The summation of multiples is  " << summation << endl;
    return;

}

void project::even_fibonacce()
{
    int x=0,y=1;
    int summation=0;
    int temp;
    int total=0;
    long long total1=0;
    int highest=0;
    while(y < 4000000)
    {
        if(y%2 == 0)
        {
            summation += y;
        }
     temp = y;
     y += x;
     x = temp;
    }

    cout << "The summation of even fibonacci numbers is " << summation << endl;
    return;

}
void project:: largest_prime_factor()
{
    long long y=600851475143LL;
    long long largest=0LL;
    long long x=2LL;

    while(x<y)
    {
        if(y%x==0)
        {
            if(x > largest)
            {
                largest=x;
            }
        }
    x++;
    }
    cout << "The largest prime factor is " << largest << endl;
    return;

}

void project:: largerst_palindrome_product()
{
    long int i,j,n,s,a,p,palindrome,highest;
    for (i = 100; i < 1000; i++) {
        for (j = 100; j < 1000; j++)
        {

        n = i * j;
        p = n;
        s = 0;

            while (n > 0)
            {
                    a = n % 10;
                    s = s * 10 + a;
                    n = n /10;
            }
            if (p == s)
            {
                palindrome = p;
                if(palindrome>highest)
                {
                    highest=palindrome;
                }
            }

        }

    }
    cout << "The highest palindrome product is " << highest << endl;
    return;

}



void project:: smallest_multiple()
{
    int y=0;
    int lowest;
    int x=2;

    while(x<1000000000)
        {

        if(x%2==0 && x%3==0 && x%4==0 && x%5==0 && x%6==0 && x%7==0 && x%8==0 && x%9==0 && x%10==0 && x%11==0&& x%12==0&& x%13==0&& x%14==0&& x%15==0&& x%16==0&& x%17==0&& x%18==0&& x%19==0&& x%20==0 )
        {

            if(x <= lowest)
            {
                lowest=x;
                cout << "The lowest multiple is " << lowest << endl;
            }
        }
        x++;
        }
        return;

}

void project:: sum_square_diff()
{
    int a;
    int summation=0;
    int summation2=0;
    int total;
    for(int x=1; x<=100; x++)
    {
        a=x*x;
        summation=summation+a;
        summation2+=x;
    }

    summation2 *= summation2;
    total=summation2-summation;
    cout << "Sum and square difference is " << total << endl;
    return;

}

void project::thou1st_prime()
{
    int highest=0;
    int x=2;
    bool test;

    for(int z=0; z<10001; z++)
    {
        test = false;
        while(test==false)
        {
            for(int y=2; y<=x; y++)
            {
                if(y==x)
                {
                    test=true;
                }

                else if (x%y==0)
                {
                    break;
                }
            }
            x++;
        }
    }
    x--;
    cout << "The 10001st prime is " <<  x << endl;
    return;



}

void project::largest_product_in_series()
{
     string thousands="7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
    long p=1, digits, highest=0, i;
    const char* a=thousands.c_str();
    for (p=0; p<995; p++)
    {
        digits=1;
        for (i=p; i<p+5; i++)
        {
            digits*=(int(a[i])-48);
        }
        if (digits>highest) highest=digits;
    }

    cout<< "The Largest product in series is " << highest<<endl ;
    return;


}

void project::special_pytho_triplet()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int product;
    bool test = false;
    for (a = 1; a < 1000 / 3; a++)
    {
        for (b = a; b < 1000 / 2; b++)
        {
            c = 1000 - a - b;

            if (a * a + b * b == c * c)
            {
                test = true;
                break;
            }
        }

        if (test)
        {
            break;
        }
    }

    product=a*b*c;
    cout << "The product of abc is " << product << endl;
    return;

}

void project::summation_of_primes()
{
    int summation=0;

        for (int y=2; y<=2000000; y++)
        {

            for(int z =2; z<=y; z++)
            {
                if(z==y)
                {
                    summation += y;
                    break;
                }
                else if(y%z==0)
                {
                    break;
                }
            }
        }
    cout << "The summation of primes is " << summation << endl;
    return;

}

void project::largest_product_grid()
{

}

void project::divisible_triangular_number()
{
    int temp=0;
    int x=0, y=0;
    int c = 0;
    bool test=false;
    while(test==false)
    {
        temp+=x;
        for(int j=1;j<=temp; j++)
        {
            if(temp%j==0)
            {

                c++;
            }

        }
            if(c>=500)
            {
                cout << temp;
                test=true;
                break;
            }
            else c = 0;
    x++;

}
}

void project::largest_sum()
{

}

void project::longest_collatz_sequence()
{
    long n, largestcounter=0,num;

        for(long a=2;a<=1000000;a++)
        {
        long counter=1;
            for(n=a;n>1;)
            {
                if(n%2==0)
                {
                    n=n/2;
                    counter++;
                }
                else
                {
                    n=3*n+1;
                    counter++;
                }
            }

            if(counter>largestcounter)
            {
                largestcounter=counter;
                num=a;
            }
        }
    cout<<num<<endl<<largestcounter<<endl;
    return;

}

void project::diophantine_reciprocals_a()
{

}

void project::power_digit_sum()
{
    ostringstream convert;
    int summation = 0;

    long long product=pow(2,1000);

    convert << product;
    string x = convert.str();
    int x_range = x.length();
    string y;
    for(long long i = 0LL; i < x_range; i++)
    {
        y = x.at(i);
        int z = 0;
        stringstream(y) >> z;
        summation+=z;

    }
    cout << summation << endl;


}



void project::number_letter_counts()
{

}

void project::max_path_sum_one()
{

}

void project::counting_sundays()
{

}

void project::factorial_digit_sum()
{
    ostringstream convert;
    int summation = 0;
    long long product=1LL;
    for(int i=1; i<=10; i++)
    {
        product*=i;
    }
    convert << product;
    string x = convert.str();
    int x_range = x.length();
    string y;
    for(int i = 0; i < x_range; i++)
    {
        y = x.at(i);
        int z = 0;
        stringstream(y) >> z;
        summation+=z;

    }
    cout << summation << endl;


}


