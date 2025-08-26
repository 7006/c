#define NAME_LEN 25

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

int main() {
  print_part(& (Part) { 5280, "Disk drive", 10 });
  print_part(& (Part) { 9140, "Printer", 5 });
  print_part(& (Part) { .number = 7529, .name = "Floppy disk", .on_hand = 100 });

  return 0;
}
