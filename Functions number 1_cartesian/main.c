//Computing distance of cartesian coordinates


#include <stdio.h>
#include<math.h>

int main()
int main()
{
	int x1;
	int y1;
	int x2;
	int y2;
	int gdistance;

	printf("Input x point 1: ");
	scanf("%d", & x1);
	printf("Input y point 1: ");
	scanf("%d", &y1);

    printf("Input x point 2: ");
	scanf("%d", &x2);
	printf("Input y point 2: ");
	scanf("%d", &y2);

	gdistance = sqrt(pow(x1,2)+pow(x2,2)+pow(y1,2)+pow(y2,2));
	printf("Distance between the said points: %d", gdistance);
	printf("\n");
	//return 1;
}
