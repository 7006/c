#define NAME_LEN 25

struct {
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
} part1 = { 5280, "Disk drive", 10 },
  part2 = { 9140, "Printer", 5 },
  part3 = { .number = 7529, .name = "Floppy disk", .on_hand = 100 };

int main() {
  part1.number = 2580;
  part1.on_hand++;;

  printf("Part number: %d\n", part1.number);
  printf("Part name: %s\n", part1.name);
  printf("Quantity on hand: %d\n", part1.on_hand);

  printf("Enter part1 quantity on_hand: ");
  scanf("%d", &part1.on_hand);
  printf("Quantity on hand: %d\n", part1.on_hand);

  return 0;
}