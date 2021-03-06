/*---User.h--------------------------
 * User definition
 *---------------------------------*/

#ifndef USER_H
#define USER_H

#include <list>
#include <string>
#include "Meeting.h"
#include "MeetingManage.h"

using std::string;
using std::list;
/*
 * define User class
 */
class User {
 private:
  string name;
  string password;
  string email;
  string phone;

  MeetingManage *meetingManage;
  // meetingManage  管理会议列表

 public:
  User(string n, string pw, string e, string ph);

  string getName();
  void setName(string n);

  string getPassword();
  void setPassword(string p);

  string getEmail();
  void setEmail(string e);

  string getPhone();
  void setPhone(string p);
  //获得用户会议列表
  list<Meeting> getAllMeetings();
  list<Meeting> getAllSponsorMeetings();
  list<Meeting> getAllParticipateMeetings();
};

#endif
