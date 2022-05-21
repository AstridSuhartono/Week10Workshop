#pragma once
#include <string>
#include "Items.h"
#include "ISubject.h"
#include <list>

class NotificationSystem: public ISubject {
	
public:
	virtual ~NotificationSystem() {};
	std::string notifyPatron();
	void attach(IObserver* observer) override {};
	void detach(IObserver* observer) override {};
	void notify() override {};
private:
	std::list<IObserver*> listObserver;
};

