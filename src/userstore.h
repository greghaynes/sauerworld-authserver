#ifndef USERSTORE_H
#define USERSTORE_H

struct userinfo
{
    char *name;
    void *pubkey;
};

class UserStore
{
	public:
		UserStore();
		virtual ~UserStore();
		
		virtual bool insert(userinfo *info) = 0;
		virtual userinfo *get(char *name) = 0;
		virtual bool clear() = 0;

};

#endif

