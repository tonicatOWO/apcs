#nclude <iostream>
using namespace std;

int main() {
  int s;
  std::cin >> s;
  if(s <= 10){s *=6;}
  else if(s <= 20){s = (s - 10) * 2 + 60;}
  else if(s <= 40){s = (s - 20) * 1 + 80;}
  else {s = 100;}
  std::cout << s << endl;
}
