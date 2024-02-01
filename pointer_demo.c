// C Program to find the size of different pointers types
#include <stdio.h>

// dummy structure
struct str {
};

// dummy function
void func(int a, int b){};

int main()
{
	// dummy variables definitions
	int a = 10;
	char c = 'G';
	struct str x;

	// pointer definitions of different types
	int* ptr_int = &a;
	char* ptr_char = &c;
	struct str* ptr_str = &x;
	void (*ptr_func)(int, int) = &func;
	void* ptr_vn = NULL;

	// printing sizes
	printf("Size of Integer Pointer \t:\t%d bytes\n",
		sizeof(ptr_int));
	printf("Size of Character Pointer\t:\t%d bytes\n",
		sizeof(ptr_char));
	printf("Size of Structure Pointer\t:\t%d bytes\n",
		sizeof(ptr_str));
	printf("Size of Function Pointer\t:\t%d bytes\n",
		sizeof(ptr_func));
	printf("Size of NULL Void Pointer\t:\t%d bytes\n",
		sizeof(ptr_vn));
		
		 int v[3] = { 10, 100, 200 };
 
    // Declare pointer variable
    int* ptr;
 
    // Assign the address of v[0] to ptr
    ptr = v;
 
    for (int i = 0; i < 3; i++) {
 
        // print value at address which is stored in ptr
        printf("Value of *ptr = %d\n", *ptr);
 
        // print value of ptr
        printf("Value of ptr = %p\n\n", ptr);
 
        // Increment pointer ptr by 1
        ptr++;
    }
int val[3] = { 5, 10, 15 };
 
    // Declare pointer variable
    int* ptr1;
 
    // Assign address of val[0] to ptr.
    // We can use ptr=&val[0];(both are same)
    ptr1 = val;
 
    printf("Elements of the array are: ");
 
    printf("%d, %d, %d\n", ptr1[0], ptr1[1], ptr1[2]);
	 int arr[5] = { 1, 2, 3, 4, 5 };
 
    // defining the pointer to array
    int* ptr_arr = arr;
 
    // traversing array using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr_arr++);
    }
	return 0;
}
