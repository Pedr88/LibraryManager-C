#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct library {
  char bookName[20];
  char author[20];
  int pages;
  float price;
};

int main() {
  struct library lib[100];

  char authorName[30], bookName[30];
  int i, input, count;

  i = input = count = 0;

  while (input != 5) {
    printf("\n\n============== WELCOME TO LIBRARY ==============");
    printf("\n\n[1] Add book information\n[2] Display book information");
    printf("\n[3] List all book of given author\n[4] List the count of books in the library\n[5] Exit");
    printf("\n\nEnter one of the above: ");
    scanf("%d", &input);

    switch (input) {
    case 1:
      printf("Enter book name: ");
      scanf(" %s", lib[i].bookName);

      printf("Enter author name: ");
      scanf(" %s", lib[i].author);

      printf("Enter pages: ");
      scanf(" %s", &lib[i].pages);

      printf("Enter price: ");
      scanf(" %s", &lib[i].price);
      count++;
      break;
    
    case 2:
      
      break;
    
    case 3:
      
      break;
    
    case 4:
      
      break;
    
    case 5:
      exit(0);
    }
  }
   
}
