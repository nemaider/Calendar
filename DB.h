#include <windows.h>
#include <mysql.h>

#define HOST "54.38.50.59"
#define USER "www2857_events"
#define PASS "8GJoBGoc3WUzkUA2rAn3"
#define BASE "www2857_events"

class DB
{
public:
        MYSQL *connect_db();
        bool logining(String,String);
        bool signup(String,String);
        bool check_login(String);
        bool check_pass(String,String);
        void get_event(String,String,String,String,TLabel *);
        void get_event_id(String,String,String,TLabel *);
        void add_event(String,String,String,String,String,String,String);
        void delete_event(String);
};
