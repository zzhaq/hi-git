// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdlib.h>  
#include <stdio.h>  

#define MAXPATH 128 


int _tmain(int argc, _TCHAR* argv[])
{
	FILE *fp;
	fp = fopen("\\temp.txt", "w");

	fclose(fp);//�ر��ļ�b.txt
	return 0;
}

