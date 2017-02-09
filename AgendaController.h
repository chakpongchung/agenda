/*-------AgendaControl.h---------------
 *
 *-----------------------------------*/

#ifndef AGENDACONTROLLER_H
#define AGENDACONTROLLER_H

#include <iostream>
#include "AgendaService.h"

using namespace std;

class AgendaController {
 private:
  User *currentUser;
  AgendaService agendaService;

  bool executeOperation(string op);
  //����ִ��ָ��

  void userLogIn();
  //�û���¼
  void userRegister();
  // �û�ע��
  void userLogOut();
  //�û��ǳ�
  void deleteUser();
  //ɾ����ǰ�û�
  void listAllUsers();
  //��ӡ�г�����ע���û�

  void createMeeting();
  //����һ���µĻ���
  void listAllMeetings();
  //��ӡ�û��������صĻ���
  void listAllSponsorMeetings();
  //��ӡ���� �û�Ϊ�����ߵĻ���
  void listAllParticipateMeetings();
  //��ӡ���� �û�Ϊ�λ��ߵĻ���
  void queryMeetingByTitle();
  //����Title��ѯ�û�����
  void queryMeetingByTimeInterval();
  //����ʱ����ѯ�û�����
  void deleteMeetingByTitle();
  //����Titleɾ������
  void deleteAllMeetings();
  //ɾ������ �û���Ϊ�����ߵĻ���

  void printMeetings(list<Meeting> meetings);
  //��ӡ����
  void updateUserPassword();
  void updateUserEmail();
  void updateUserPhone();
  void updateMeetingParticipator();
  void updateMeetingStartDate();
  void updateMeetingEndDate();
  void updateMeetingTitle();

 public:
  AgendaController();
  //Ĭ�Ϲ��캯��
  void getOperation();
  //�ӿ�
};

#endif
