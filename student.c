#include <stdio.h>

// student structure
//struct Student...
struct Student
{
  char firstName[20];
  char lastName[20];
  int age;
  int id;
};

void printStudent(struct Student* student)
{
  printf("Student: %s %s\n", student->firstName, student->lastName);
  printf("Age: %d\n", student->age);
  printf("Id: %d\n", student->id);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
  for (int i = 0; i < num; i++) {
    printf("\n student %d \n", i);
    printStudent(&students[i]);
  }
}

int main()
{
  char input[256];
  int imput[256];

  // an array of students
  struct Student students[10];

  int numStudents = 0;
  while (1)
  {
    char c;
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
      printf("\n First name: ");
      fgets(input, 256, stdin);
      sscanf(input, "%s", students[numStudents].firstName);

      printf("\n Lirst name: ");
      fgets(input, 256, stdin);
      sscanf(input, "%s", students[numStudents].lastName);

      printf("\n Age: ");
      fgets(input, 256, stdin);
      sscanf(input, "%d", students[numStudents].age);

      printf("\n Id: ");
      fgets(input, 256, stdin);
      sscanf(input, "%d", students[numStudents].id);

numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}
