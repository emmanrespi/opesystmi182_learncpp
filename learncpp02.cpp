#include <iostream>
using namespace std;

int main()
{
    int number;
    cout <<"Enter an integer: "<< endl;
    scanf("%d", &number);

    if  (number%2 == 0) 
    {
        printf("%d is an even integer.",number);
    }
    else
    {
        printf("%d is an odd integer.",number);
    }
    return 0;
}
