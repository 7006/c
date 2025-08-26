#define NAME_LEN 25
#define LEN 3

typedef struct {
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
} Part;

void print_part(Part *p) {
  printf("Part number: %d\n", p->number);
  printf("Part name: %s\n", p->name);
  printf("Quantity on hand: %d\n", p->on_hand);
  printf("\n");
};

void print_inventory(Part inventory[LEN]) {
  for (int i = 0; i < LEN; i++) {
    print_part(&inventory[i]);
  }
}

int main() {
  Part inventory[LEN];
  inventory[0] = (Part) { 5280, "Disk drive", 10 };
  inventory[1] = (Part) { 9140, "Printer", 5 };
  inventory[2] = (Part) { .number = 7529,  .name = "Floppy disk", .on_hand = 100 };

  print_inventory(inventory);

  return 0;
}
