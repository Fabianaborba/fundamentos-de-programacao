#include <stdio.h>

struct person {
  int age;
};

typedef struct person Person;

void passByReference(Person *p);

int main(void) {
  Person glauco;
  glauco.age = 45;
  Person *ptrGlauco = &glauco;

  printf("Valor antes de passar = %d\n", glauco.age);
  printf("Valor do ponteiro antes de passar = %d\n", ptrGlauco->age);

  passByReference(ptrGlauco); // passagem por valor

  printf("Valor depois = %d\n", glauco.age);

  return 0;
}

void passByReference(Person *p) {
  p->age = 50;
}