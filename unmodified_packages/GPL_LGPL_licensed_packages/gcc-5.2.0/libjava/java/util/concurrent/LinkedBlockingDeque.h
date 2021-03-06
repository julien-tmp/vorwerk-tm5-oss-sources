
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_LinkedBlockingDeque__
#define __java_util_concurrent_LinkedBlockingDeque__

#pragma interface

#include <java/util/AbstractQueue.h>
#include <gcj/array.h>


class java::util::concurrent::LinkedBlockingDeque : public ::java::util::AbstractQueue
{

public:
  LinkedBlockingDeque();
  LinkedBlockingDeque(jint);
  LinkedBlockingDeque(::java::util::Collection *);
private:
  jboolean linkFirst(::java::lang::Object *);
  jboolean linkLast(::java::lang::Object *);
  ::java::lang::Object * unlinkFirst();
  ::java::lang::Object * unlinkLast();
  void unlink(::java::util::concurrent::LinkedBlockingDeque$Node *);
public:
  virtual void addFirst(::java::lang::Object *);
  virtual void addLast(::java::lang::Object *);
  virtual jboolean offerFirst(::java::lang::Object *);
  virtual jboolean offerLast(::java::lang::Object *);
  virtual void putFirst(::java::lang::Object *);
  virtual void putLast(::java::lang::Object *);
  virtual jboolean offerFirst(::java::lang::Object *, jlong, ::java::util::concurrent::TimeUnit *);
  virtual jboolean offerLast(::java::lang::Object *, jlong, ::java::util::concurrent::TimeUnit *);
  virtual ::java::lang::Object * removeFirst();
  virtual ::java::lang::Object * removeLast();
  virtual ::java::lang::Object * pollFirst();
  virtual ::java::lang::Object * pollLast();
  virtual ::java::lang::Object * takeFirst();
  virtual ::java::lang::Object * takeLast();
  virtual ::java::lang::Object * pollFirst(jlong, ::java::util::concurrent::TimeUnit *);
  virtual ::java::lang::Object * pollLast(jlong, ::java::util::concurrent::TimeUnit *);
  virtual ::java::lang::Object * getFirst();
  virtual ::java::lang::Object * getLast();
  virtual ::java::lang::Object * peekFirst();
  virtual ::java::lang::Object * peekLast();
  virtual jboolean removeFirstOccurrence(::java::lang::Object *);
  virtual jboolean removeLastOccurrence(::java::lang::Object *);
  virtual jboolean add(::java::lang::Object *);
  virtual jboolean offer(::java::lang::Object *);
  virtual void put(::java::lang::Object *);
  virtual jboolean offer(::java::lang::Object *, jlong, ::java::util::concurrent::TimeUnit *);
  virtual ::java::lang::Object * remove();
  virtual ::java::lang::Object * poll();
  virtual ::java::lang::Object * take();
  virtual ::java::lang::Object * poll(jlong, ::java::util::concurrent::TimeUnit *);
  virtual ::java::lang::Object * element();
  virtual ::java::lang::Object * peek();
  virtual jint remainingCapacity();
  virtual jint drainTo(::java::util::Collection *);
  virtual jint drainTo(::java::util::Collection *, jint);
  virtual void push(::java::lang::Object *);
  virtual ::java::lang::Object * pop();
  virtual jboolean remove(::java::lang::Object *);
  virtual jint size();
  virtual jboolean contains(::java::lang::Object *);
public: // actually package-private
  virtual jboolean removeNode(::java::util::concurrent::LinkedBlockingDeque$Node *);
public:
  virtual JArray< ::java::lang::Object * > * toArray();
  virtual JArray< ::java::lang::Object * > * toArray(JArray< ::java::lang::Object * > *);
  virtual ::java::lang::String * toString();
  virtual void clear();
  virtual ::java::util::Iterator * iterator();
  virtual ::java::util::Iterator * descendingIterator();
private:
  void writeObject(::java::io::ObjectOutputStream *);
  void readObject(::java::io::ObjectInputStream *);
public: // actually package-private
  static ::java::util::concurrent::locks::ReentrantLock * access$0(::java::util::concurrent::LinkedBlockingDeque *);
  static ::java::util::concurrent::LinkedBlockingDeque$Node * access$1(::java::util::concurrent::LinkedBlockingDeque *);
  static ::java::util::concurrent::LinkedBlockingDeque$Node * access$2(::java::util::concurrent::LinkedBlockingDeque *);
private:
  static const jlong serialVersionUID = -387911632671998426LL;
  ::java::util::concurrent::LinkedBlockingDeque$Node * __attribute__((aligned(__alignof__( ::java::util::AbstractQueue)))) first;
  ::java::util::concurrent::LinkedBlockingDeque$Node * last;
  jint count;
  jint capacity;
  ::java::util::concurrent::locks::ReentrantLock * lock;
  ::java::util::concurrent::locks::Condition * notEmpty;
  ::java::util::concurrent::locks::Condition * notFull;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_LinkedBlockingDeque__
