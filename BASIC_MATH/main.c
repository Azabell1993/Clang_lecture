#include "program.h"
/*
#include <fcntl.h>

#define MAX_READ 1001
char string[MAX_READ];
char string2[MAX_READ];

ssize_t read(int fd, void *buffer, size_t count);
*/
void ft_Choose()
{
	do {
		printf("원하는 연산을 고르시오. +,_,*,/  :   ");
		scanf("%c", &key);

		} while (!((key == '+' || '-' || '*' || '/')));

	do {
		printf("원하는 연산의 자릿수는? (1~3) :   ");
		scanf("%d", &make_q_number);
	} while (! (make_q_number));

	clip = make_q_number;
}

void ft_make_qes()
{
	if (clip == 1)
	{
		make_space = 10;
	}
	else if (clip == 2)
	{
		make_space = 100;
	}
	else if (clip == 3)
	{
		make_space = 1000;
	}
	else make_space = 10;

	do
	{
		printf("몇 페이지를 할 것 입니까? (1 ~ 5) :   ");
		scanf("%d", &make_page);
	}while (!(make_page < 6));
}


void ft_Result()
{
	i = 1;
	while (i <= count_index)
	{
		Que_first[i] = rand() % make_space;
		Que_second[i] = rand() % make_space;

		switch(key)
		{
			case '+' : ft_Sum();			break;
			case '-' : ft_Sub();		break;
			case '*' : ft_Multiplication();		break;
			case '/' : ft_split(); break;
			default : printf("예외 연산자\n");  break;
		}
		i++;
	}

	ft_putchar('\n');
	printf("당신이 풀 문제들입니다.\n");
	ft_putchar('\n');

	i = 1;
	while (i <= count_index)
	{
		printf("%6d) %12d) %12d) %12d) \n", i, i+1, i+2, i+3);
		printf("%13d  %13d  %13d  %13d\n", Que_first[i], Que_first[i+1], Que_first[i+2], Que_first[i+3]);
		printf("%2c%11d  %2c%11d  %2c%11d  %2c%11d\n", key, Que_second[i], key, Que_second[i+1], key, Que_second[i+2], key, Que_second[i+3]);
		printf("  ------------ ");
		printf("  ------------ ");
		printf("  ------------ ");
		printf("  ------------ ");

		if ( count_index % 4 == 0) printf("\n\n\n\n\n");

		i += 4;
	}
}

void ft_Display_output_ques_result()
{

	printf("================================================= \n");
	printf("====================Result======================= \n");

	printf("-------------------------------------------------\n");
	printf(" result.txt파일로 결과가 저장되었습니다.        \n");

	i = 1;
	while (i <= count_index)
		{		
			if (key == '/') 
			{
				fprintf(fp, "%s [%2d번] 답 = %5.2f  <<<<< 정답 여부 : ", C_NRML, i, Que_result_split[i]);
				if(Que_result_split[i] == float_answer[i])
				{
					fprintf(fp, "%s  [ OK ] \n", C_YLLW);
					correct_count++;
				}
				else
				{
					fprintf(fp, "%s  [ NG ] \n", C_RED);
					ng_count++;

				}
				ft_putchar('\n');
			}
			else
			{
				fprintf(fp, "%s [%2d번] 답 = %4d  <<<<< 정답 여부 : ", C_NRML, i, Que_result[i]);
				if(Que_result[i] == int_answer[i])
				{
					fprintf(fp, "%s  [ OK ] \n", C_YLLW);
					correct_count++;
				}
				else
				{
					fprintf(fp, "%s  [ NG ] \n", C_RED);
					ng_count++;
				}
				ft_putchar('\n');
			}
			i++;
		}

	printf("%s ================================================ \n", C_YLLW);
	printf("%s ================================================ \n", C_RED);
	printf("%s   고 생 하 셨 습 니 다.                          \n", C_YLLW);
	printf("%s ================================================ \n", C_RED);
}

void ft_putchar(char enter)
{
	write(1, &enter, 1);
}

void ft_sumbit()
{
	printf("차례대로 정답을 적으시오. 자동으로 채점을 도와줄 겁니다. (소숫점 계산은 소수 둘째자리깢. 0.15) \n");
	ft_putchar('\n');

	count = 1;
	do
	{
		if(key == '/')
		{
			printf("문제 번호 [%3d] : ", count);
			scanf("%f", &float_answer[count]);
			ft_putchar('\n');
		}
		else if(key == '+' || '-' || '*')
		{
			printf("문제 번호 [%3d] : ", count);
			scanf("%d", &int_answer[count]);
			ft_putchar('\n');
		}
		else
		{
			printf("input data error!");
		}
		count++;
	} while ( count <=  count_index);
}

int main(int argc, char *argv[])
{
	//Arch_logo();
	//Print();
	
	key = getch();

	ft_Choose();
	ft_make_qes();

	page = make_page;
	count_index = page * LIMIT_PAGE;
	srand(time(NULL));

	ft_Result();

	ft_sumbit();

	fp = fopen("result.txt", "w");


	if(fp == NULL)
	{
		errExit("File OpEn Err..oR..\n");
	}
	fprintf(fp, "\n");
	fprintf(fp, "\n");
	fprintf(fp, "\n");

	fprintf(fp, "InPu..T ComPlE..tE!!\n");

	                 
	printf("%s 답안지는 숫자 '1' 키를 누르시면 됩니다.\n", C_YLLW);
	printf("  종료하려면 아무키나 입력해주세요.\n");
	printf("===================================\n");

	
	int num;
	scanf("%d", &num);

	if ( num == 1) 
	{
		ft_Display_output_ques_result();
		ft_putchar('\n');
		fprintf(fp, "\n\n\n");
		fprintf(fp, "%s 정답의 개수는 %d개 입니다.\n",C_YLLW, correct_count);
		fprintf(fp, "%s 오답의 개수는 %d개 입니다.\n",C_RED,  ng_count);
		fprintf(fp, "-----------------------------------------------------------------------------\n\n\n");
		ft_putchar('\n');
	}
	else
	{
		printf("정답,채점 없이 종료합니다!!  thank you!\n");
	}
	

	fclose(fp);
	return (0);
}


