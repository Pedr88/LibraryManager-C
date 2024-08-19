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
    printf("\n============== WELCOME TO LIBRARY ==============");
    printf("\n\n[1] Add book information\n[2] Display book information");
    printf("\n[3] List all book of given author\n[4] List the count of books in the library\n[5] Exit");
    printf("\n\nEnter one of the above: ");
    scanf("%d", &input);
    getchar();

    switch (input) {
    // Add book
    case 1:
      printf("================================================\n");
      printf("Enter book name: ");
      fgets(lib[i].bookName, sizeof(lib[i].bookName), stdin);
      lib[i].bookName[strcspn(lib[i].bookName, "\n")] = 0;

      printf("Enter author name: ");
      fgets(lib[i].author, sizeof(lib[i].author), stdin);
      lib[i].author[strcspn(lib[i].author, "\n")] = 0;

      printf("Enter pages: ");
      scanf(" %d", &lib[i].pages);

      printf("Enter price: ");
      scanf(" %f", &lib[i].price);
      count++;
      i++;
      break;
    
    // Print book information
    case 2:
      printf("================================================\n");
      printf("you have entered the following information:");
        for (i = 0; i < count; i++) {
          printf("\n\nbook name = %s", lib[i].bookName);
          printf("\t author name = %s", lib[i].author);
          printf("\t  pages = %d", lib[i].pages);
          printf("\t  price = %.2f\n", lib[i].price);
        }
      break;
    
    // Take the author name as input
    case 3:
      
      break;
    
    // Print number of book in library
    case 4:
      
      break;
    
    case 5:
      exit(0);
    }
  }
   
}
