#include <fstream>
#include <iostream>
#include "AgendaController.h"

using namespace std;

int main() {
  while (1) {
    cout << "����������������(Y/N)" << endl;
    string choice;
    cin >> choice;

    if (choice == "N") break;
    //ѡ��N  �Խ�������������
    else if (choice == "Y")
    //ѡ��Y   �������������ı���������
    {
      freopen("in.txt", "r", stdin);
      freopen("out.txt", "w", stdout);
      break;
    }
    //��������Ϊ�Ƿ����룬���½�������
    else {
      cout << "command illegal!" << endl;
    }
  }

  AgendaController agendaController;
  // ����UI���Ķ���

  agendaController.getOperation();
  // Agenda����ϵͳ�Ľӿ�

  return 0;
}
