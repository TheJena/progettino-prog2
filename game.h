using namespace std ;

struct couple   {
                    int t1 ;
                    const char * name1 ;
                    int x1 ;
                    int y1 ;
                    int z1 ;

                    int t2 ;
                    const char * name2 ;
                    int x2 ;
                    int y2 ;
                    int z2 ;
                } ;

void start_game () ;

void check_couple ( int &row ) ;

void insert_half_pair ( const int &num, const int &x, const int &y, const int &z ) ;

void end_game () ;

void opponent_round () ;