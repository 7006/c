#define NAME_LEN 25

struct part {
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
};

void print_part(struct part p) {
  printf("Part number: %d\n", p.number);
  printf("Part name: %s\n", p.name);
  printf("Quantity on hand: %d\n", p.on_hand);
  printf("\n");
};

int main() {
  struct part part1 = { 5280, "Disk drive", 10 };
  struct part part2 = { 9140, "Printer", 5 };
  struct part part3 = {
    .number = 7529,
    .name = "Floppy disk",
    .on_hand = 100
  };

  print_part(part1);
  print_part(part2);
  print_part(part3);

  return 0;
}
