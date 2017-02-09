/*-------UserManage.h--------------------
 *
 *-------------------------------------*/

#ifndef USERMANAGE_H
#define USERMANAGE_H

#include <list>
#include "User.h"

using std::list;

class UserManage {
 private:
  static bool instanceFlag;
  //ʵ����ʶ
  static UserManage *instance;
  //��һʵ��
  UserManage();

  list<User> users;
  //�û��б�

 public:
  static UserManage *getInstance();
  ~UserManage();

  User *findUserByName(string name);
  //�����������û�
  bool createUser(string name, string password, string email, string phone);
  //����һ���µ��û�
  bool deleteUser(User u);
  //ɾ���û�

  //�����û���Ϣ
  bool updateUserPassword(User u, string newPassword);
  bool updateUserEmail(User u, string newEmail);
  bool updateUserPhone(User u, string newPhone);
  list<User> listAllUsers();
  //�����û���Ϣ
  bool load();
  bool save();
};

#endif
