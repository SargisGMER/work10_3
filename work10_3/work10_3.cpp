#include <iostream>
using namespace std;

char * func(int i);

int main()
{
	for (int i = 0; i < 3; i++)
	{
		char * ptr = func(i);
		printf("ptr -> %p value -> %s\n", ptr,ptr );
		free(ptr);
	}
	system("pause");
    return 0;
}

char * func(int i) {
	const char * arr[10] = { "Text1","Text2","Text3" };
	char * ptr1;
	ptr1 = (char*)malloc(256);
	strcpy(ptr1, arr[i]);
	
	return ptr1;
}
