#include <iostream>
#include <cstdint>
using namespace std;

class RGBA {
private:
    uint16_t m_red;
    uint16_t m_green;
    uint16_t m_blue;
    uint16_t m_alpha;
public:
    RGBA(uint16_t r, uint16_t g, uint16_t b, uint16_t a) {
         m_red = r;
         m_green = g;
         m_blue = b;
         m_alpha = a;

    }
    void print() {
        cout << m_red <<"."<< m_green <<"."<< m_blue <<"."<< m_alpha;
    }


};

int main()
{
    RGBA task(0,0,0,255);
    task.print();
}
