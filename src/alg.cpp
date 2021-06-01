// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_
#включить <cassert>
шаблон<typename T>
класс TPQueue {
   ЭЛЕМЕНТ структуры {
 T данные;
 ПУНКТ* далее;
 ПУНКТ* последний;
  };
  private:
 ITEM* head;
 ITEM* tail;
  class TPQueue {
 item->last = last;
    return item;
  }
   public:
  TPQueue() : head(nullptr), tail(nullptr) {}

  ~TPQueue() {
    while (head) {
      pop();
    }
  }
  void push(const T& data) {
    if (tail && head) {
      ITEM* cur = tail;
      while (cur && data.prior > (cur->data).prior) {
        cur = cur->last;
      }
      if (cur) {
        ITEM* temp = cur->next;
        cur->next = create(data, cur);
        cur = cur->next;
        cur->next = temp;
        if (temp)
          temp->last = cur;
        else
          tail = cur;
      } else {
        cur = create(data, nullptr);
        cur->next = head;
        head->last = cur;
        head = cur;
      }
    } else {
      head = create(data, nullptr);
      tail = head;
    }
  }
  T pop() {
      ITEM* temp = head->next;
      T data = head->data;
      if (temp)
        temp->last = nullptr;
      delete head;
      head = temp;
    return data;
  }
};
struct SYM {
  char ch;
  int  prior;
};
#endif // INCLUDE_TPQUEUE_H_
