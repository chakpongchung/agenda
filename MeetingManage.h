/*------MeetingManage.h--------------------
 *
 *---------------------------------------*/

#ifndef MEETINGMANAGE_H
#define MEETINGMANAGE_H

#include <list>
#include "Date.h"
#include "Meeting.h"

using std::list;

class MeetingManage {
 private:
  static bool instanceFlag;
  //ʵ����ʶ
  static MeetingManage *instance;
  //ʵ��
  MeetingManage();

  list<Meeting> meetings;
  //�����б�

 public:
  //�����򷵻�ʵ��
  static MeetingManage *getInstance();
  ~MeetingManage();

  //����meeting
  bool addMeeting(string sponspor, string participator, Date stime, Date etime,
                  string title);
  //��������ɾ������
  bool deleteMeeting(string userName, string title);
  //ɾ���û����л���
  bool deleteAllMeetings(string userName);
  //������Ϣ
  bool updateMeetingParticipator(string title, string newParticipator);
  bool updateMeetingStartDate(string title, Date newStartDate);
  bool updateMeetingEndDate(string title, Date newEndDate);
  bool updateMeetingTitle(string title, string newTitle);
  //���������ѯ����
  Meeting *queryMeetingByTitle(string title);
  //����ʱ���ѯ����
  list<Meeting> queryMeetingsByTime(string userName, Date stime, Date etime);
  //��û����б�
  list<Meeting> listAllMeetings(string userName);
  list<Meeting> listAllSponsorMeetings(string userName);
  list<Meeting> listAllParticipateMeetings(string userName);

  bool save();
  bool load();
};

#endif
