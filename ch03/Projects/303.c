#include <stdio.h>

int main(void)
{
	int gs1_prefix, group_id, pub_code, item_num, check;

	printf("Enter ISBN: ");
	
	scanf("%d -%d -%d -%d -%d", &gs1_prefix, &group_id, &pub_code, &item_num, &check);

	printf("GS1 prefix: %d\n"
			"Group identifier: %d\n"
			"Publisher code: %d\n"
			"Item number: %d\n"
			"Check digit: %d\n",
			gs1_prefix, group_id, pub_code, item_num, check);

	return 0 ;
}
