/*  write a program that uses pointers to each element of an array to zero */
#include <stdio.h>
int array[]={1,2,3,4,5,6,7,8,9,11,22,34,67,44,33,55,49};
int *array_ptr;

/* this function set zero at the memory location of array[index]*/
int  set_zero(int *array)
{
  *array=0;
}


int main()
{
   int index = 0;
   array_ptr=array;

 /* if array index is not zero it goes through the while */
   while(array[index] != 0)
   {
  /* pass the memory addres to the function*/
    set_zero(array);
    index++;
  /* print the memory addres of array[index] and its value */
    printf("the value at %p is %d\n", &array, *array_ptr);

    }

   return (0);


}
