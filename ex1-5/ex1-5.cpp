// ����� 1 - ����� 5
// ����� ������ ����
// ����� ���� - ����� ������
//Lesson 1 - Example 5
//Class - Rectangle
//control abstraction
//Dividing the code into separate files

#include "Rect.h" //���� �� ��� ����� �� �������
using namespace std; //�� ��� ������ �cout

int main() {
    Rect r;
    
    r.setLength(4);
    
    cout << r.getLength();

    return 0;
}

