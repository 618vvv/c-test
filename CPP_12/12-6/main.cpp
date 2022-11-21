#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer?

 //对12-5的main.cpp进行修改

 /*
 g++ main.cpp queue.cpp
 ./a.out

 Case Study: Bank of Heather Automatic Teller
Enter maximum size of queue: 10
Enter the number of simulation hours: 100
Enter the average number of customers per hour: 18
customers accepted: 3647
  customers served: 3646
         turnaways: 0
average queue size: 0.35
 average wait time: 0.58 minutes
Done! */

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
// setting things up
    std::srand(std::time(0));
    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line1(qs);
    Queue line2(qs);
    cout << "Enter the number of simulation hours: ";
    int hours;
    cin >> hours;
    // simulation will run 1 cycle per minute
    long cyclelimit = MIN_PER_HR * hours; // # of cycles

    cout << "Enter the average number of customers per hour: ";
    double perhour;         //  average # of arrival per hour
    cin >> perhour;
    double min_per_cust;    //  average time between arrivals
    min_per_cust = MIN_PER_HR / perhour;

    Item temp;              //  new customer data
    long turnaways = 0;     //  turned away by full queue
    long customers = 0;     //  joined the queue
    long served = 0;        //  served during the simulation
    long sum_line = 0;      //  cumulative line length
    int wait1_time = 0;      //  time until autoteller is free
    long line1_wait = 0;     //  cumulative time in line
    int wait2_time = 0;      //  time until autoteller is free
    long line2_wait = 0;     //  cumulative time in line

// running the simulation
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust))  // have newcomer
        {
            if (line1.isfull()&&line2.isfull())
                turnaways++;
            else if(line2>line1)
            {
                customers++;
                temp.set(cycle);    // cycle = time of arrival
                line1.enqueue(temp); // add newcomer to line
            }else{
                customers++;
                temp.set(cycle);
                line2.enqueue(temp);
            }
        }
        if (wait1_time <= 0 && !line1.isempty())
        {
            line1.dequeue (temp);      // attend next customer
            wait1_time = temp.ptime(); // for wait_time minutes
            line1_wait += cycle - temp.when();
            served++;
        }
        if (wait2_time <= 0 && !line2.isempty())
		{
			line2.dequeue(temp);      // attend next customer
			wait2_time = temp.ptime(); // for wait_time minutes
			line2_wait += cycle - temp.when();
			served++;
		}
        if (wait1_time > 0)
            wait1_time--;
		sum_line += line1.queuecount();
		if (wait2_time > 0)
			wait2_time--;
        sum_line += line2.queuecount();

    }

// reporting results
    if (customers > 0)
    {
        cout << "customers accepted: " << customers << endl;
        cout << "  customers served: " << served << endl;
        cout << "         turnaways: " << turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl;
        cout << " average wait time: "
             << (double) (line1_wait+line2_wait) / served << " minutes\n";
    }
    else
        cout << "No customers!\n";
    cout << "Done!\n";
    // cin.get();
    // cin.get();
    return 0;
}

//  x = average time, in minutes, between customers
//  return value is true if customer shows up this minute
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}

