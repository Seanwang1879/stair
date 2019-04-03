#include <stdio.h>
//每次可与走一阶或者两阶

int count = 0;

int stair(int nums, int sub_nums);
void main()
{
	stair(100,1);
	stair(100,2);
	
	prinf("each of the possible Numbers is %d\n",count);

	return ;
}

int stair(int nums, int sub_nums)
{
	
	//static int count = 0;
	int sub;

	sub = nums-sub_nums;
	if(sub == 0){
		count++;
		return 0;
	}else if(sub < 0){
		return -1;
	}
	stair(sub, 1);
	stair(sub, 2);
	
	return 0;
}
