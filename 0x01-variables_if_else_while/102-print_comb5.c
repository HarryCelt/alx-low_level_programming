#include <stdio.h>
/**
 * main - int first_num, sec_num
 * loop - for, if
 * Return: 0 correct
 */
int main(void)
{
	int first_num, sec_num;

	for (first_num = 0; first_num < 100; first_num++)
	{
		for (sec_num = first_num + 1; sec_num < 100; sec_num++)
		{

			putchar(first_num / 10 + '0');
			putchar(first_num % 10 + '0');


			putchar(' ');

			putchar(sec_num / 10 + '0');
			putchar(sec_num % 10 + '0');


			if (first_num == 98 && sec_num == 99)
			{
				break;
			}


			putchar(',');
			putchar(' ');


		}

	}
	
	putchar('\n');


	return (0);

}
