//Ivan Rao
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

double average(int *arr, int size){
  int sum = 0;
  int i;
  for (i = 0; i < size; i++){
    sum += arr[i];
  }
  return (1.0 * sum/size);
}


void copy(int *arr_one, int *arr_two, int size){
  int i;
  for (i = 0; i < size; i++){
    arr_two[i] = arr_one[i];
  }
  return;
}

int length (char *string){
  int size = 0;
  while(*string){
    size++;
    string++;
  }
  return size;
}

int main(){

  srand( 233421231 );

//step 1
  int arr[6];
  int arr_two[6];
  int i;

  for (i = 0; i < 6; i++){
    arr[i]= rand();
    printf("arr[%d]: %d\n", i,arr[i]);
  }
  for (i = 0; i < 6; i++){
    arr_two[i]= rand();
    printf("arr_two[%d]: %d\n", i, arr_two[i]);
  }

  printf("\nAverage of arr: %f\nAverage of arr_two: %f\n", average(arr, 6), average(arr_two, 6));
//step 2
  copy(arr, arr_two, 6);

  printf("\nAfter arr is copied to arr_two\n");
  for (i = 0; i < 6; i++){
    printf("arr[%d]: %d\n", i,arr[i]);
  }
  for (i = 0; i < 6; i++){
    printf("arr_two[%d]: %d\n", i,arr_two[i]);
  }
//step 3
  char s[] = "chickennuggets";
  printf("\ns: %s\n", s);
  printf("Length of s: %d\n\n", length(s));


  //Demonstrating the functions
    printf("Demonstrating functions from string.h\n");
    //strcopy
    char s_one[20];
    char s_two[] = "I am a string.";
    strcpy(s_one,s_two);
    printf("%s\n\n",s_one);
    //strcat
    char s_three[] = " I am an array of characters";
    strcat(s_one, s_three);
    printf("%s\n\n",s_one);
    //strcmp
    char chicken[] = "chicken";
    char egg[] = "egg";
    if (strcmp(chicken, egg)<0) {
      printf("Chicken comes before egg\n\n");
    }
    //strchr
    printf("Address of the chicken string: %p\n", chicken);
    printf("Address of the first c in chicken: %p", strchr(chicken, 'c'));

  return 0;

}
