#ifndef TASTE_H
#define TASTE_H
#include <vector>
#include <string>
#include <memory>

/* Message */
class Message {
 public:
  Message(std::string const&,std::string const&,std::string const&);
  std::string const to;
  std::string const from;
  std::string const message;
};

Message::Message(std::string const& to, std::string const& from, std::string const& message)
:to{to}, from{from}, message{message}
{}

/* Inbox */
class Inbox{
 public:
  Inbox();
  void send(Message const&);
  std::vector<Message> messages;
};

Inbox::Inbox()
:messages{}
{}


void Inbox::send(Message const& m) {
  messages.push_back(m);
}


#endif /*TASTE_H*/
