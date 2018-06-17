// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>  
#include <stdio.h>  

#define MAXPATH 128 


int _tmain(int argc, _TCHAR* argv[])
{
	FILE *fp;
	fp = fopen("\\temp.txt", "w");

	fclose(fp);//关闭文件b.txt
	return 0;
}

