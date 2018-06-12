#include <stdio.h>

struct person {
  int age;
};

typedef struct person Person;

void passByValue(Person p);

int main(void) {
  Person glauco;
  glauco.age = 45;

  printf("Valor antes de passar = %d\n", glauco.age);

  passByValue(glauco); // passagem por valor

  printf("Valor depois = %d\n", glauco.age);

  return 0;
}

void passByValue(Person p) {
  p.age = 50;
}