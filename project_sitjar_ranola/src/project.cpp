#include "../include/project.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>
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

void project::multiples_3_and_5() // Problem 1
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

void project::even_fibonacce()// Problem 2
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
void project:: largest_prime_factor()// Problem 3
{
    long long y=600851475143LL;
    long long largest=0LL;
    long long x=2LL;
    cout << "This might take a minute. -- computing..." << endl;

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

void project:: largerst_palindrome_product() // Problem 4
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



void project:: smallest_multiple() // Problem 5
{
    int y=0;
    int lowest;
    int x=2;
    cout << "This might take a minute. -- computing..." << endl;
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

void project:: sum_square_diff() // Problem 6
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

void project::thou1st_prime() // Problem 7
{
    int highest=0;
    int x=2;
    bool test;
    cout << "This might take a minute. -- computing..." << endl;

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

void project::largest_product_in_series() // Problem 8
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

void project::special_pytho_triplet() // Problem 9
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

void project::summation_of_primes() // Problem 10
{
    int summation=0;
    cout << "This might take a minute. -- computing..." << endl;

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

bool project::Prime_check(long num)
{
     bool Prime_check = true;
     for (int i=2; i<= round(sqrt(num)) && Prime_check; i++)
     {
         Prime_check = !(num % i == 0);
     }
     return Prime_check;
}

void project::largest_product_grid()// Problem 11
{

    int num_container[20][20] =
    {
    { 8,02,22,97,38,15,00,40,00,75,04,05,07,78,52,12,50,77,91, 8},
    {49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48,04,56,62,00},
    {81,49,31,73,55,79,14,29,93,71,40,67,53,88,30,03,49,13,36,65},
    {52,70,95,23,04,60,11,42,69,24,68,56,01,32,56,71,37,02,36,91},
    {22,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80},
    {24,47,32,60,99,03,45,02,44,75,33,53,78,36,84,20,35,17,12,50},
    {32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70},
    {67,26,20,68,02,62,12,20,95,63,94,39,63, 8,40,91,66,49,94,21},
    {24,55,58,05,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72},
    {21,36,23, 9,75,00,76,44,20,45,35,14,00,61,33,97,34,31,33,95},
    {78,17,53,28,22,75,31,67,15,94,03,80,04,62,16,14, 9,53,56,92},
    {16,39,05,42,96,35,31,47,55,58,88,24,00,17,54,24,36,29,85,57},
    {86,56,00,48,35,71,89,07,05,44,44,37,44,60,21,58,51,54,17,58},
    {19,80,81,68,05,94,47,69,28,73,92,13,86,52,17,77,04,89,55,40},
    {04,52, 8,83,97,35,99,16,07,97,57,32,16,26,26,79,33,27,98,66},
    {88,36,68,87,57,62,20,72,03,46,33,67,46,55,12,32,63,93,53,69},
    {04,42,16,73,38,25,39,11,24,94,72,18, 8,46,29,32,40,62,76,36},
    {20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74,04,36,16},
    {20,73,35,29,78,31,90,01,74,31,49,71,48,86,81,16,23,57,05,54},
    {01,70,54,71,83,51,54,69,16,92,33,48,61,43,52,01,89,19,67,48},
                                                                };

    int start = 0;
    int end = 3;
    int product = 1;

    vector<long int>final_results;

        for(int i=0; i<20; i++){
            for(int j=start; j<=end; j++){
                product=product*num_container[i][j];
                if(j==end){
                final_results.push_back(product);
                product=1;
                start++;
                end++;
                }
                if(j==19)break;
            }
            start=0;
            end=3;
            for(int k=start; k<=end; k++){
                product=product*num_container[k][i];
                if(k==end){
                final_results.push_back(product);
                product=1;
                start++;
                end++;
                }
                if(k==19){
                start=0;
                end=3;
                break;
                }
            }
        }

    int current_row = 0;

        for(int i=0; i<=16; i++)
        {
            for(int j=0; j<=16; j++)
            {
                current_row = i;
                for(int k=start; k<=end; k++)
                {
                    product = product * num_container[current_row][k];
                    current_row++;
                    if (k==end)
                        final_results.push_back(product);
                }
                product = 1;
                start++;
                end++;
            }
            start = 0;
            end = 3;

            for(int j=0; j<=16; j++)
            {
                current_row = i+3;
                for(int k=start; k<=end; k++)
                {
                    product = product * num_container[current_row][k];
                    current_row--;
                    if (k==end)
                        final_results.push_back(product);
                }
                product = 1;
                start++;
                end++;
            }
            start = 0;
            end = 3;
        }
        int max_product=0;
        for(unsigned p=0; p<final_results.size(); p++){
            if(final_results[p]>max_product)
                max_product=final_results[p];
        }
        cout << "The greatest product of four adjacent numbers: " << max_product << endl;
}

void project::divisible_triangular_number() // Problem 12
{
    int i,j,counter,max,ans;
    ans=0;
    max=0;
    cout << "This might take a minute. -- computing..." << endl;
  for(i=1;i<13000;i++)
    {
    ans=ans+i;
    counter=0;
    for (j=1;j<1000000;j++){
      if(ans%j==0)
        counter++;
      }
    if (counter>max){max=counter;}
    if (counter>500)
    {
        cout << "The first triangle number is " << ans << endl;
        break;
    }
    }

}

void project::largest_sum() // Problem 13
{
      const std::string add[100] = {
        "37107287533902102798797998220837590246510135740250",
        "46376937677490009712648124896970078050417018260538",
        "74324986199524741059474233309513058123726617309629",
        "91942213363574161572522430563301811072406154908250",
        "23067588207539346171171980310421047513778063246676",
        "89261670696623633820136378418383684178734361726757",
        "28112879812849979408065481931592621691275889832738",
        "44274228917432520321923589422876796487670272189318",
        "47451445736001306439091167216856844588711603153276",
        "70386486105843025439939619828917593665686757934951",
        "62176457141856560629502157223196586755079324193331",
        "64906352462741904929101432445813822663347944758178",
        "92575867718337217661963751590579239728245598838407",
        "58203565325359399008402633568948830189458628227828",
        "80181199384826282014278194139940567587151170094390",
        "35398664372827112653829987240784473053190104293586",
        "86515506006295864861532075273371959191420517255829",
        "71693888707715466499115593487603532921714970056938",
        "54370070576826684624621495650076471787294438377604",
        "53282654108756828443191190634694037855217779295145",
        "36123272525000296071075082563815656710885258350721",
        "45876576172410976447339110607218265236877223636045",
        "17423706905851860660448207621209813287860733969412",
        "81142660418086830619328460811191061556940512689692",
        "51934325451728388641918047049293215058642563049483",
        "62467221648435076201727918039944693004732956340691",
        "15732444386908125794514089057706229429197107928209",
        "55037687525678773091862540744969844508330393682126",
        "18336384825330154686196124348767681297534375946515",
        "80386287592878490201521685554828717201219257766954",
        "78182833757993103614740356856449095527097864797581",
        "16726320100436897842553539920931837441497806860984",
        "48403098129077791799088218795327364475675590848030",
        "87086987551392711854517078544161852424320693150332",
        "59959406895756536782107074926966537676326235447210",
        "69793950679652694742597709739166693763042633987085",
        "41052684708299085211399427365734116182760315001271",
        "65378607361501080857009149939512557028198746004375",
        "35829035317434717326932123578154982629742552737307",
        "94953759765105305946966067683156574377167401875275",
        "88902802571733229619176668713819931811048770190271",
        "25267680276078003013678680992525463401061632866526",
        "36270218540497705585629946580636237993140746255962",
        "24074486908231174977792365466257246923322810917141",
        "91430288197103288597806669760892938638285025333403",
        "34413065578016127815921815005561868836468420090470",
        "23053081172816430487623791969842487255036638784583",
        "11487696932154902810424020138335124462181441773470",
        "63783299490636259666498587618221225225512486764533",
        "67720186971698544312419572409913959008952310058822",
        "95548255300263520781532296796249481641953868218774",
        "76085327132285723110424803456124867697064507995236",
        "37774242535411291684276865538926205024910326572967",
        "23701913275725675285653248258265463092207058596522",
        "29798860272258331913126375147341994889534765745501",
        "18495701454879288984856827726077713721403798879715",
        "38298203783031473527721580348144513491373226651381",
        "34829543829199918180278916522431027392251122869539",
        "40957953066405232632538044100059654939159879593635",
        "29746152185502371307642255121183693803580388584903",
        "41698116222072977186158236678424689157993532961922",
        "62467957194401269043877107275048102390895523597457",
        "23189706772547915061505504953922979530901129967519",
        "86188088225875314529584099251203829009407770775672",
        "11306739708304724483816533873502340845647058077308",
        "82959174767140363198008187129011875491310547126581",
        "97623331044818386269515456334926366572897563400500",
        "42846280183517070527831839425882145521227251250327",
        "55121603546981200581762165212827652751691296897789",
        "32238195734329339946437501907836945765883352399886",
        "75506164965184775180738168837861091527357929701337",
        "62177842752192623401942399639168044983993173312731",
        "32924185707147349566916674687634660915035914677504",
        "99518671430235219628894890102423325116913619626622",
        "73267460800591547471830798392868535206946944540724",
        "76841822524674417161514036427982273348055556214818",
        "97142617910342598647204516893989422179826088076852",
        "87783646182799346313767754307809363333018982642090",
        "10848802521674670883215120185883543223812876952786",
        "71329612474782464538636993009049310363619763878039",
        "62184073572399794223406235393808339651327408011116",
        "66627891981488087797941876876144230030984490851411",
        "60661826293682836764744779239180335110989069790714",
        "85786944089552990653640447425576083659976645795096",
        "66024396409905389607120198219976047599490197230297",
        "64913982680032973156037120041377903785566085089252",
        "16730939319872750275468906903707539413042652315011",
        "94809377245048795150954100921645863754710598436791",
        "78639167021187492431995700641917969777599028300699",
        "15368713711936614952811305876380278410754449733078",
        "40789923115535562561142322423255033685442488917353",
        "44889911501440648020369068063960672322193204149535",
        "41503128880339536053299340368006977710650566631954",
        "81234880673210146739058568557934581403627822703280",
        "82616570773948327592232845941706525094512325230608",
        "22918802058777319719839450180888072429661980811197",
        "77158542502016545090413245809786882778948721859617",
        "72107838435069186155435662884062257473692284509516",
        "20849603980134001723930671666823555245252804609722",
        "53503534226472524250874054075591789781264330331690",
        };

      const std::vector<std::string> nums(add, add + sizeof(add) / sizeof(add[0]));

      uint64_t summation = 0;
      int j = 0;
      std::string string;
      while (1) {
        int sum1 = 0;
        for (std::vector<std::string>::const_iterator it = nums.begin();
             it < nums.end();
             it++)
               sum1 += (*it).at(j);

        summation *= 10;
        summation += sum1 - 4800;
        std::ostringstream stringsum;
        stringsum << summation;
        std::string sum2 = stringsum.str().substr(0, 10);

        if (string != sum2)
        {
            string = sum2;
        }

        else
        {
            break;
        }

        j++;
      }
      cout <<  "The sum of the first ten digit is: " << string.c_str() << endl;
}

void project::longest_collatz_sequence() // Problem 14
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
    cout<<"Longest collatz counter is " << largestcounter<<endl;
    return;

}

void project::diophantine_reciprocals_a() // Problem 15
{
    cout << "No code." << endl;
}

void project::power_digit_sum() // Problem 16
{
    int power = 0, product = 0, hold = 0;
    int digits = 0;
    int summation = 0;
    string total = "1";

    for (power = 1; power <= 1000; ++power)
    {
        hold = 0;
        for (digits = total.length() - 1; digits >= 0; --digits)
        {
            product = (total[digits] - '0') * 2 + hold;
            if (product > 9)
            {
                hold = 1;
                product %= 10;
            }
            else
            {
                hold = 0;
            }
            total[digits] = '0' + product;
            if (digits == 0 && hold == 1)
            {
                total.insert(0, "1");
            }
        }
    }
    for (digits = 0; digits < total.length(); ++digits)
    {
        summation += total[digits] - '0';
    }

        cout << "The sum is " << summation << endl;

}


void project::number_letter_counts() // Problem 17
{

    const std::string onek = "one thousand";
    const int hcount = 7;
    const int handcount = 10;

      const std::string units_array[9] = {"one", "two", "three", "four",
      "five", "six", "seven", "eight", "nine"};
      const std::vector< std::string > units(units_array,
        units_array + sizeof(units_array) / sizeof(units_array[0]));

      const std::string tens_array[90] = {"ten", "eleven", "twelve", "thirteen",
      "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
      "twenty", "twentyone", "twentytwo", "twentythree", "twentyfour",
      "twentyfive", "twentysix", "twentyseven", "twentyeight", "twentynine",
      "thirty", "thirtyone", "thirtytwo", "thirtythree", "thirtyfour",
      "thirtyfive", "thirtysix", "thirtyseven", "thirtyeight", "thirtynine",
      "forty", "fortyone", "fortytwo", "fortythree", "fortyfour",
      "fortyfive", "fortysix", "fortyseven", "fortyeight", "fortynine",
      "fifty", "fiftyone", "fiftytwo", "fiftythree", "fiftyfour",
      "fiftyfive", "fiftysix", "fiftyseven", "fiftyeight", "fiftynine",
      "sixty", "sixtyone", "sixtytwo", "sixtythree", "sixtyfour",
      "sixtyfive", "sixtysix", "sixtyseven", "sixtyeight", "sixtynine",
      "seventy", "seventyone", "seventytwo", "seventythree", "seventyfour",
      "seventyfive", "seventysix", "seventyseven", "seventyeight", "seventynine",
      "eighty", "eightyone", "eightytwo", "eightythree", "eightyfour",
      "eightyfive", "eightysix", "eightyseven", "eightyeight", "eightynine",
      "ninety", "ninetyone", "ninetytwo", "ninetythree", "ninetyfour",
      "ninetyfive", "ninetysix", "ninetyseven", "ninetyeight", "ninetynine"};
      const std::vector< std::string > tens(tens_array,
        tens_array + sizeof(tens_array) / sizeof(tens_array[0]));

      int count = 0;

      for (std::vector< std::string >::const_iterator it = units.begin();
           it < units.end(); it++)
        count += it->length();
      for (std::vector< std::string >::const_iterator it = tens.begin();
           it < tens.end(); it++)
        count += it->length();
      for (std::vector< std::string >::const_iterator it = units.begin();
           it < units.end(); it++) {
        count += it->length() + hcount;
        for (std::vector< std::string >::const_iterator jt = units.begin();
             jt < units.end(); jt++)
          count += it->length() + handcount + jt->length();
        for (std::vector< std::string >::const_iterator jt = tens.begin();
             jt < tens.end(); jt++)
          count += it->length() + handcount + jt->length();
      }

      count += onek.length() - 1;
      cout << "The number of letters: " << count << endl;
}

void project::max_path_sum_one() // Problem 18
{

    std::vector< std::vector<int> > data;

      int arow1[1] = {75};
      std::vector<int> row1(arow1, arow1 + sizeof(arow1) / sizeof(arow1[0]));
      data.push_back(row1);

      int arow2[2] = {95, 64};
      std::vector<int> row2(arow2, arow2 + sizeof(arow2) / sizeof(arow2[0]));
      data.push_back(row2);

      int arow3[3] = {17, 47, 82};
      std::vector<int> row3(arow3, arow3 + sizeof(arow3) / sizeof(arow3[0]));
      data.push_back(row3);

      int arow4[4] = {18, 35, 87, 10};
      std::vector<int> row4(arow4, arow4 + sizeof(arow4) / sizeof(arow4[0]));
      data.push_back(row4);

      int arow5[5] = {20,  4, 82, 47, 65};
      std::vector<int> row5(arow5, arow5 + sizeof(arow5) / sizeof(arow5[0]));
      data.push_back(row5);

      int arow6[6] = {19,  1, 23, 75,  3, 34};
      std::vector<int> row6(arow6, arow6 + sizeof(arow6) / sizeof(arow6[0]));
      data.push_back(row6);

      int arow7[7] = {88,  2, 77, 73,  7, 63, 67};
      std::vector<int> row7(arow7, arow7 + sizeof(arow7) / sizeof(arow7[0]));
      data.push_back(row7);

      int arow8[8] = {99, 65,  4, 28,  6, 16, 70, 92};
      std::vector<int> row8(arow8, arow8 + sizeof(arow8) / sizeof(arow8[0]));
      data.push_back(row8);

      int arow9[9] = {41, 41, 26, 56, 83, 40, 80, 70, 33};
      std::vector<int> row9(arow9, arow9 + sizeof(arow9) / sizeof(arow9[0]));
      data.push_back(row9);

      int arow10[10] = {41, 48, 72, 33, 47, 32, 37, 16, 94, 29};
      std::vector<int> row10(arow10, arow10 + sizeof(arow10) / sizeof(arow10[0]));
      data.push_back(row10);

      int arow11[11] = {53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14};
      std::vector<int> row11(arow11, arow11 + sizeof(arow11) / sizeof(arow11[0]));
      data.push_back(row11);

      int arow12[12] = {70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57};
      std::vector<int> row12(arow12, arow12 + sizeof(arow12) / sizeof(arow12[0]));
      data.push_back(row12);

      int arow13[13] = {91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48};
      std::vector<int> row13(arow13, arow13 + sizeof(arow13) / sizeof(arow13[0]));
      data.push_back(row13);

      int arow14[14] = {63, 66,  4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31};
      std::vector<int> row14(arow14, arow14 + sizeof(arow14) / sizeof(arow14[0]));
      data.push_back(row14);

      int arow15[15] = { 4, 62, 98, 27, 23,  9, 70, 98, 73, 93, 38, 53, 60, 4, 23};
      std::vector<int> row15(arow15, arow15 + sizeof(arow15) / sizeof(arow15[0]));
      data.push_back(row15);


  for (int i = data.size(); i > 0; --i)
    for (int j = 0; j < (i - 1); ++j)
      data[i-2][j] += std::max(data[i-1][j], data[i-1][j+1]);

  cout << "The maximum total from top to bottom of the triangle: " << data[0][0] << endl;

}

void project::counting_sundays() // Problem 19
{
    int count = 0, daysmos, days = 1;

    for (int i = 1901; i < 2000; i++)
    {
        for (int j = 1; j <= 12; j++)
        {
            if (j == 4 || j == 6 || j == 9 || j == 11)
            {
                daysmos = 30;
            }
            else if (j == 2)
            {
                if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
                {
                    daysmos = 29;
                }
                else
                {
                    daysmos = 28;
                }
            }
            else
            {
                daysmos = 31;
            }
            if (days % 7 == 0)
            {
                count++;
            }

        days += daysmos;
        }
    }

    cout << "The number of sundays: " << count << endl;



}

void project::factorial_digit_sum() // Problem 20
{
    int i = 0, j = 0;
    int summation = 0;
    int array[1000] = {0};
    array[0] = 1;

    for (i = 1; i <= 100; i++)
    {
        for (j = 0; j < 1000; j++)
        {
            array[j] = array[j]*i;
        }
        for (j = 0; j < 1000; j++)
        {
            array[j+1] += (array[j])/10;
            array[j] = (array[j])%10;
        }
    }
    for (j = 0; j < 1000; j++)
    {
        summation += array[j];
    }
        cout << "The sum is: " << summation <<endl;
}

void project::name_scores() // Problem 21
{
    string numbers[5163];
    char alphabet[26]={'A', 'B', 'C', 'D', 'E', 'F', 'G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    string line;
    int product=0;
    long summation=0;
    string y;
    string x;
    int z = 0;
    ifstream myfile;
    myfile.open("46k.txt");
    while(myfile.good())
    {
        getline(myfile, line, ',');
        x = line;
        numbers[z]=x;
        z++;
    }
    for(int p=0; p<5163; p++)
    {
        for(int r=0; r<5163; r++)
        {
            if(numbers[r]>numbers[p])
            {
                y=numbers[r];
                numbers[r]=numbers[p];
                numbers[p]=y;
            }
        }


    }
    for(int i = 0; i < 5163; i++)
    {
        int range_n = numbers[i].length();
        string temp_n = "";
        for(int j = 0; j < range_n; j++)
        {
            if(numbers[i].at(j) == '"') continue;

            temp_n += numbers[i].at(j);
        }
        numbers[i] = temp_n;
    }

    for(int i=0; i<5163; i++)
    {
        int range_nl = numbers[i].length();
        int sumdigits=0;
        for(int j = 0; j < range_nl; j++)
        {
            for(int k=0; k<26; k++)
            {
                if(numbers[i].at(j)== alphabet[k])
                {
                    sumdigits+=k+1;

                }
            }
        }
        product=sumdigits*(i+1);
        summation+=product;

    }
   cout << "The name score summation is " << summation << endl;

}
int project::convertCharToNum(char num1)
{
    int num;
    if(num1 == '1') num = 1;
    else if(num1 == '2') num = 2;
    else if(num1 == '3') num = 3;
    else if(num1 == '4') num = 4;
    else if(num1 == '5') num = 5;
    else if(num1 == '6') num = 6;
    else if(num1 == '7') num = 7;
    else if(num1 == '8') num = 8;
    else if(num1 == '9') num = 9;
    else if(num1 == '0') num = 0;
    return num;
}
char project::convertNumToChar(int num1)
{
    char num;
    if(num1 == 1) num = '1';
    else if(num1 == 2) num = '2';
    else if(num1 == 3) num = '3';
    else if(num1 == 4) num = '4';
    else if(num1 == 5) num = '5';
    else if(num1 == 6) num = '6';
    else if(num1 == 7) num = '7';
    else if(num1 == 8) num = '8';
    else if(num1 == 9) num = '9';
    else if(num1 == 0) num = '0';
    return num;
}
void project::first_1000_digit_fibonacci() // Problem 22
{
    string present = "1";
    string previous = "0";
    string temp = present;
    string temp_sum = "";

    int carry = 0;
    int term = 1;
    int range_pt = present.length();
    int range_pv = previous.length();
    while (range_pt < 1000)
    {
        if(range_pt > range_pv)
        {
            for(int i = 0; i < range_pt - range_pv; i++)
            {
                previous = "0" + previous;
            }
            range_pv = previous.length();
        }
        for(int i = range_pt - 1; i >= 0; i--)
        {
            int num_a = convertCharToNum(present.at(i));
            int num_b = convertCharToNum(previous.at(i));
            int sum = num_a + num_b + carry;
            carry = 0;

            if(sum > 9)
            {
                int a = sum%10;
                sum -= a;
                carry = sum/10;
                temp_sum = convertNumToChar(a) + temp_sum;
            }
            else
            {
                temp_sum = convertNumToChar(sum) + temp_sum;
            }
            if(carry != 0 && i == 0)
            {
                temp_sum = convertNumToChar(carry) + temp_sum;
                carry = 0;
            }
        }
        temp = present;
        present = temp_sum;
        previous = temp;
        term++;
        temp_sum = "";
        range_pt = present.length();
        range_pv = previous.length();
    }
    cout << term << endl;
}
int project::isprime(int n)
{
    int i;
    if(n==1)
        return(0);
    for(i=2;i<n/2+1;i++)
    {

        if(n%i==0)
        {
            return(0);
            break;
        }
    }
    return(1);
}
int project::power(int a, int b)
{
    int r = 1;
    int i=0;
    for (i=0;i<b;i++){
        r = r * a;
    }
    return r;
}
void project::truncable_primes() // Problem 23
{
 int count=0,z=0;
    int i;
    int n;
    int z1=0;
    int p;
    int count1=0;
    int digits;
    int k=1000000;
    int summation=0;
    cout << "This might take a minute. -- computing..." << endl;
    for(i=2;i<k;i++)
    {
        if(isprime(i)==1)
        {
            z = 0;
            count = 0;
            n=i;
            p=i;
            while(n>0)
            {
                n=n/10;
                if(isprime(n)==1)
                {
                    count++;
                }else{
                    count = -1;
                    break;
                }
                z++;
            }

            if(z==count)
            {
                z1= 0;
                count1=0;
                n = i;
                p= i;
                while(p>0)
                {
                    digits=n%power(10,z1+1);
                    p = p /10;
                    if (isprime(digits)==1)
                    {
                        count1++;
                    }else{
                        count1 =-1;
                        break;
                    }
                    z1++;
                }

                if(z1==count1){
                    if(i>10)
                    {

                        summation = summation+i;

                    }

                }


            }
        }
    }

    cout << "The summation is " << summation << endl;

}
