#include <vcl>

class Data
{
public:
        TButton *array[37];
        int miesiac;
        int rok;
        void set_month(int,TLabel *);
        int pierwszy(int,int);
        int ostatni(int,int);
        void hide(int,int);
        void set_value(int,int);
        void next_month(TLabel *,TLabel *);
        void prev_month(TLabel *,TLabel *);
        void next_year(TLabel *,TLabel *);
        void prev_year(TLabel *,TLabel *);
        int calculate_day(int,int,int);
        void which_day(int,TLabel *);
        void set_date(String,TLabel *,TLabel *,TLabel *);
        void set_year(TLabel *);
};
