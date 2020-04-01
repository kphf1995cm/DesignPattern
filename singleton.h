# ifndef _SINGLETON_H_
# define _SINGLETON_H_
# include<iostream>

// lazy singleton
class Singleton {	
private:
	static Singleton* instance;
private:
	Singleton() {};
	~Singleton() {};
	Singleton(const Singleton&);
	Singleton & operator=(const Singleton&);
public:
	static Singleton* getInstance() {
		if (instance == NULL)
			instance = new Singleton();
		return instance;
	}
};
Singleton* Singleton::instance = NULL;

// eager singleton
class EagerSingleton {
private:
	static EagerSingleton instance;
private:
	EagerSingleton() {};
	~EagerSingleton() {};
	EagerSingleton(const EagerSingleton&);
	EagerSingleton& operator=(const EagerSingleton&);
public:
	static EagerSingleton& getInstance() {
		return instance;
	}
};
EagerSingleton EagerSingleton::instance;
# endif
