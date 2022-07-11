#include <stdio.h>

int swap_Endians(int value)
{

int leftmost_byte;
int left_middle_byte;
int right_middle_byte;
int rightmost_byte;
int result;

//Right shift the 2 left byte 
leftmost_byte = (value & 0x000000FF) >> 0;
left_middle_byte = (value & 0x0000FF00) >> 8;

//Right shift the 2 left byte
right_middle_byte = (value & 0x00FF0000) >> 16;
rightmost_byte = (value & 0xFF000000) >> 24;

//left shift byte
leftmost_byte <<= 24;
left_middle_byte <<= 16;

//right shift byte
right_middle_byte <<=0;
rightmost_byte <<= 0;

result = (leftmost_byte | left_middle_byte
          | right_middle_byte | rightmost_byte);
 return result;
}

 int main()
{

    int big_Endian = 0x12345678; 
    int little_Endian = 0x78563412;

    int result1, result2;
//swap 2 endian
    result1 = swap_Endians(big_Endian);

    result2 = swap_Endians(little_Endian);

    printf("big Endian to little: 0x %x\n little Endian to big: 0x%x\n",
           result1, result2);

    return 0;
}
