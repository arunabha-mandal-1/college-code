// We can assign values to some name in any order. All unassigned names get value as value of previous name plus one. 
#include <stdio.h>
enum day {sunday = 1, monday, tuesday = 5,
		wednesday, thursday = 10, friday, saturday};

int main()
{
	printf("%d %d %d %d %d %d %d", sunday, monday, tuesday,
			wednesday, thursday, friday, saturday);
	return 0;
}


//  The value assigned to enum names must be some integral constant, i.e., the value must be in range from minimum possible integer value to maximum possible integer value.