#include <stdio.h>



// student structure
//struct Student...
struct Student {
        char firstname [50];
        char lastname [50];
        int age[5];
        int studentid[50];
};

int main()
{

  // an array of students
  //xxx students;

  int numStudents = 0;
  while (1)
  {
    char c;
    char input[256];

    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
      struct Student student;

      printf("\nFirst name:");
      scanf("%s", &student.firstname);

      printf("\nLast  name:");
      scanf("%s", &student.lastname);

      printf("\nAge:");
      scanf("%d", &student.age);

      printf("\nID:");
      scanf("%d", &student.studentid);
      numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}
