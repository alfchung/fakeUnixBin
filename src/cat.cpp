#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** argv)
{
	char buffer[1024];
	FILE* pfile;
	if(argc<2)
	{
		cout<<"not enough parameters"<<endl;
		return -1;
	}
	else
	{
		pfile=fopen(argv[1],"r");
head:		
		fgets(buffer,1024,pfile);
		if( ! feof(pfile) )
		{
			fputs(buffer,stdout);
			goto head;
		}
		fclose(pfile);
		return -1;
	}
}
