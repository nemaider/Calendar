#include <vcl.h>
#include "DB.h"

MYSQL *DB::connect_db(){
    MYSQL *connect;
    connect = mysql_init(0);
    connect = mysql_real_connect(connect, HOST, USER, PASS, BASE, 0, NULL, 0);

    if(!connect)
    {
        ShowMessage("Nie udalo polaczyc sie z baza MySQL");
        return NULL;
    }
    return connect;
}

bool DB::logining(String login,String password)
{
        MYSQL *connect=connect_db();
        if(connect==NULL)
               return 0;

        AnsiString caption;
        String zapytanie="SELECT login FROM users WHERE login='"+login+"' AND password='"+password+"'";
        char *query=zapytanie.c_str();

        int qstate=mysql_query(connect,query);
        if(qstate==0)
        {
                MYSQL_RES *res = mysql_use_result (connect);
                MYSQL_ROW row=mysql_fetch_row(res);
                while(row)
                        return 1;
        }
        mysql_close(connect);
        return 0;
}

bool DB::signup(String login,String password)
{
        MYSQL *connect=connect_db();
        if(connect==NULL)
               return 0;

        AnsiString caption;
        String zapytanie="INSERT INTO `users`(`id`, `login`, `password`) VALUES (0,'"+login+"','"+password+"')";
        char *query=zapytanie.c_str();

        int qstate=mysql_query(connect,query);
        if(qstate!=0)
        {
                ShowMessage("Nie uda³o sie polaczyc z baza!");
                return 0;
        }
        mysql_close(connect);
        return 1;
}

bool DB::check_login(String login)
{
        MYSQL *connect=connect_db();
        if(connect==NULL)
                ShowMessage("Nie uda³o sie polaczyc");

        String check;
        String zapytanie="SELECT login FROM users WHERE login='"+login+"'";
        char *query=zapytanie.c_str();

        int qstate=mysql_query(connect,query);
        if(qstate==0)
        {
                MYSQL_RES *res = mysql_use_result (connect);
                MYSQL_ROW row=mysql_fetch_row(res);
                while(row)
                {
                        check=check+row[0];
                        if(login.operator==(check))
                                return 0;
                        check="";
                }
        }
        mysql_close(connect);
        return 1;
}

bool DB::check_pass(String pass,String repass)
{
        if(pass.operator==(repass))
                return 1;
        ShowMessage("Has³a musz¹ byc takie same!");
        return 0;
}

void DB::get_event(String user,String year,String month,String day,TLabel *label)
{
        MYSQL *connect=connect_db();
        if(connect==NULL)
               return;

        AnsiString caption;
        String zapytanie="SELECT DATE_FORMAT(`godzina`,'%H:%i') AS `godzina`,nazwa FROM eventy WHERE user='"+user+"' AND data='"+year+"-"+month+"-"+day+"'"+" ORDER BY godzina ASC";
        char *query=zapytanie.c_str();

        int qstate=mysql_query(connect,query);
        if(qstate==0)
        {
                MYSQL_RES *res = mysql_use_result (connect);
                MYSQL_ROW row=mysql_fetch_row(res);
                while(row)
                {
                        caption=caption+"\n"+row[0]+" "+row[1];
                        row=mysql_fetch_row(res);
                }
        }

        if(caption=="")
                caption="\nbrak wydarzen";
        label->Caption=caption;

        mysql_close(connect);
}

void DB::get_event_id(String user,String year,String month,String day,TLabel *label)
{
        MYSQL *connect=connect_db();
        if(connect==NULL)
               return;

        AnsiString caption;
        String zapytanie="SELECT id_zadania FROM eventy WHERE user='"+user+"' AND data='"+year+"-"+month+"-"+day+"'"+" ORDER BY godzina ASC";
        char *query=zapytanie.c_str();

        int qstate=mysql_query(connect,query);
        if(qstate==0)
        {
                MYSQL_RES *res = mysql_use_result (connect);
                MYSQL_ROW row=mysql_fetch_row(res);
                while(row)
                {
                        caption=caption+"\n"+row[0];
                        row=mysql_fetch_row(res);
                }
        }

        label->Caption=caption;

        mysql_close(connect);
}

int DB::check_id(String user,String year,String month,String day,String id)
{
        MYSQL *connect=connect_db();
        if(connect==NULL)
               return 0;

        int status=0;

        AnsiString caption;
        String zapytanie="SELECT id_zadania FROM eventy WHERE user='"+user+"' AND data='"+year+"-"+month+"-"+day+"'"+" ORDER BY godzina ASC";
        char *query=zapytanie.c_str();

        int qstate=mysql_query(connect,query);
        if(qstate==0)
        {
                MYSQL_RES *res = mysql_use_result (connect);
                MYSQL_ROW row=mysql_fetch_row(res);
                while(row)
                {
                        if(id==row[0]){
                                status=1;
                                return status;
                        }

                        row=mysql_fetch_row(res);
                }
        }



        mysql_close(connect);
        return status;


}

void DB::add_event(String user,String nazwa,String year,String month,String day, String godz, String min)
{
        MYSQL *connect=connect_db();
        if(connect==NULL)
               return;

        AnsiString caption;
        String zapytanie;

        if((godz <= 0) && (min <= 0))
        {
                zapytanie="INSERT INTO `eventy`(`id_zadania`, `nazwa`, `data`, `user`) VALUES (0,'"+nazwa+"','"+year+"-"+month+"-"+day+"','"+user+"')";
        } else
        {
                zapytanie="INSERT INTO `eventy`(`id_zadania`, `nazwa`, `data`, `godzina`, `user`) VALUES (0,'"+nazwa+"','"+year+"-"+month+"-"+day+"','"+godz+":"+min+"','"+user+"')";
        }


        char *query=zapytanie.c_str();

        int qstate=mysql_query(connect,query);
        if(qstate!=0)
                ShowMessage("Nie udalo siê dodac wydarzenia!");

        mysql_close(connect);
}

void DB::delete_event(String user,String id,String year,String month,String day)
{
        MYSQL *connect=connect_db();
        if(connect==NULL)
                return;

        int status=0;
        String usuwanie;
        // walidacja id

        String caption;
        String zapytanie="SELECT id_zadania FROM eventy WHERE user='"+user+"' AND data='"+year+"-"+month+"-"+day+"'"+" ORDER BY godzina ASC";
        char *query=zapytanie.c_str();

        int qstate=mysql_query(connect,query);
        if(qstate==0)
        {
                MYSQL_RES *res = mysql_use_result (connect);
                MYSQL_ROW row=mysql_fetch_row(res);
                while(row)
                {
                        caption=row[0];
                        row=mysql_fetch_row(res);

                        if(id == caption)
                        {
                                usuwanie="DELETE FROM `eventy` WHERE `Id_zadania`='"+id+"'";

                                char *query1=usuwanie.c_str();
                                int qstate1=mysql_query(connect,query1);

                                if(qstate1!=0){
                                        ShowMessage(caption);
                                        ShowMessage(usuwanie);
                                        ShowMessage(zapytanie);
                                        ShowMessage("Nie udalo sie usunac wydarzenia!");

                                } else {
                                        status=1;
                                        ShowMessage(caption);
                                        ShowMessage(usuwanie);
                                        ShowMessage(zapytanie);
                                        ShowMessage("Usunieto zadanie");
                                }
                        }

                }
                if(status==0)
                        ShowMessage("Podano zly numer zadania!");
        }

        mysql_close(connect);

        // koniec walidacji




}

 /*
void DB::edit_event(String user,String id,TEdit *description, TEdit *hour, TEdit *min)
{
        MYSQL *connect=connect_db();
        if(connect==NULL)
               return;


        String zapytanie="SELECT DATE_FORMAT(`godzina`,'%H') AS `godzina`,nazwa FROM eventy WHERE id_zadania='"+id+"' AND user='"+user+"' ORDER BY godzina ASC";
        char *query=zapytanie.c_str();

        int qstate=mysql_query(connect,query);
        if(qstate==0)
        {
                MYSQL_RES *res = mysql_use_result (connect);
                MYSQL_ROW row=mysql_fetch_row(res);

                description->Text=row[1];
                hour->Text=row[0];
                min->Text=row[0];

        }



        mysql_close(connect);
}

*/