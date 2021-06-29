#include <iostream>
#include <ctime>

class cPlayer
{
      public:
             int pos;
             int pts;
};

cPlayer p1, p2;

int random(int nMin, int nMax)
{ return rand() % (nMax - nMin + 1) + nMin; }

int main()
{
    srand(static_cast<unsigned int>(time(NULL)));
    
    p1.pos = 0 ; p1.pts = 0 ;
    p2.pos = 0 ; p2.pts = 0 ;
    
    int i = 0 ;
    
    while(true)
    {
                 i = random(1,6);
                 std::cout << "Player 1 (is on the square " << p1.pos << ") rolled: " << i << std::endl;
                 while(i > 0)
                 {
                         p1.pos++;
                         if(p1.pos == 36)
                         {
                                   p1.pos = 0;
                                   p1.pts++;
                                   if(p1.pts == 5) break;
                         }
                         i--;
                 }
                 std::cout << "Player 1 came to square " << p1.pos << " (" << p1.pts << " token)" << std::endl;
                 if(p1.pts == 5) break;
                 
                 i = random(1,6);
                 std::cout << "Player 2 (is on the square " << p2.pos << ") rolled: " << i << std::endl;
                 while(i > 0)
                 {
                         p2.pos++;
                         if(p2.pos == 36)
                         {
                                   p2.pos = 0;
                                   p2.pts++;
                                   if(p2.pts == 5) break;
                         }
                         i--;
                 }
                 std::cout << "Player 2 came to square " << p2.pos << " (" << p2.pts << " token)" << std::endl;
                 if(p2.pts == 5) break;
    }
    
    if(p1.pts == 5) std::cout << "The winner is Player 1" << std::endl;
    if(p2.pts == 5) std::cout << "The winner is Player 2" << std::endl;
    
    system("PAUSE");
    return 0;
}
