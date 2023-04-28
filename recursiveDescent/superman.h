#ifndef SUPERMAN

// yylex returns 0 when EOF is encountered
enum token
{
     TITLE = 1,
     NAME,
     PUBLISHER,
     YEAR,
     MEDIA,
     TV,
     MOVIES,
     ZILCH
};

char *token_name(enum token token);

struct counter
{
     int dc_count;
     int marvel_count;
};

union _lexVal
{
     struct counter _counter;
     int is_marvel;
};

extern union _lexVal lexicalValue;

void errorMsg(const char *s);

#endif
